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
 * BTParameterSpecReferenceTable_1520.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTParameterSpecReferenceTable_1520_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTParameterSpecReferenceTable_1520_H_


#include "BTMParameter_1.h"
#include "BTParameterSpecReferenceBlob_1367.h"
#include <cpprest/details/basic_types.h>
#include "BTParameterVisibilityCondition_177.h"
#include <vector>
#include "BTConfiguredFeatureColumnInfo_1014_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTParameterSpecReferenceTable_1520
    : public BTParameterSpecReferenceBlob_1367
{
public:
    BTParameterSpecReferenceTable_1520();
    virtual ~BTParameterSpecReferenceTable_1520();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTParameterSpecReferenceTable_1520 members


protected:
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTParameterSpecReferenceTable_1520_H_ */
