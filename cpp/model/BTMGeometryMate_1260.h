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
 * BTMGeometryMate_1260.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTMGeometryMate_1260_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTMGeometryMate_1260_H_


#include "BTMParameter_1.h"
#include "BTMAssemblyFeature_887.h"
#include "BTMIndividualQueryWithOccurrenceBase_904.h"
#include <cpprest/details/basic_types.h>
#include "BTMFeature_134.h"
#include <vector>
#include "BTConfiguredFeatureColumnInfo_1014_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTMGeometryMate_1260
    : public BTMAssemblyFeature_887
{
public:
    BTMGeometryMate_1260();
    virtual ~BTMGeometryMate_1260();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTMGeometryMate_1260 members


protected:
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTMGeometryMate_1260_H_ */
