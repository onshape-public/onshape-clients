/**
 * Onshape REST API
 * The Onshape REST API consumed by all clients.
 *
 * OpenAPI spec version: 1.93
 * Contact: api-support@onshape.zendesk.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { ApiResponse } from './apiResponse';

export class ApiResponses extends null<String, ApiResponse> {
    'extensions'?: { [key: string]: any; };
    '_default'?: ApiResponse;
    'empty'?: boolean;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "extensions",
            "baseName": "extensions",
            "type": "{ [key: string]: any; }"
        },
        {
            "name": "_default",
            "baseName": "default",
            "type": "ApiResponse"
        },
        {
            "name": "empty",
            "baseName": "empty",
            "type": "boolean"
        }    ];

    static getAttributeTypeMap() {
        return super.getAttributeTypeMap().concat(ApiResponses.attributeTypeMap);
    }
}

