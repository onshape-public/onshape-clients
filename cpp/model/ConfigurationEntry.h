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
 * ConfigurationEntry.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ConfigurationEntry_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ConfigurationEntry_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ConfigurationEntry
    : public ModelBase
{
public:
    ConfigurationEntry();
    virtual ~ConfigurationEntry();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ConfigurationEntry members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getParameterId() const;
    bool parameterIdIsSet() const;
    void unsetParameterId();

    void setParameterId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getParameterValue() const;
    bool parameterValueIsSet() const;
    void unsetParameterValue();

    void setParameterValue(const utility::string_t& value);


protected:
    utility::string_t m_ParameterId;
    bool m_ParameterIdIsSet;
    utility::string_t m_ParameterValue;
    bool m_ParameterValueIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ConfigurationEntry_H_ */
