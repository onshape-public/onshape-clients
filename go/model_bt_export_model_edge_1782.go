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
// BtExportModelEdge1782 struct for BtExportModelEdge1782
type BtExportModelEdge1782 struct {
	Curve BtCurveDescription1583 `json:"curve,omitempty"`
	Geometry BtExportModelEdgeGeometry1125 `json:"geometry,omitempty"`
	Id string `json:"id,omitempty"`
	Vertices []string `json:"vertices,omitempty"`
}