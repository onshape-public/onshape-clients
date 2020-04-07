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



#include "BTAllowEdgePointFilter_2371.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTAllowEdgePointFilter_2371::BTAllowEdgePointFilter_2371()
{
    m_AllowsEdgePoint = false;
    m_AllowsEdgePointIsSet = false;
}

BTAllowEdgePointFilter_2371::~BTAllowEdgePointFilter_2371()
{
}

void BTAllowEdgePointFilter_2371::validate()
{
    // TODO: implement validation
}

web::json::value BTAllowEdgePointFilter_2371::toJson() const
{
    web::json::value val = this->BTQueryFilter_183::toJson();
    
    if(m_AllowsEdgePointIsSet)
    {
        val[utility::conversions::to_string_t("allowsEdgePoint")] = ModelBase::toJson(m_AllowsEdgePoint);
    }

    return val;
}

bool BTAllowEdgePointFilter_2371::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTQueryFilter_183::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t("allowsEdgePoint")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowsEdgePoint"));
        if(!fieldValue.is_null())
        {
            bool refVal_allowsEdgePoint;
            ok &= ModelBase::fromJson(fieldValue, refVal_allowsEdgePoint);
            setAllowsEdgePoint(refVal_allowsEdgePoint);
        }
    }
    return ok;
}

void BTAllowEdgePointFilter_2371::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
    if(m_AllowsEdgePointIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("allowsEdgePoint"), m_AllowsEdgePoint));
    }
}

bool BTAllowEdgePointFilter_2371::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("allowsEdgePoint")))
    {
        bool refVal_allowsEdgePoint;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("allowsEdgePoint")), refVal_allowsEdgePoint );
        setAllowsEdgePoint(refVal_allowsEdgePoint);
    }
    return ok;
}

bool BTAllowEdgePointFilter_2371::isAllowsEdgePoint() const
{
    return m_AllowsEdgePoint;
}

void BTAllowEdgePointFilter_2371::setAllowsEdgePoint(bool value)
{
    m_AllowsEdgePoint = value;
    m_AllowsEdgePointIsSet = true;
}

bool BTAllowEdgePointFilter_2371::allowsEdgePointIsSet() const
{
    return m_AllowsEdgePointIsSet;
}

void BTAllowEdgePointFilter_2371::unsetAllowsEdgePoint()
{
    m_AllowsEdgePointIsSet = false;
}
}
}
}
}


