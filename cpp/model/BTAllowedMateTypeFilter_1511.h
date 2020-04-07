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
 * BTAllowedMateTypeFilter_1511.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTAllowedMateTypeFilter_1511_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTAllowedMateTypeFilter_1511_H_


#include <cpprest/details/basic_types.h>
#include <vector>
#include "BTAllowedMateTypeFilter_1511_allOf.h"
#include "BTMateFilter_162.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTAllowedMateTypeFilter_1511
    : public BTMateFilter_162
{
public:
    BTAllowedMateTypeFilter_1511();
    virtual ~BTAllowedMateTypeFilter_1511();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTAllowedMateTypeFilter_1511 members

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getAllowedMateTypes();
    bool allowedMateTypesIsSet() const;
    void unsetAllowedMateTypes();

    void setAllowedMateTypes(const std::vector<utility::string_t>& value);


protected:
    std::vector<utility::string_t> m_AllowedMateTypes;
    bool m_AllowedMateTypesIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTAllowedMateTypeFilter_1511_H_ */
