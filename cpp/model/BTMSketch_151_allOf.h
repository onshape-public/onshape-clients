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
 * BTMSketch_151_allOf.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTMSketch_151_allOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTMSketch_151_allOf_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "BTMSketchConstraint_2.h"
#include "BTMSketchGeomEntity_5.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTMSketch_151_allOf
    : public ModelBase
{
public:
    BTMSketch_151_allOf();
    virtual ~BTMSketch_151_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTMSketch_151_allOf members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTMSketchGeomEntity_5>>& getEntities();
    bool entitiesIsSet() const;
    void unsetEntities();

    void setEntities(const std::vector<std::shared_ptr<BTMSketchGeomEntity_5>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTMSketchConstraint_2>>& getConstraints();
    bool constraintsIsSet() const;
    void unsetConstraints();

    void setConstraints(const std::vector<std::shared_ptr<BTMSketchConstraint_2>>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBtType() const;
    bool btTypeIsSet() const;
    void unsetBtType();

    void setBtType(const utility::string_t& value);


protected:
    std::vector<std::shared_ptr<BTMSketchGeomEntity_5>> m_Entities;
    bool m_EntitiesIsSet;
    std::vector<std::shared_ptr<BTMSketchConstraint_2>> m_Constraints;
    bool m_ConstraintsIsSet;
    utility::string_t m_BtType;
    bool m_BtTypeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTMSketch_151_allOf_H_ */
