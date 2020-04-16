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
	"fmt"
	"math/rand"
	"net/http"
	"net/url"
	"strings"
	"time"

	"golang.org/x/exp/utf8string"
)

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
	const charset = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
	const charsetLen = 62
	var seededRand *rand.Rand = rand.New(rand.NewSource(time.Now().UnixNano()))

	b := make([]byte, 25)
	for i := range b {
		b[i] = charset[seededRand.Intn(charsetLen)]
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

type APIKeys struct {
	SecretKey string
	AccessKey string
}

func addOnshapeSpecificHeaders(ctx context.Context, method, urlPath, contentType string,
	queryParams *url.Values, httpHeader *http.Header) {
	if apiKeys, ok := ctx.Value(ContextAPIKeys).(APIKeys); ok {
		nonce := makeNonce()
		date := time.Now().UTC().Format(http.TimeFormat)

		if parsedURL, err := url.Parse(urlPath); err == nil {
			auth := makeAuthKey(method, date, nonce, apiKeys.SecretKey, apiKeys.AccessKey,
				contentType, parsedURL.Path, queryParams.Encode())

			httpHeader.Add("Authorization", auth)
			httpHeader.Add("Date", date)
			httpHeader.Add("On-Nonce", nonce)
		}
	}
}
