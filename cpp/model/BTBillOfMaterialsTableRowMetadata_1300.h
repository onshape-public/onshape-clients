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
 * BTBillOfMaterialsTableRowMetadata_1300.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTBillOfMaterialsTableRowMetadata_1300_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTBillOfMaterialsTableRowMetadata_1300_H_


#include "BTTableAssemblyCrossHighlightData_2675.h"
#include "BTBillOfMaterialsTableRowMetadata_1300_allOf.h"
#include "BTTableBaseRowMetadata_3181.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTBillOfMaterialsTableRowMetadata_1300
    : public BTTableBaseRowMetadata_3181
{
public:
    BTBillOfMaterialsTableRowMetadata_1300();
    virtual ~BTBillOfMaterialsTableRowMetadata_1300();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTBillOfMaterialsTableRowMetadata_1300 members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTTableAssemblyCrossHighlightData_2675> getCrossHighlightData() const;
    bool crossHighlightDataIsSet() const;
    void unsetCrossHighlightData();

    void setCrossHighlightData(const std::shared_ptr<BTTableAssemblyCrossHighlightData_2675>& value);


protected:
    std::shared_ptr<BTTableAssemblyCrossHighlightData_2675> m_CrossHighlightData;
    bool m_CrossHighlightDataIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTBillOfMaterialsTableRowMetadata_1300_H_ */
