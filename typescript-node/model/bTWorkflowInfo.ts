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

import { BTActionInfo } from './bTActionInfo';
import { BTWorkflowStateInfo } from './bTWorkflowStateInfo';

export class BTWorkflowInfo {
    'actions'?: Array<BTActionInfo>;
    'state'?: BTWorkflowStateInfo;
    'rejectedBy'?: Array<string>;
    'isSetup'?: boolean;
    'approvedBy'?: Array<string>;
    'isFrozen'?: boolean;
    'isInitialState'?: boolean;
    'approverIds'?: Array<string>;
    'notifierIds'?: Array<string>;
    'workflowId'?: string;
    'isDiscarded'?: boolean;
    'metadataState'?: string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "actions",
            "baseName": "actions",
            "type": "Array<BTActionInfo>"
        },
        {
            "name": "state",
            "baseName": "state",
            "type": "BTWorkflowStateInfo"
        },
        {
            "name": "rejectedBy",
            "baseName": "rejectedBy",
            "type": "Array<string>"
        },
        {
            "name": "isSetup",
            "baseName": "isSetup",
            "type": "boolean"
        },
        {
            "name": "approvedBy",
            "baseName": "approvedBy",
            "type": "Array<string>"
        },
        {
            "name": "isFrozen",
            "baseName": "isFrozen",
            "type": "boolean"
        },
        {
            "name": "isInitialState",
            "baseName": "isInitialState",
            "type": "boolean"
        },
        {
            "name": "approverIds",
            "baseName": "approverIds",
            "type": "Array<string>"
        },
        {
            "name": "notifierIds",
            "baseName": "notifierIds",
            "type": "Array<string>"
        },
        {
            "name": "workflowId",
            "baseName": "workflowId",
            "type": "string"
        },
        {
            "name": "isDiscarded",
            "baseName": "isDiscarded",
            "type": "boolean"
        },
        {
            "name": "metadataState",
            "baseName": "metadataState",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return BTWorkflowInfo.attributeTypeMap;
    }
}

