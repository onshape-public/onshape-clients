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



#include "BTFSValueArray_1499.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTFSValueArray_1499::BTFSValueArray_1499()
{
    m_ValueIsSet = false;
}

BTFSValueArray_1499::~BTFSValueArray_1499()
{
}

void BTFSValueArray_1499::validate()
{
    // TODO: implement validation
}

web::json::value BTFSValueArray_1499::toJson() const
{
    web::json::value val = this->BTFSValue_1888::toJson();
    
    if(m_ValueIsSet)
    {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(m_Value);
    }

    return val;
}

bool BTFSValueArray_1499::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTFSValue_1888::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t("value")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<BTFSValue_1888>> refVal_value;
            ok &= ModelBase::fromJson(fieldValue, refVal_value);
            setValue(refVal_value);
        }
    }
    return ok;
}

void BTFSValueArray_1499::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ConfigurationValueStringIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("configurationValueString"), m_ConfigurationValueString));
    }
    if(m_StandardTypeNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("standardTypeName"), m_StandardTypeName));
    }
    if(m_TypeTagIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("typeTag"), m_TypeTag));
    }
    if(m_ValueObjectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("valueObject"), m_ValueObject));
    }
    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("value"), m_Value));
    }
}

bool BTFSValueArray_1499::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("configurationValueString")))
    {
        utility::string_t refVal_configurationValueString;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("configurationValueString")), refVal_configurationValueString );
        setConfigurationValueString(refVal_configurationValueString);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("standardTypeName")))
    {
        utility::string_t refVal_standardTypeName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("standardTypeName")), refVal_standardTypeName );
        setStandardTypeName(refVal_standardTypeName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("typeTag")))
    {
        utility::string_t refVal_typeTag;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("typeTag")), refVal_typeTag );
        setTypeTag(refVal_typeTag);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("valueObject")))
    {
        std::vector<std::shared_ptr<Object>> refVal_valueObject;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("valueObject")), refVal_valueObject );
        setValueObject(refVal_valueObject);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("value")))
    {
        std::vector<std::shared_ptr<BTFSValue_1888>> refVal_value;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("value")), refVal_value );
        setValue(refVal_value);
    }
    return ok;
}

std::vector<std::shared_ptr<BTFSValue_1888>>& BTFSValueArray_1499::getValue()
{
    return m_Value;
}

void BTFSValueArray_1499::setValue(const std::vector<std::shared_ptr<BTFSValue_1888>>& value)
{
    m_Value = value;
    m_ValueIsSet = true;
}

bool BTFSValueArray_1499::valueIsSet() const
{
    return m_ValueIsSet;
}

void BTFSValueArray_1499::unsetValue()
{
    m_ValueIsSet = false;
}
}
}
}
}


