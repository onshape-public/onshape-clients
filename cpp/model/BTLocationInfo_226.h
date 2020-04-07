/**
 * Onshape REST API
 * The Onshape REST API consumed by all clients.
 *
 * The version of the OpenAPI document: 1.113
 * Contact: api-support@onshape.zendesk.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * BTLocationInfo_226.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTLocationInfo_226_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTLocationInfo_226_H_


#include "../ModelBase.h"

#include "BTObjectId.h"
#include "BTDocumentVersionElementIds_1897.h"
#include "BTPNode_7.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTLocationInfo_226
    : public ModelBase
{
public:
    BTLocationInfo_226();
    virtual ~BTLocationInfo_226();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTLocationInfo_226 members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBtType() const;
    bool btTypeIsSet() const;
    void unsetBtType();

    void setBtType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getCharacter() const;
    bool characterIsSet() const;
    void unsetCharacter();

    void setCharacter(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getColumn() const;
    bool columnIsSet() const;
    void unsetColumn();

    void setColumn(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDocument() const;
    bool documentIsSet() const;
    void unsetDocument();

    void setDocument(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getElementMicroversion() const;
    bool elementMicroversionIsSet() const;
    void unsetElementMicroversion();

    void setElementMicroversion(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getEndCharacter() const;
    bool endCharacterIsSet() const;
    void unsetEndCharacter();

    void setEndCharacter(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getEndColumn() const;
    bool endColumnIsSet() const;
    void unsetEndColumn();

    void setEndColumn(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getEndLine() const;
    bool endLineIsSet() const;
    void unsetEndLine();

    void setEndLine(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPNode_7> getFromNode() const;
    bool fromNodeIsSet() const;
    void unsetFromNode();

    void setFromNode(const std::shared_ptr<BTPNode_7>& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getLanguageVersion() const;
    bool languageVersionIsSet() const;
    void unsetLanguageVersion();

    void setLanguageVersion(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getLine() const;
    bool lineIsSet() const;
    void unsetLine();

    void setLine(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTDocumentVersionElementIds_1897> getModuleIds() const;
    bool moduleIdsIsSet() const;
    void unsetModuleIds();

    void setModuleIds(const std::shared_ptr<BTDocumentVersionElementIds_1897>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetNodeId();

    void setNodeId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getParseNodeId() const;
    bool parseNodeIdIsSet() const;
    void unsetParseNodeId();

    void setParseNodeId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTObjectId> getParseNodeIdRaw() const;
    bool parseNodeIdRawIsSet() const;
    void unsetParseNodeIdRaw();

    void setParseNodeIdRaw(const std::shared_ptr<BTObjectId>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTopLevel() const;
    bool topLevelIsSet() const;
    void unsetTopLevel();

    void setTopLevel(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getVersion() const;
    bool versionIsSet() const;
    void unsetVersion();

    void setVersion(const utility::string_t& value);


protected:
    utility::string_t m_BtType;
    bool m_BtTypeIsSet;
    int32_t m_Character;
    bool m_CharacterIsSet;
    int32_t m_Column;
    bool m_ColumnIsSet;
    utility::string_t m_Document;
    bool m_DocumentIsSet;
    utility::string_t m_ElementMicroversion;
    bool m_ElementMicroversionIsSet;
    int32_t m_EndCharacter;
    bool m_EndCharacterIsSet;
    int32_t m_EndColumn;
    bool m_EndColumnIsSet;
    int32_t m_EndLine;
    bool m_EndLineIsSet;
    std::shared_ptr<BTPNode_7> m_FromNode;
    bool m_FromNodeIsSet;
    int32_t m_LanguageVersion;
    bool m_LanguageVersionIsSet;
    int32_t m_Line;
    bool m_LineIsSet;
    std::shared_ptr<BTDocumentVersionElementIds_1897> m_ModuleIds;
    bool m_ModuleIdsIsSet;
    utility::string_t m_NodeId;
    bool m_NodeIdIsSet;
    utility::string_t m_ParseNodeId;
    bool m_ParseNodeIdIsSet;
    std::shared_ptr<BTObjectId> m_ParseNodeIdRaw;
    bool m_ParseNodeIdRawIsSet;
    utility::string_t m_TopLevel;
    bool m_TopLevelIsSet;
    utility::string_t m_Version;
    bool m_VersionIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTLocationInfo_226_H_ */
