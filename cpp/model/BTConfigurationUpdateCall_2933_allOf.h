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
 * BTConfigurationUpdateCall_2933_allOf.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTConfigurationUpdateCall_2933_allOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTConfigurationUpdateCall_2933_allOf_H_


#include "../ModelBase.h"

#include "BTMParameter_1.h"
#include <cpprest/details/basic_types.h>
#include "BTMConfigurationParameter_819.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTConfigurationUpdateCall_2933_allOf
    : public ModelBase
{
public:
    BTConfigurationUpdateCall_2933_allOf();
    virtual ~BTConfigurationUpdateCall_2933_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTConfigurationUpdateCall_2933_allOf members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTMConfigurationParameter_819>>& getConfigurationParameters();
    bool configurationParametersIsSet() const;
    void unsetConfigurationParameters();

    void setConfigurationParameters(const std::vector<std::shared_ptr<BTMConfigurationParameter_819>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTMParameter_1>>& getCurrentConfiguration();
    bool currentConfigurationIsSet() const;
    void unsetCurrentConfiguration();

    void setCurrentConfiguration(const std::vector<std::shared_ptr<BTMParameter_1>>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBtType() const;
    bool btTypeIsSet() const;
    void unsetBtType();

    void setBtType(const utility::string_t& value);


protected:
    std::vector<std::shared_ptr<BTMConfigurationParameter_819>> m_ConfigurationParameters;
    bool m_ConfigurationParametersIsSet;
    std::vector<std::shared_ptr<BTMParameter_1>> m_CurrentConfiguration;
    bool m_CurrentConfigurationIsSet;
    utility::string_t m_BtType;
    bool m_BtTypeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTConfigurationUpdateCall_2933_allOf_H_ */
