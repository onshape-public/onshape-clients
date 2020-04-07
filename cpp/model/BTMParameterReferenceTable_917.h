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
 * BTMParameterReferenceTable_917.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTMParameterReferenceTable_917_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTMParameterReferenceTable_917_H_


#include "BTMParameterReferenceBlob_3281.h"
#include <cpprest/details/basic_types.h>
#include "BTConfiguredFeatureColumnInfo_1014_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTMParameterReferenceTable_917
    : public BTMParameterReferenceBlob_3281
{
public:
    BTMParameterReferenceTable_917();
    virtual ~BTMParameterReferenceTable_917();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTMParameterReferenceTable_917 members


protected:
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTMParameterReferenceTable_917_H_ */
