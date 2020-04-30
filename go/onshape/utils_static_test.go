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
	"encoding/json"
	"fmt"
	"net/http"
	"os"
	"testing"
	"time"

	"github.com/stretchr/testify/assert"
)

func Test_makeAuthKey(t *testing.T) {
	type args struct {
		method    string
		date      string
		nonce     string
		secretKey string
		accessKey string
		ctype     string
		path      string
		query     string
	}
	tests := []struct {
		name string
		args args
		want string
	}{
		{"Test001",
			args{"POST", "Wed, 08 Apr 2020 02:10:47 GMT", "mHcj1NQZWS4nbzclztbjWWXNw",
				"cjp8tSPDSOEQPG5VnUPPyTz4cmbuVWagpqTM2KpMfKAaGOE1", "C9bIGFBb4OErWAUew5R8nqLT",
				"application/json;charset=utf-8; qs=0.09", "/api/documents", ""},
			"On C9bIGFBb4OErWAUew5R8nqLT:HmacSHA256:+BxrnrOs9udrGgzay4Lm+OAdUHJNWxV04dY+mLcAKEQ=",
		},
	}
	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			if got := makeAuthKey(tt.args.method, tt.args.date, tt.args.nonce, tt.args.secretKey, tt.args.accessKey, tt.args.ctype, tt.args.path, tt.args.query); got != tt.want {
				t.Errorf("makeAuthKey() = %v, want %v", got, tt.want)
			}
		})
	}
}

type testTime struct {
	CreatedAt *JSONTime `json:"CreatedAt,omitempty"`
}

func TestParseDateFromResponse(t *testing.T) {
	var rightNow JSONTime = JSONTime{time.Now().UTC()}
	rightNowStr := rightNow.Format(http.TimeFormat)
	tt := testTime{&rightNow}
	jsondoc, err := json.Marshal(tt)
	if err != nil {
		fmt.Println("Error:", err)
	} else {
		fmt.Println(rightNowStr)
		fmt.Println(string(jsondoc))
	}

	fakeStr := "{\"CreatedAt\":\"2020-04-08T12:33:36.646+0000\"}"
	fmt.Println(string(fakeStr))
	err = json.Unmarshal([]byte(fakeStr), &tt)
	assert.Nil(t, err, "Should not be an error parsing", fakeStr)
}

func TestNewConfigurationFromEnv(t *testing.T) {
	tests := []struct {
		name, secretKey, accessKey, baseUrl, want string
	}{
		{"TestNewConfigurationFromEnv001",
			"", "", "", "Doesn't matter becuase of the Error",
		},
		{"TestNewConfigurationFromEnv002",
			"SK", "AK", "https://check.onshape.com",
			"https://check.onshape.com",
		},
	}
	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			os.Setenv("ONSHAPE_API_SECRET_KEY", tt.secretKey)
			os.Setenv("ONSHAPE_API_ACCESS_KEY", tt.accessKey)
			os.Setenv("ONSHAPE_BASE_URL", tt.baseUrl)

			if tt.accessKey == "" || tt.secretKey == "" {
				_, _, err := NewAPIClientFromEnv(false)
				assert.Error(t, err)
			} else {
				client, _, err := NewAPIClientFromEnv(false)
				assert.NoError(t, err)
				cfg := client.GetConfig()
				assert.Equal(t, cfg.Servers[0].URL, tt.want)
			}
		})
	}
}
