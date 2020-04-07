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



#include "BTTableCellParameter_2399.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTTableCellParameter_2399::BTTableCellParameter_2399()
{
    m_Error = utility::conversions::to_string_t("");
    m_ErrorIsSet = false;
    m_OverrideSpecIsSet = false;
    m_ParameterIsSet = false;
}

BTTableCellParameter_2399::~BTTableCellParameter_2399()
{
}

void BTTableCellParameter_2399::validate()
{
    // TODO: implement validation
}

web::json::value BTTableCellParameter_2399::toJson() const
{
    web::json::value val = this->BTTableCell_1114::toJson();
    
    if(m_ErrorIsSet)
    {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(m_Error);
    }
    if(m_OverrideSpecIsSet)
    {
        val[utility::conversions::to_string_t("overrideSpec")] = ModelBase::toJson(m_OverrideSpec);
    }
    if(m_ParameterIsSet)
    {
        val[utility::conversions::to_string_t("parameter")] = ModelBase::toJson(m_Parameter);
    }

    return val;
}

bool BTTableCellParameter_2399::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTTableCell_1114::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t("error")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_error;
            ok &= ModelBase::fromJson(fieldValue, refVal_error);
            setError(refVal_error);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("overrideSpec")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("overrideSpec"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTParameterSpec_6> refVal_overrideSpec;
            ok &= ModelBase::fromJson(fieldValue, refVal_overrideSpec);
            setOverrideSpec(refVal_overrideSpec);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameter")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameter"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTMParameter_1> refVal_parameter;
            ok &= ModelBase::fromJson(fieldValue, refVal_parameter);
            setParameter(refVal_parameter);
        }
    }
    return ok;
}

void BTTableCellParameter_2399::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_IsEverVisibleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isEverVisible"), m_IsEverVisible));
    }
    if(m_IsReadOnlyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isReadOnly"), m_IsReadOnly));
    }
    if(m_ErrorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("error"), m_Error));
    }
    if(m_OverrideSpecIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("overrideSpec"), m_OverrideSpec));
    }
    if(m_ParameterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parameter"), m_Parameter));
    }
}

bool BTTableCellParameter_2399::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("isEverVisible")))
    {
        bool refVal_isEverVisible;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("isEverVisible")), refVal_isEverVisible );
        setIsEverVisible(refVal_isEverVisible);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("isReadOnly")))
    {
        bool refVal_isReadOnly;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("isReadOnly")), refVal_isReadOnly );
        setIsReadOnly(refVal_isReadOnly);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("error")))
    {
        utility::string_t refVal_error;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("error")), refVal_error );
        setError(refVal_error);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("overrideSpec")))
    {
        std::shared_ptr<BTParameterSpec_6> refVal_overrideSpec;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("overrideSpec")), refVal_overrideSpec );
        setOverrideSpec(refVal_overrideSpec);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parameter")))
    {
        std::shared_ptr<BTMParameter_1> refVal_parameter;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parameter")), refVal_parameter );
        setParameter(refVal_parameter);
    }
    return ok;
}

utility::string_t BTTableCellParameter_2399::getError() const
{
    return m_Error;
}

void BTTableCellParameter_2399::setError(const utility::string_t& value)
{
    m_Error = value;
    m_ErrorIsSet = true;
}

bool BTTableCellParameter_2399::errorIsSet() const
{
    return m_ErrorIsSet;
}

void BTTableCellParameter_2399::unsetError()
{
    m_ErrorIsSet = false;
}
std::shared_ptr<BTParameterSpec_6> BTTableCellParameter_2399::getOverrideSpec() const
{
    return m_OverrideSpec;
}

void BTTableCellParameter_2399::setOverrideSpec(const std::shared_ptr<BTParameterSpec_6>& value)
{
    m_OverrideSpec = value;
    m_OverrideSpecIsSet = true;
}

bool BTTableCellParameter_2399::overrideSpecIsSet() const
{
    return m_OverrideSpecIsSet;
}

void BTTableCellParameter_2399::unsetOverrideSpec()
{
    m_OverrideSpecIsSet = false;
}
std::shared_ptr<BTMParameter_1> BTTableCellParameter_2399::getParameter() const
{
    return m_Parameter;
}

void BTTableCellParameter_2399::setParameter(const std::shared_ptr<BTMParameter_1>& value)
{
    m_Parameter = value;
    m_ParameterIsSet = true;
}

bool BTTableCellParameter_2399::parameterIsSet() const
{
    return m_ParameterIsSet;
}

void BTTableCellParameter_2399::unsetParameter()
{
    m_ParameterIsSet = false;
}
}
}
}
}


