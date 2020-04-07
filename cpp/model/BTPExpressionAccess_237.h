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
 * BTPExpressionAccess_237.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTPExpressionAccess_237_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTPExpressionAccess_237_H_


#include "BTPExpression_9.h"
#include "BTPPropertyAccessor_23.h"
#include "BTPExpressionAccess_237_allOf.h"
#include <cpprest/details/basic_types.h>
#include "BTPSpace_10.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTPExpressionAccess_237
    : public BTPExpression_9
{
public:
    BTPExpressionAccess_237();
    virtual ~BTPExpressionAccess_237();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTPExpressionAccess_237 members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPSpace_10> getSpaceInAccessor() const;
    bool spaceInAccessorIsSet() const;
    void unsetSpaceInAccessor();

    void setSpaceInAccessor(const std::shared_ptr<BTPSpace_10>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPPropertyAccessor_23> getAccessor() const;
    bool accessorIsSet() const;
    void unsetAccessor();

    void setAccessor(const std::shared_ptr<BTPPropertyAccessor_23>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPExpression_9> getBase() const;
    bool baseIsSet() const;
    void unsetBase();

    void setBase(const std::shared_ptr<BTPExpression_9>& value);


protected:
    std::shared_ptr<BTPSpace_10> m_SpaceInAccessor;
    bool m_SpaceInAccessorIsSet;
    std::shared_ptr<BTPPropertyAccessor_23> m_Accessor;
    bool m_AccessorIsSet;
    std::shared_ptr<BTPExpression_9> m_Base;
    bool m_BaseIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTPExpressionAccess_237_H_ */
