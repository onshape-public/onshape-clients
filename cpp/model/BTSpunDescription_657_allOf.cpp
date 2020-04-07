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



#include "BTSpunDescription_657_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTSpunDescription_657_allOf::BTSpunDescription_657_allOf()
{
    m_AxisIsSet = false;
    m_OriginIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTSpunDescription_657_allOf::~BTSpunDescription_657_allOf()
{
}

void BTSpunDescription_657_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTSpunDescription_657_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AxisIsSet)
    {
        val[utility::conversions::to_string_t("axis")] = ModelBase::toJson(m_Axis);
    }
    if(m_OriginIsSet)
    {
        val[utility::conversions::to_string_t("origin")] = ModelBase::toJson(m_Origin);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTSpunDescription_657_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("axis")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("axis"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTVector3d_389> refVal_axis;
            ok &= ModelBase::fromJson(fieldValue, refVal_axis);
            setAxis(refVal_axis);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("origin")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTVector3d_389> refVal_origin;
            ok &= ModelBase::fromJson(fieldValue, refVal_origin);
            setOrigin(refVal_origin);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("btType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("btType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_btType;
            ok &= ModelBase::fromJson(fieldValue, refVal_btType);
            setBtType(refVal_btType);
        }
    }
    return ok;
}

void BTSpunDescription_657_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_AxisIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("axis"), m_Axis));
    }
    if(m_OriginIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("origin"), m_Origin));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTSpunDescription_657_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("axis")))
    {
        std::shared_ptr<BTVector3d_389> refVal_axis;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("axis")), refVal_axis );
        setAxis(refVal_axis);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("origin")))
    {
        std::shared_ptr<BTVector3d_389> refVal_origin;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("origin")), refVal_origin );
        setOrigin(refVal_origin);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

std::shared_ptr<BTVector3d_389> BTSpunDescription_657_allOf::getAxis() const
{
    return m_Axis;
}

void BTSpunDescription_657_allOf::setAxis(const std::shared_ptr<BTVector3d_389>& value)
{
    m_Axis = value;
    m_AxisIsSet = true;
}

bool BTSpunDescription_657_allOf::axisIsSet() const
{
    return m_AxisIsSet;
}

void BTSpunDescription_657_allOf::unsetAxis()
{
    m_AxisIsSet = false;
}
std::shared_ptr<BTVector3d_389> BTSpunDescription_657_allOf::getOrigin() const
{
    return m_Origin;
}

void BTSpunDescription_657_allOf::setOrigin(const std::shared_ptr<BTVector3d_389>& value)
{
    m_Origin = value;
    m_OriginIsSet = true;
}

bool BTSpunDescription_657_allOf::originIsSet() const
{
    return m_OriginIsSet;
}

void BTSpunDescription_657_allOf::unsetOrigin()
{
    m_OriginIsSet = false;
}
utility::string_t BTSpunDescription_657_allOf::getBtType() const
{
    return m_BtType;
}

void BTSpunDescription_657_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTSpunDescription_657_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTSpunDescription_657_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}


