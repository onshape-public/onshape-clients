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
 * BTMAssemblyPatternFeature_2241_allOf.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTMAssemblyPatternFeature_2241_allOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTMAssemblyPatternFeature_2241_allOf_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTMAssemblyPatternFeature_2241_allOf
    : public ModelBase
{
public:
    BTMAssemblyPatternFeature_2241_allOf();
    virtual ~BTMAssemblyPatternFeature_2241_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTMAssemblyPatternFeature_2241_allOf members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPatternType() const;
    bool patternTypeIsSet() const;
    void unsetPatternType();

    void setPatternType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBtType() const;
    bool btTypeIsSet() const;
    void unsetBtType();

    void setBtType(const utility::string_t& value);


protected:
    utility::string_t m_PatternType;
    bool m_PatternTypeIsSet;
    utility::string_t m_BtType;
    bool m_BtTypeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTMAssemblyPatternFeature_2241_allOf_H_ */
