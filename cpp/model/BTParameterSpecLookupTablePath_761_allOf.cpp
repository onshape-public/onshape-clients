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



#include "BTParameterSpecLookupTablePath_761_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTParameterSpecLookupTablePath_761_allOf::BTParameterSpecLookupTablePath_761_allOf()
{
    m_LookupTableIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTParameterSpecLookupTablePath_761_allOf::~BTParameterSpecLookupTablePath_761_allOf()
{
}

void BTParameterSpecLookupTablePath_761_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTParameterSpecLookupTablePath_761_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_LookupTableIsSet)
    {
        val[utility::conversions::to_string_t("lookupTable")] = ModelBase::toJson(m_LookupTable);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTParameterSpecLookupTablePath_761_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lookupTable")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lookupTable"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTParameterLookupTableListEntry_1916> refVal_lookupTable;
            ok &= ModelBase::fromJson(fieldValue, refVal_lookupTable);
            setLookupTable(refVal_lookupTable);
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

void BTParameterSpecLookupTablePath_761_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_LookupTableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lookupTable"), m_LookupTable));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTParameterSpecLookupTablePath_761_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("lookupTable")))
    {
        std::shared_ptr<BTParameterLookupTableListEntry_1916> refVal_lookupTable;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("lookupTable")), refVal_lookupTable );
        setLookupTable(refVal_lookupTable);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

std::shared_ptr<BTParameterLookupTableListEntry_1916> BTParameterSpecLookupTablePath_761_allOf::getLookupTable() const
{
    return m_LookupTable;
}

void BTParameterSpecLookupTablePath_761_allOf::setLookupTable(const std::shared_ptr<BTParameterLookupTableListEntry_1916>& value)
{
    m_LookupTable = value;
    m_LookupTableIsSet = true;
}

bool BTParameterSpecLookupTablePath_761_allOf::lookupTableIsSet() const
{
    return m_LookupTableIsSet;
}

void BTParameterSpecLookupTablePath_761_allOf::unsetLookupTable()
{
    m_LookupTableIsSet = false;
}
utility::string_t BTParameterSpecLookupTablePath_761_allOf::getBtType() const
{
    return m_BtType;
}

void BTParameterSpecLookupTablePath_761_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTParameterSpecLookupTablePath_761_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTParameterSpecLookupTablePath_761_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}


