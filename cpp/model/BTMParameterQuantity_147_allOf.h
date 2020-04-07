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
 * BTMParameterQuantity_147_allOf.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTMParameterQuantity_147_allOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTMParameterQuantity_147_allOf_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTMParameterQuantity_147_allOf
    : public ModelBase
{
public:
    BTMParameterQuantity_147_allOf();
    virtual ~BTMParameterQuantity_147_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTMParameterQuantity_147_allOf members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUnits() const;
    bool unitsIsSet() const;
    void unsetUnits();

    void setUnits(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isIsInteger() const;
    bool isIntegerIsSet() const;
    void unsetIsInteger();

    void setIsInteger(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getExpression() const;
    bool expressionIsSet() const;
    void unsetExpression();

    void setExpression(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    double getValue() const;
    bool valueIsSet() const;
    void unsetValue();

    void setValue(double value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBtType() const;
    bool btTypeIsSet() const;
    void unsetBtType();

    void setBtType(const utility::string_t& value);


protected:
    utility::string_t m_Units;
    bool m_UnitsIsSet;
    bool m_IsInteger;
    bool m_IsIntegerIsSet;
    utility::string_t m_Expression;
    bool m_ExpressionIsSet;
    double m_Value;
    bool m_ValueIsSet;
    utility::string_t m_BtType;
    bool m_BtTypeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTMParameterQuantity_147_allOf_H_ */
