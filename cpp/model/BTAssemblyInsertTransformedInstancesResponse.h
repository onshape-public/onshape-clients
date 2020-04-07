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
 * BTAssemblyInsertTransformedInstancesResponse.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTAssemblyInsertTransformedInstancesResponse_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTAssemblyInsertTransformedInstancesResponse_H_


#include "../ModelBase.h"

#include "BTAssemblyOccurrenceInfo.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTAssemblyInsertTransformedInstancesResponse
    : public ModelBase
{
public:
    BTAssemblyInsertTransformedInstancesResponse();
    virtual ~BTAssemblyInsertTransformedInstancesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTAssemblyInsertTransformedInstancesResponse members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTAssemblyOccurrenceInfo>>& getInsertResponses();
    bool insertResponsesIsSet() const;
    void unsetInsertResponses();

    void setInsertResponses(const std::vector<std::shared_ptr<BTAssemblyOccurrenceInfo>>& value);


protected:
    std::vector<std::shared_ptr<BTAssemblyOccurrenceInfo>> m_InsertResponses;
    bool m_InsertResponsesIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTAssemblyInsertTransformedInstancesResponse_H_ */
