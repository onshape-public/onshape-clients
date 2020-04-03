/*
 * Onshape REST API
 *
 * The Onshape REST API consumed by all clients.
 *
 * API version: 1.111
 * Contact: api-support@onshape.zendesk.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi
// BtpStatementReturn281AllOf struct for BtpStatementReturn281AllOf
type BtpStatementReturn281AllOf struct {
	SpaceAfterReturn BtpSpace10 `json:"spaceAfterReturn,omitempty"`
	Value BtpExpression9 `json:"value,omitempty"`
	BtType string `json:"btType,omitempty"`
}