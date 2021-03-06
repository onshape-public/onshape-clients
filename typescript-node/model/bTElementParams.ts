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

import { BTElementLocationParams } from './bTElementLocationParams';

export class BTElementParams {
    'location'?: BTElementLocationParams;
    'sourceDocumentId'?: string;
    'sourceWorkspaceId'?: string;
    'notifyUser'?: boolean;
    'format'?: BTElementParams.FormatEnum;
    'filename'?: string;
    'documentId'?: string;
    'mediaType'?: string;
    'workspaceId'?: string;
    'elementId'?: string;
    'translateStoredFile'?: boolean;
    'createDrawingIfPossible'?: boolean;
    'isInitialUpload'?: boolean;
    'foreignId'?: string;
    'uploadId'?: string;
    'projectId'?: string;
    'parentId'?: string;
    'updateExistingImportFeatures'?: boolean;
    'blobMicroversionId'?: string;
    'originalForeignId'?: string;
    'blobElementId'?: string;
    'specifyUnits'?: boolean;
    'splitAssembliesIntoMultipleDocuments'?: boolean;
    'flattenAssemblies'?: boolean;
    'getyAxisIsUp'?: boolean;
    'allowFaultyParts'?: boolean;
    'unit'?: string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "location",
            "baseName": "location",
            "type": "BTElementLocationParams"
        },
        {
            "name": "sourceDocumentId",
            "baseName": "sourceDocumentId",
            "type": "string"
        },
        {
            "name": "sourceWorkspaceId",
            "baseName": "sourceWorkspaceId",
            "type": "string"
        },
        {
            "name": "notifyUser",
            "baseName": "notifyUser",
            "type": "boolean"
        },
        {
            "name": "format",
            "baseName": "format",
            "type": "BTElementParams.FormatEnum"
        },
        {
            "name": "filename",
            "baseName": "filename",
            "type": "string"
        },
        {
            "name": "documentId",
            "baseName": "documentId",
            "type": "string"
        },
        {
            "name": "mediaType",
            "baseName": "mediaType",
            "type": "string"
        },
        {
            "name": "workspaceId",
            "baseName": "workspaceId",
            "type": "string"
        },
        {
            "name": "elementId",
            "baseName": "elementId",
            "type": "string"
        },
        {
            "name": "translateStoredFile",
            "baseName": "translateStoredFile",
            "type": "boolean"
        },
        {
            "name": "createDrawingIfPossible",
            "baseName": "createDrawingIfPossible",
            "type": "boolean"
        },
        {
            "name": "isInitialUpload",
            "baseName": "isInitialUpload",
            "type": "boolean"
        },
        {
            "name": "foreignId",
            "baseName": "foreignId",
            "type": "string"
        },
        {
            "name": "uploadId",
            "baseName": "uploadId",
            "type": "string"
        },
        {
            "name": "projectId",
            "baseName": "projectId",
            "type": "string"
        },
        {
            "name": "parentId",
            "baseName": "parentId",
            "type": "string"
        },
        {
            "name": "updateExistingImportFeatures",
            "baseName": "updateExistingImportFeatures",
            "type": "boolean"
        },
        {
            "name": "blobMicroversionId",
            "baseName": "blobMicroversionId",
            "type": "string"
        },
        {
            "name": "originalForeignId",
            "baseName": "originalForeignId",
            "type": "string"
        },
        {
            "name": "blobElementId",
            "baseName": "blobElementId",
            "type": "string"
        },
        {
            "name": "specifyUnits",
            "baseName": "specifyUnits",
            "type": "boolean"
        },
        {
            "name": "splitAssembliesIntoMultipleDocuments",
            "baseName": "splitAssembliesIntoMultipleDocuments",
            "type": "boolean"
        },
        {
            "name": "flattenAssemblies",
            "baseName": "flattenAssemblies",
            "type": "boolean"
        },
        {
            "name": "getyAxisIsUp",
            "baseName": "getyAxisIsUp",
            "type": "boolean"
        },
        {
            "name": "allowFaultyParts",
            "baseName": "allowFaultyParts",
            "type": "boolean"
        },
        {
            "name": "unit",
            "baseName": "unit",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return BTElementParams.attributeTypeMap;
    }
}

export namespace BTElementParams {
    export enum FormatEnum {
        ONSHAPE = <any> 'ONSHAPE',
        PARASOLID = <any> 'PARASOLID',
        ACIS = <any> 'ACIS',
        STEP = <any> 'STEP',
        IGES = <any> 'IGES',
        SOLIDWORKS = <any> 'SOLIDWORKS',
        SOLIDWORKSASSEMBLY = <any> 'SOLIDWORKS_ASSEMBLY',
        INVENTOR = <any> 'INVENTOR',
        INVENTORASSEMBLY = <any> 'INVENTOR_ASSEMBLY',
        PROEORNX = <any> 'PROE_OR_NX',
        PROEASSEMBLY = <any> 'PROE_ASSEMBLY',
        SOLIDEDGE = <any> 'SOLIDEDGE',
        CATIAV5 = <any> 'CATIAV5',
        CATIAV5ASSEMBLY = <any> 'CATIAV5_ASSEMBLY',
        JT = <any> 'JT',
        COLLADA = <any> 'COLLADA',
        RHINO = <any> 'RHINO',
        ZIP = <any> 'ZIP',
        STL = <any> 'STL',
        OBJ = <any> 'OBJ',
        PARASOLIDMESH = <any> 'PARASOLID_MESH',
        PARASOLIDZIP = <any> 'PARASOLID_ZIP',
        PDF = <any> 'PDF',
        DWG = <any> 'DWG',
        DXF = <any> 'DXF',
        DWT = <any> 'DWT'
    }
}
