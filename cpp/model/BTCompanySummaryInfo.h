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
 * BTCompanySummaryInfo.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTCompanySummaryInfo_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTCompanySummaryInfo_H_


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
class  BTCompanySummaryInfo
    : public ModelBase
{
public:
    BTCompanySummaryInfo();
    virtual ~BTCompanySummaryInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTCompanySummaryInfo members

    /// <summary>
    /// 
    /// </summary>
    bool isAdmin() const;
    bool adminIsSet() const;
    void unsetAdmin();

    void setAdmin(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();

    void setDescription(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDomainPrefix() const;
    bool domainPrefixIsSet() const;
    void unsetDomainPrefix();

    void setDomainPrefix(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getEnterpriseBaseUrl() const;
    bool enterpriseBaseUrlIsSet() const;
    void unsetEnterpriseBaseUrl();

    void setEnterpriseBaseUrl(const utility::string_t& value);

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
    utility::string_t getImage() const;
    bool imageIsSet() const;
    void unsetImage();

    void setImage(const utility::string_t& value);

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
    bool isNoPublicDocuments() const;
    bool noPublicDocumentsIsSet() const;
    void unsetNoPublicDocuments();

    void setNoPublicDocuments(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOwnerId() const;
    bool ownerIdIsSet() const;
    void unsetOwnerId();

    void setOwnerId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getSecondaryDomainPrefixes();
    bool secondaryDomainPrefixesIsSet() const;
    void unsetSecondaryDomainPrefixes();

    void setSecondaryDomainPrefixes(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getState() const;
    bool stateIsSet() const;
    void unsetState();

    void setState(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getType() const;
    bool typeIsSet() const;
    void unsetType();

    void setType(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getViewRef() const;
    bool viewRefIsSet() const;
    void unsetViewRef();

    void setViewRef(const utility::string_t& value);


protected:
    bool m_Admin;
    bool m_AdminIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    utility::string_t m_DomainPrefix;
    bool m_DomainPrefixIsSet;
    utility::string_t m_EnterpriseBaseUrl;
    bool m_EnterpriseBaseUrlIsSet;
    utility::string_t m_Href;
    bool m_HrefIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Image;
    bool m_ImageIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    bool m_NoPublicDocuments;
    bool m_NoPublicDocumentsIsSet;
    utility::string_t m_OwnerId;
    bool m_OwnerIdIsSet;
    std::vector<utility::string_t> m_SecondaryDomainPrefixes;
    bool m_SecondaryDomainPrefixesIsSet;
    int32_t m_State;
    bool m_StateIsSet;
    int32_t m_Type;
    bool m_TypeIsSet;
    utility::string_t m_ViewRef;
    bool m_ViewRefIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTCompanySummaryInfo_H_ */
