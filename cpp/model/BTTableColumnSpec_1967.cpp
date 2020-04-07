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



#include "BTTableColumnSpec_1967.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTTableColumnSpec_1967::BTTableColumnSpec_1967()
{
    m_DefaultCellSpecIsSet = false;
    m_DefaultColumnWidthUnits = utility::conversions::to_string_t("");
    m_DefaultColumnWidthUnitsIsSet = false;
    m_DefaultColumnWidthValue = 0;
    m_DefaultColumnWidthValueIsSet = false;
    m_DefaultHeaderName = utility::conversions::to_string_t("");
    m_DefaultHeaderNameIsSet = false;
    m_DefaultTextAlignment = utility::conversions::to_string_t("");
    m_DefaultTextAlignmentIsSet = false;
    m_ReadOnly = false;
    m_ReadOnlyIsSet = false;
}

BTTableColumnSpec_1967::~BTTableColumnSpec_1967()
{
}

void BTTableColumnSpec_1967::validate()
{
    // TODO: implement validation
}

web::json::value BTTableColumnSpec_1967::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DefaultCellSpecIsSet)
    {
        val[utility::conversions::to_string_t("defaultCellSpec")] = ModelBase::toJson(m_DefaultCellSpec);
    }
    if(m_DefaultColumnWidthUnitsIsSet)
    {
        val[utility::conversions::to_string_t("defaultColumnWidthUnits")] = ModelBase::toJson(m_DefaultColumnWidthUnits);
    }
    if(m_DefaultColumnWidthValueIsSet)
    {
        val[utility::conversions::to_string_t("defaultColumnWidthValue")] = ModelBase::toJson(m_DefaultColumnWidthValue);
    }
    if(m_DefaultHeaderNameIsSet)
    {
        val[utility::conversions::to_string_t("defaultHeaderName")] = ModelBase::toJson(m_DefaultHeaderName);
    }
    if(m_DefaultTextAlignmentIsSet)
    {
        val[utility::conversions::to_string_t("defaultTextAlignment")] = ModelBase::toJson(m_DefaultTextAlignment);
    }
    if(m_ReadOnlyIsSet)
    {
        val[utility::conversions::to_string_t("readOnly")] = ModelBase::toJson(m_ReadOnly);
    }

    return val;
}

bool BTTableColumnSpec_1967::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("defaultCellSpec")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defaultCellSpec"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTParameterSpec_6> refVal_defaultCellSpec;
            ok &= ModelBase::fromJson(fieldValue, refVal_defaultCellSpec);
            setDefaultCellSpec(refVal_defaultCellSpec);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defaultColumnWidthUnits")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defaultColumnWidthUnits"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_defaultColumnWidthUnits;
            ok &= ModelBase::fromJson(fieldValue, refVal_defaultColumnWidthUnits);
            setDefaultColumnWidthUnits(refVal_defaultColumnWidthUnits);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defaultColumnWidthValue")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defaultColumnWidthValue"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_defaultColumnWidthValue;
            ok &= ModelBase::fromJson(fieldValue, refVal_defaultColumnWidthValue);
            setDefaultColumnWidthValue(refVal_defaultColumnWidthValue);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defaultHeaderName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defaultHeaderName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_defaultHeaderName;
            ok &= ModelBase::fromJson(fieldValue, refVal_defaultHeaderName);
            setDefaultHeaderName(refVal_defaultHeaderName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defaultTextAlignment")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defaultTextAlignment"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_defaultTextAlignment;
            ok &= ModelBase::fromJson(fieldValue, refVal_defaultTextAlignment);
            setDefaultTextAlignment(refVal_defaultTextAlignment);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("readOnly")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("readOnly"));
        if(!fieldValue.is_null())
        {
            bool refVal_readOnly;
            ok &= ModelBase::fromJson(fieldValue, refVal_readOnly);
            setReadOnly(refVal_readOnly);
        }
    }
    return ok;
}

void BTTableColumnSpec_1967::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_DefaultCellSpecIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("defaultCellSpec"), m_DefaultCellSpec));
    }
    if(m_DefaultColumnWidthUnitsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("defaultColumnWidthUnits"), m_DefaultColumnWidthUnits));
    }
    if(m_DefaultColumnWidthValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("defaultColumnWidthValue"), m_DefaultColumnWidthValue));
    }
    if(m_DefaultHeaderNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("defaultHeaderName"), m_DefaultHeaderName));
    }
    if(m_DefaultTextAlignmentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("defaultTextAlignment"), m_DefaultTextAlignment));
    }
    if(m_ReadOnlyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("readOnly"), m_ReadOnly));
    }
}

