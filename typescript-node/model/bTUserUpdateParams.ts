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


export class BTUserUpdateParams {
    'name'?: string;
    'id'?: string;
    'description'?: string;
    'forumId'?: string;
    'firstName'?: string;
    'lastName'?: string;
    'defaultCompanyName'?: string;
    'countryCode'?: string;
    'oldPassword'?: string;
    'newPassword'?: string;
    'phoneNumber'?: string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "name",
            "baseName": "name",
            "type": "string"
        },
        {
            "name": "id",
            "baseName": "id",
            "type": "string"
        },
        {
            "name": "description",
            "baseName": "description",
            "type": "string"
        },
        {
            "name": "forumId",
            "baseName": "forumId",
            "type": "string"
        },
        {
            "name": "firstName",
            "baseName": "firstName",
            "type": "string"
        },
        {
            "name": "lastName",
            "baseName": "lastName",
            "type": "string"
        },
        {
            "name": "defaultCompanyName",
            "baseName": "defaultCompanyName",
            "type": "string"
        },
        {
            "name": "countryCode",
            "baseName": "countryCode",
            "type": "string"
        },
        {
            "name": "oldPassword",
            "baseName": "oldPassword",
            "type": "string"
        },
        {
            "name": "newPassword",
            "baseName": "newPassword",
            "type": "string"
        },
        {
            "name": "phoneNumber",
            "baseName": "phoneNumber",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return BTUserUpdateParams.attributeTypeMap;
    }
}

