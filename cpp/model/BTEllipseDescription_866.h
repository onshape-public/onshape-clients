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
 * BTEllipseDescription_866.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTEllipseDescription_866_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTEllipseDescription_866_H_


#include "BTCurveDescription_1583.h"
#include <cpprest/details/basic_types.h>
#include "BTEllipseDescription_866_allOf.h"
#include "BTVector3d_389.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTEllipseDescription_866
    : public BTCurveDescription_1583
{
public:
    BTEllipseDescription_866();
    virtual ~BTEllipseDescription_866();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTEllipseDescription_866 members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTVector3d_389> getNormal() const;
    bool normalIsSet() const;
    void unsetNormal();

    void setNormal(const std::shared_ptr<BTVector3d_389>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTVector3d_389> getMajorAxis() const;
    bool majorAxisIsSet() const;
    void unsetMajorAxis();

    void setMajorAxis(const std::shared_ptr<BTVector3d_389>& value);

    /// <summary>
    /// 
    /// </summary>
    double getMajorRadius() const;
    bool majorRadiusIsSet() const;
    void unsetMajorRadius();

    void setMajorRadius(double value);

    /// <summary>
    /// 
    /// </summary>
    double getMinorRadius() const;
    bool minorRadiusIsSet() const;
    void unsetMinorRadius();

    void setMinorRadius(double value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTVector3d_389> getOrigin() const;
    bool originIsSet() const;
    void unsetOrigin();

    void setOrigin(const std::shared_ptr<BTVector3d_389>& value);


protected:
    std::shared_ptr<BTVector3d_389> m_Normal;
    bool m_NormalIsSet;
    std::shared_ptr<BTVector3d_389> m_MajorAxis;
    bool m_MajorAxisIsSet;
    double m_MajorRadius;
    bool m_MajorRadiusIsSet;
    double m_MinorRadius;
    bool m_MinorRadiusIsSet;
    std::shared_ptr<BTVector3d_389> m_Origin;
    bool m_OriginIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTEllipseDescription_866_H_ */