bool BTTableColumnSpec_1967::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("defaultCellSpec")))
    {
        std::shared_ptr<BTParameterSpec_6> refVal_defaultCellSpec;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("defaultCellSpec")), refVal_defaultCellSpec );
        setDefaultCellSpec(refVal_defaultCellSpec);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("defaultColumnWidthUnits")))
    {
        utility::string_t refVal_defaultColumnWidthUnits;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("defaultColumnWidthUnits")), refVal_defaultColumnWidthUnits );
        setDefaultColumnWidthUnits(refVal_defaultColumnWidthUnits);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("defaultColumnWidthValue")))
    {
        int32_t refVal_defaultColumnWidthValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("defaultColumnWidthValue")), refVal_defaultColumnWidthValue );
        setDefaultColumnWidthValue(refVal_defaultColumnWidthValue);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("defaultHeaderName")))
    {
        utility::string_t refVal_defaultHeaderName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("defaultHeaderName")), refVal_defaultHeaderName );
        setDefaultHeaderName(refVal_defaultHeaderName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("defaultTextAlignment")))
    {
        utility::string_t refVal_defaultTextAlignment;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("defaultTextAlignment")), refVal_defaultTextAlignment );
        setDefaultTextAlignment(refVal_defaultTextAlignment);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("readOnly")))
    {
        bool refVal_readOnly;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("readOnly")), refVal_readOnly );
        setReadOnly(refVal_readOnly);
    }
    return ok;
}

std::shared_ptr<BTParameterSpec_6> BTTableColumnSpec_1967::getDefaultCellSpec() const
{
    return m_DefaultCellSpec;
}

void BTTableColumnSpec_1967::setDefaultCellSpec(const std::shared_ptr<BTParameterSpec_6>& value)
{
    m_DefaultCellSpec = value;
    m_DefaultCellSpecIsSet = true;
}

bool BTTableColumnSpec_1967::defaultCellSpecIsSet() const
{
    return m_DefaultCellSpecIsSet;
}

void BTTableColumnSpec_1967::unsetDefaultCellSpec()
{
    m_DefaultCellSpecIsSet = false;
}
utility::string_t BTTableColumnSpec_1967::getDefaultColumnWidthUnits() const
{
    return m_DefaultColumnWidthUnits;
}

void BTTableColumnSpec_1967::setDefaultColumnWidthUnits(const utility::string_t& value)
{
    m_DefaultColumnWidthUnits = value;
    m_DefaultColumnWidthUnitsIsSet = true;
}

bool BTTableColumnSpec_1967::defaultColumnWidthUnitsIsSet() const
{
    return m_DefaultColumnWidthUnitsIsSet;
}

void BTTableColumnSpec_1967::unsetDefaultColumnWidthUnits()
{
    m_DefaultColumnWidthUnitsIsSet = false;
}
int32_t BTTableColumnSpec_1967::getDefaultColumnWidthValue() const
{
    return m_DefaultColumnWidthValue;
}

void BTTableColumnSpec_1967::setDefaultColumnWidthValue(int32_t value)
{
    m_DefaultColumnWidthValue = value;
    m_DefaultColumnWidthValueIsSet = true;
}

bool BTTableColumnSpec_1967::defaultColumnWidthValueIsSet() const
{
    return m_DefaultColumnWidthValueIsSet;
}

void BTTableColumnSpec_1967::unsetDefaultColumnWidthValue()
{
    m_DefaultColumnWidthValueIsSet = false;
}
utility::string_t BTTableColumnSpec_1967::getDefaultHeaderName() const
{
    return m_DefaultHeaderName;
}

void BTTableColumnSpec_1967::setDefaultHeaderName(const utility::string_t& value)
{
    m_DefaultHeaderName = value;
    m_DefaultHeaderNameIsSet = true;
}

bool BTTableColumnSpec_1967::defaultHeaderNameIsSet() const
{
    return m_DefaultHeaderNameIsSet;
}

void BTTableColumnSpec_1967::unsetDefaultHeaderName()
{
    m_DefaultHeaderNameIsSet = false;
}
utility::string_t BTTableColumnSpec_1967::getDefaultTextAlignment() const
{
    return m_DefaultTextAlignment;
}

void BTTableColumnSpec_1967::setDefaultTextAlignment(const utility::string_t& value)
{
    m_DefaultTextAlignment = value;
    m_DefaultTextAlignmentIsSet = true;
}

bool BTTableColumnSpec_1967::defaultTextAlignmentIsSet() const
{
    return m_DefaultTextAlignmentIsSet;
}

void BTTableColumnSpec_1967::unsetDefaultTextAlignment()
{
    m_DefaultTextAlignmentIsSet = false;
}
bool BTTableColumnSpec_1967::isReadOnly() const
{
    return m_ReadOnly;
}

void BTTableColumnSpec_1967::setReadOnly(bool value)
{
    m_ReadOnly = value;
    m_ReadOnlyIsSet = true;
}

bool BTTableColumnSpec_1967::readOnlyIsSet() const
{
    return m_ReadOnlyIsSet;
}

void BTTableColumnSpec_1967::unsetReadOnly()
{
    m_ReadOnlyIsSet = false;
}
}
}
}
}


