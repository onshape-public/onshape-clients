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
 * BTParameterVisibilityAlwaysHidden_176.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTParameterVisibilityAlwaysHidden_176_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTParameterVisibilityAlwaysHidden_176_H_


#include <cpprest/details/basic_types.h>
#include "BTParameterVisibilityCondition_177.h"
#include "BTConfiguredFeatureColumnInfo_1014_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTParameterVisibilityAlwaysHidden_176
    : public BTParameterVisibilityCondition_177
{
public:
    BTParameterVisibilityAlwaysHidden_176();
    virtual ~BTParameterVisibilityAlwaysHidden_176();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTParameterVisibilityAlwaysHidden_176 members


protected:
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTParameterVisibilityAlwaysHidden_176_H_ */
