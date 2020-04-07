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
 * BTUserBasicSummaryInfo.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTUserBasicSummaryInfo_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTUserBasicSummaryInfo_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTUserBasicSummaryInfo
    : public ModelBase
{
public:
    BTUserBasicSummaryInfo();
    virtual ~BTUserBasicSummaryInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTUserBasicSummaryInfo members

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
    utility::string_t getJsonType() const;
    bool jsonTypeIsSet() const;
    void unsetJsonType();

    void setJsonType(const utility::string_t& value);

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
    int32_t getState() const;
    bool stateIsSet() const;
    void unsetState();

    void setState(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getViewRef() const;
    bool viewRefIsSet() const;
    void unsetViewRef();

    void setViewRef(const utility::string_t& value);


protected:
    utility::string_t m_Href;
    bool m_HrefIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Image;
    bool m_ImageIsSet;
    utility::string_t m_JsonType;
    bool m_JsonTypeIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    int32_t m_State;
    bool m_StateIsSet;
    utility::string_t m_ViewRef;
    bool m_ViewRefIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTUserBasicSummaryInfo_H_ */
