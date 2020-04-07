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



#include "BTMMateConnector_66_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTMMateConnector_66_allOf::BTMMateConnector_66_allOf()
{
    m_SavedFeatureType = utility::conversions::to_string_t("");
    m_SavedFeatureTypeIsSet = false;
    m_IsHidden = false;
    m_IsHiddenIsSet = false;
    m_Implicit = false;
    m_ImplicitIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTMMateConnector_66_allOf::~BTMMateConnector_66_allOf()
{
}

void BTMMateConnector_66_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTMMateConnector_66_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SavedFeatureTypeIsSet)
    {
        val[utility::conversions::to_string_t("savedFeatureType")] = ModelBase::toJson(m_SavedFeatureType);
    }
    if(m_IsHiddenIsSet)
    {
        val[utility::conversions::to_string_t("isHidden")] = ModelBase::toJson(m_IsHidden);
    }
    if(m_ImplicitIsSet)
    {
        val[utility::conversions::to_string_t("implicit")] = ModelBase::toJson(m_Implicit);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTMMateConnector_66_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("savedFeatureType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("savedFeatureType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_savedFeatureType;
            ok &= ModelBase::fromJson(fieldValue, refVal_savedFeatureType);
            setSavedFeatureType(refVal_savedFeatureType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isHidden")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isHidden"));
        if(!fieldValue.is_null())
        {
            bool refVal_isHidden;
            ok &= ModelBase::fromJson(fieldValue, refVal_isHidden);
            setIsHidden(refVal_isHidden);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("implicit")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("implicit"));
        if(!fieldValue.is_null())
        {
            bool refVal_implicit;
            ok &= ModelBase::fromJson(fieldValue, refVal_implicit);
            setImplicit(refVal_implicit);
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

void BTMMateConnector_66_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_SavedFeatureTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("savedFeatureType"), m_SavedFeatureType));
    }
    if(m_IsHiddenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isHidden"), m_IsHidden));
    }
    if(m_ImplicitIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("implicit"), m_Implicit));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTMMateConnector_66_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("savedFeatureType")))
    {
        utility::string_t refVal_savedFeatureType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("savedFeatureType")), refVal_savedFeatureType );
        setSavedFeatureType(refVal_savedFeatureType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("isHidden")))
    {
        bool refVal_isHidden;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("isHidden")), refVal_isHidden );
        setIsHidden(refVal_isHidden);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("implicit")))
    {
        bool refVal_implicit;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("implicit")), refVal_implicit );
        setImplicit(refVal_implicit);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

utility::string_t BTMMateConnector_66_allOf::getSavedFeatureType() const
{
    return m_SavedFeatureType;
}

void BTMMateConnector_66_allOf::setSavedFeatureType(const utility::string_t& value)
{
    m_SavedFeatureType = value;
    m_SavedFeatureTypeIsSet = true;
}

bool BTMMateConnector_66_allOf::savedFeatureTypeIsSet() const
{
    return m_SavedFeatureTypeIsSet;
}

void BTMMateConnector_66_allOf::unsetSavedFeatureType()
{
    m_SavedFeatureTypeIsSet = false;
}
bool BTMMateConnector_66_allOf::isIsHidden() const
{
    return m_IsHidden;
}

void BTMMateConnector_66_allOf::setIsHidden(bool value)
{
    m_IsHidden = value;
    m_IsHiddenIsSet = true;
}

bool BTMMateConnector_66_allOf::isHiddenIsSet() const
{
    return m_IsHiddenIsSet;
}

void BTMMateConnector_66_allOf::unsetIsHidden()
{
    m_IsHiddenIsSet = false;
}
bool BTMMateConnector_66_allOf::isImplicit() const
{
    return m_Implicit;
}

void BTMMateConnector_66_allOf::setImplicit(bool value)
{
    m_Implicit = value;
    m_ImplicitIsSet = true;
}

bool BTMMateConnector_66_allOf::implicitIsSet() const
{
    return m_ImplicitIsSet;
}

void BTMMateConnector_66_allOf::unsetImplicit()
{
    m_ImplicitIsSet = false;
}
utility::string_t BTMMateConnector_66_allOf::getBtType() const
{
    return m_BtType;
}

void BTMMateConnector_66_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTMMateConnector_66_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTMMateConnector_66_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}


