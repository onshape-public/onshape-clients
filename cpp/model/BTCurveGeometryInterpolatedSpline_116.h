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
 * BTCurveGeometryInterpolatedSpline_116.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTCurveGeometryInterpolatedSpline_116_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTCurveGeometryInterpolatedSpline_116_H_


#include "BTCurveGeometryInterpolatedSpline_116_allOf.h"
#include <cpprest/details/basic_types.h>
#include <vector>
#include "BTCurveGeometry_114.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTCurveGeometryInterpolatedSpline_116
    : public BTCurveGeometry_114
{
public:
    BTCurveGeometryInterpolatedSpline_116();
    virtual ~BTCurveGeometryInterpolatedSpline_116();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTCurveGeometryInterpolatedSpline_116 members

    /// <summary>
    /// 
    /// </summary>
    bool isIsPeriodic() const;
    bool isPeriodicIsSet() const;
    void unsetIsPeriodic();

    void setIsPeriodic(bool value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<double>& getInterpolationPoints();
    bool interpolationPointsIsSet() const;
    void unsetInterpolationPoints();

    void setInterpolationPoints(std::vector<double> value);

    /// <summary>
    /// 
    /// </summary>
    double getStartDerivativeX() const;
    bool startDerivativeXIsSet() const;
    void unsetStartDerivativeX();

    void setStartDerivativeX(double value);

    /// <summary>
    /// 
    /// </summary>
    double getStartDerivativeY() const;
    bool startDerivativeYIsSet() const;
    void unsetStartDerivativeY();

    void setStartDerivativeY(double value);

    /// <summary>
    /// 
    /// </summary>
    double getEndDerivativeX() const;
    bool endDerivativeXIsSet() const;
    void unsetEndDerivativeX();

    void setEndDerivativeX(double value);

    /// <summary>
    /// 
    /// </summary>
    double getEndDerivativeY() const;
    bool endDerivativeYIsSet() const;
    void unsetEndDerivativeY();

    void setEndDerivativeY(double value);

    /// <summary>
    /// 
    /// </summary>
    double getStartHandleX() const;
    bool startHandleXIsSet() const;
    void unsetStartHandleX();

    void setStartHandleX(double value);

    /// <summary>
    /// 
    /// </summary>
    double getStartHandleY() const;
    bool startHandleYIsSet() const;
    void unsetStartHandleY();

    void setStartHandleY(double value);

    /// <summary>
    /// 
    /// </summary>
    double getEndHandleX() const;
    bool endHandleXIsSet() const;
    void unsetEndHandleX();

    void setEndHandleX(double value);

    /// <summary>
    /// 
    /// </summary>
    double getEndHandleY() const;
    bool endHandleYIsSet() const;
    void unsetEndHandleY();

    void setEndHandleY(double value);


protected:
    bool m_IsPeriodic;
    bool m_IsPeriodicIsSet;
    std::vector<double> m_InterpolationPoints;
    bool m_InterpolationPointsIsSet;
    double m_StartDerivativeX;
    bool m_StartDerivativeXIsSet;
    double m_StartDerivativeY;
    bool m_StartDerivativeYIsSet;
    double m_EndDerivativeX;
    bool m_EndDerivativeXIsSet;
    double m_EndDerivativeY;
    bool m_EndDerivativeYIsSet;
    double m_StartHandleX;
    bool m_StartHandleXIsSet;
    double m_StartHandleY;
    bool m_StartHandleYIsSet;
    double m_EndHandleX;
    bool m_EndHandleXIsSet;
    double m_EndHandleY;
    bool m_EndHandleYIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTCurveGeometryInterpolatedSpline_116_H_ */
