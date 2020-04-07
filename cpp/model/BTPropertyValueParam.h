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
 * BTPropertyValueParam.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTPropertyValueParam_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTPropertyValueParam_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Object.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTPropertyValueParam
    : public ModelBase
{
public:
    BTPropertyValueParam();
    virtual ~BTPropertyValueParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTPropertyValueParam members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPropertyId() const;
    bool propertyIdIsSet() const;
    void unsetPropertyId();

    void setPropertyId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Object> getValue() const;
    bool valueIsSet() const;
    void unsetValue();

    void setValue(const std::shared_ptr<Object>& value);


protected:
    utility::string_t m_PropertyId;
    bool m_PropertyIdIsSet;
    std::shared_ptr<Object> m_Value;
    bool m_ValueIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTPropertyValueParam_H_ */
