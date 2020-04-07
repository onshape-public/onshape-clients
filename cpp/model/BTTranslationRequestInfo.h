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
 * BTTranslationRequestInfo.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTTranslationRequestInfo_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTTranslationRequestInfo_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTTranslationRequestInfo
    : public ModelBase
{
public:
    BTTranslationRequestInfo();
    virtual ~BTTranslationRequestInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTTranslationRequestInfo members

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
    utility::string_t getFailureReason() const;
    bool failureReasonIsSet() const;
    void unsetFailureReason();

    void setFailureReason(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getHref() const;
    bool hrefIsSet() const;
    void unsetHref();

    void setHref(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRequestElementId() const;
    bool requestElementIdIsSet() const;
    void unsetRequestElementId();

    void setRequestElementId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRequestState() const;
    bool requestStateIsSet() const;
    void unsetRequestState();

    void setRequestState(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getResultDocumentId() const;
    bool resultDocumentIdIsSet() const;
    void unsetResultDocumentId();

    void setResultDocumentId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getResultElementIds();
    bool resultElementIdsIsSet() const;
    void unsetResultElementIds();

    void setResultElementIds(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getResultExternalDataIds();
    bool resultExternalDataIdsIsSet() const;
    void unsetResultExternalDataIds();

    void setResultExternalDataIds(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getResultWorkspaceId() const;
    bool resultWorkspaceIdIsSet() const;
    void unsetResultWorkspaceId();

    void setResultWorkspaceId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getVersionId() const;
    bool versionIdIsSet() const;
    void unsetVersionId();

    void setVersionId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getViewRef() const;
    bool viewRefIsSet() const;
    void unsetViewRef();

    void setViewRef(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetWorkspaceId();

    void setWorkspaceId(const utility::string_t& value);


protected:
    utility::string_t m_DocumentId;
    bool m_DocumentIdIsSet;
    utility::string_t m_FailureReason;
    bool m_FailureReasonIsSet;
    utility::string_t m_Href;
    bool m_HrefIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_RequestElementId;
    bool m_RequestElementIdIsSet;
    utility::string_t m_RequestState;
    bool m_RequestStateIsSet;
    utility::string_t m_ResultDocumentId;
    bool m_ResultDocumentIdIsSet;
    std::vector<utility::string_t> m_ResultElementIds;
    bool m_ResultElementIdsIsSet;
    std::vector<utility::string_t> m_ResultExternalDataIds;
    bool m_ResultExternalDataIdsIsSet;
    utility::string_t m_ResultWorkspaceId;
    bool m_ResultWorkspaceIdIsSet;
    utility::string_t m_VersionId;
    bool m_VersionIdIsSet;
    utility::string_t m_ViewRef;
    bool m_ViewRefIsSet;
    utility::string_t m_WorkspaceId;
    bool m_WorkspaceIdIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTTranslationRequestInfo_H_ */
