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
 * BTPTypeNameUser_292.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTPTypeNameUser_292_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTPTypeNameUser_292_H_


#include "BTPTypeNameUser_292_allOf.h"
#include "BTPName_261.h"
#include "BTPTypeName_290.h"
#include <cpprest/details/basic_types.h>
#include "BTPSpace_10.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTPTypeNameUser_292
    : public BTPTypeName_290
{
public:
    BTPTypeNameUser_292();
    virtual ~BTPTypeNameUser_292();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTPTypeNameUser_292 members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPName_261> getType() const;
    bool typeIsSet() const;
    void unsetType();

    void setType(const std::shared_ptr<BTPName_261>& value);


protected:
    std::shared_ptr<BTPName_261> m_Type;
    bool m_TypeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTPTypeNameUser_292_H_ */
