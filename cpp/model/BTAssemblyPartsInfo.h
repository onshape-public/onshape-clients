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
 * BTAssemblyPartsInfo.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTAssemblyPartsInfo_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTAssemblyPartsInfo_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTAssemblyPartsInfo
    : public ModelBase
{
public:
    BTAssemblyPartsInfo();
    virtual ~BTAssemblyPartsInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTAssemblyPartsInfo members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBodyType() const;
    bool bodyTypeIsSet() const;
    void unsetBodyType();

    void setBodyType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getConfiguration() const;
    bool configurationIsSet() const;
    void unsetConfiguration();

    void setConfiguration(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDocumentId() const;
    bool documentIdIsSet() const;
    void unsetDocumentId();

    void setDocumentId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDocumentMicroversion() const;
    bool documentMicroversionIsSet() const;
    void unsetDocumentMicroversion();

    void setDocumentMicroversion(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDocumentVersion() const;
    bool documentVersionIsSet() const;
    void unsetDocumentVersion();

    void setDocumentVersion(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getElementId() const;
    bool elementIdIsSet() const;
    void unsetElementId();

    void setElementId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFullConfiguration() const;
    bool fullConfigurationIsSet() const;
    void unsetFullConfiguration();

    void setFullConfiguration(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPartId() const;
    bool partIdIsSet() const;
    void unsetPartId();

    void setPartId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRevision() const;
    bool revisionIsSet() const;
    void unsetRevision();

    void setRevision(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isStandardContent() const;
    bool standardContentIsSet() const;
    void unsetStandardContent();

    void setStandardContent(bool value);


protected:
    utility::string_t m_BodyType;
    bool m_BodyTypeIsSet;
    utility::string_t m_Configuration;
    bool m_ConfigurationIsSet;
    utility::string_t m_DocumentId;
    bool m_DocumentIdIsSet;
    utility::string_t m_DocumentMicroversion;
    bool m_DocumentMicroversionIsSet;
    utility::string_t m_DocumentVersion;
    bool m_DocumentVersionIsSet;
    utility::string_t m_ElementId;
    bool m_ElementIdIsSet;
    utility::string_t m_FullConfiguration;
    bool m_FullConfigurationIsSet;
    utility::string_t m_PartId;
    bool m_PartIdIsSet;
    utility::string_t m_Revision;
    bool m_RevisionIsSet;
    bool m_StandardContent;
    bool m_StandardContentIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTAssemblyPartsInfo_H_ */
