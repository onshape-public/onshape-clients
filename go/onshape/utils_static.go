/*
 * Onshape REST API
 *
 * The Onshape REST API consumed by all clients.
 *
 * API version: 1.113
 * Contact: api-support@onshape.zendesk.com
 *
 */

package onshape

import (
	"context"
	"crypto/hmac"
	"crypto/sha256"
	"encoding/base64"
	"errors"
	"fmt"
	"math/rand"
	"net/http"
	"net/url"
	"os"
	"strconv"
	"strings"
	"sync"
	"time"

	"golang.org/x/exp/utf8string"
)

const (
	APISecretKey = "ONSHAPE_API_SECRET_KEY"
	APIAccessKey = "ONSHAPE_API_ACCESS_KEY"
	BaseURL      = "ONSHAPE_BASE_URL"
	HTTPDebug    = "ONSHAPE_HTTP_DEBUG"
)

// BTJEditInterface non-generated interface for BTJEdit3734
type BTJEditInterface interface {
	GetBtType() string
	GetBtTypeOk() (*string, bool)
	HasBtType() bool
	SetBtType(v string)
}

// BTJPathElementInterface non-generated interface for BTJPathElement2297
type BTJPathElementInterface interface {
	GetBtType() string
	GetBtTypeOk() (*string, bool)
	HasBtType() bool
	SetBtType(v string)
}

type JSONTime struct {
	time.Time
}

func (jt *JSONTime) UnmarshalJSON(b []byte) (err error) {
	s := strings.Trim(string(b), "\"")
	s = strings.Replace(s, "+0000", "+00:00", 1)
	if s == "null" {
		jt.Time = time.Time{}
		return
	}
	jt.Time, err = time.Parse(time.RFC3339, s)
	return
}

func makeNonce() string {
	return MakeRandomStr(25, false)
}

var seededRand *rand.Rand = rand.New(rand.NewSource(time.Now().UnixNano()))
var randomMutex sync.Mutex

func getRandomNum(len int) int {
	randomMutex.Lock()
	defer randomMutex.Unlock()
	return seededRand.Intn(len)
}

func MakeRandomStr(len int, isValidID bool) string {
	const charset = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
	const charsetLen = 62

	b := make([]byte, len)
	for i := range b {
		b[i] = charset[getRandomNum(charsetLen)]
		if i == 0 && isValidID {
			if _, err := strconv.Atoi(string(b[i])); err == nil {
				b[i] = '_'
			}
		}
	}
	return string(b)
}

func makeAuthKey(method, date, nonce, secretKey, accessKey, ctype, path, query string) string {
	method = strings.ToLower(method)

	//TODO: We probably can optimize/streamline it with use of utf8 package
	secretKeyUtf8 := utf8string.NewString(secretKey)
	accessKeyUtf8 := utf8string.NewString(accessKey)
	hmacUtf8 := utf8string.NewString(
		strings.ToLower(
			fmt.Sprintf("%s\n%s\n%s\n%s\n%s\n%s\n", method, nonce, date, ctype, path, query))).String()
	mac := hmac.New(sha256.New, []byte(secretKeyUtf8.String()))
	mac.Write([]byte(hmacUtf8))
	signature := base64.StdEncoding.EncodeToString(mac.Sum(nil))

	return "On " + accessKeyUtf8.String() + ":HmacSHA256:" + utf8string.NewString(signature).String()
}

func addOnshapeSpecificHeaders(ctx context.Context, method, urlPath, contentType string,
	queryParams *url.Values, httpHeader *http.Header) {
	if properties, ok := ctx.Value(ContextAPIKeys).(map[string]interface{}); ok {
		nonce := makeNonce()
		date := time.Now().UTC().Format(http.TimeFormat)

		if parsedURL, err := url.Parse(urlPath); err == nil {
			auth := makeAuthKey(method, date, nonce, properties[APISecretKey].(string), properties[APIAccessKey].(string),
				contentType, parsedURL.Path, queryParams.Encode())

			httpHeader.Add("Authorization", auth)
			httpHeader.Add("Date", date)
			httpHeader.Add("On-Nonce", nonce)
		}
	}
}

// NewAPIClientFromEnv - create new Onshape Client based on Env. varibles
func NewAPIClientFromEnv(isDebug bool) (*APIClient, map[string]interface{}, error) {
	secretKeyVal := os.Getenv(APISecretKey)
	accessKeyVal := os.Getenv(APIAccessKey)
	baseURL := os.Getenv(BaseURL)

	if secretKeyVal == "" || accessKeyVal == "" {
		return nil, nil, errors.New("Expected to have environment variables ONSHAPE_API_SECRET_KEY and ONSHAPE_API_ACCESS_KEY set")
	}
	cfg := NewConfiguration()
	if baseURL != "" {
		cfg.Servers[0].URL = baseURL
	}

	isDebugLocal := false
	if debugFromEnv, isDebugEnvSet := os.LookupEnv(HTTPDebug); isDebugEnvSet {
		isDebugLocal, _ = strconv.ParseBool(debugFromEnv)
	}
	if isDebugLocal {
		cfg.Debug = true
	} else {
		cfg.Debug = isDebug
	}

	propMap := make(map[string]interface{})
	propMap[APISecretKey] = secretKeyVal
	propMap[APIAccessKey] = accessKeyVal
	return NewAPIClient(cfg), propMap, nil
}
