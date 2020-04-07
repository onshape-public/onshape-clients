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



#include "BTAPIApplicationSummaryInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTAPIApplicationSummaryInfo::BTAPIApplicationSummaryInfo()
{
    m_ClientId = utility::conversions::to_string_t("");
    m_ClientIdIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_Href = utility::conversions::to_string_t("");
    m_HrefIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_State = 0;
    m_StateIsSet = false;
    m_ViewRef = utility::conversions::to_string_t("");
    m_ViewRefIsSet = false;
}

BTAPIApplicationSummaryInfo::~BTAPIApplicationSummaryInfo()
{
}

void BTAPIApplicationSummaryInfo::validate()
{
    // TODO: implement validation
}

web::json::value BTAPIApplicationSummaryInfo::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ClientIdIsSet)
    {
        val[utility::conversions::to_string_t("clientId")] = ModelBase::toJson(m_ClientId);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(m_Description);
    }
    if(m_HrefIsSet)
    {
        val[utility::conversions::to_string_t("href")] = ModelBase::toJson(m_Href);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_StateIsSet)
    {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(m_State);
    }
    if(m_ViewRefIsSet)
    {
        val[utility::conversions::to_string_t("viewRef")] = ModelBase::toJson(m_ViewRef);
    }

    return val;
}

bool BTAPIApplicationSummaryInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("clientId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clientId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_clientId;
            ok &= ModelBase::fromJson(fieldValue, refVal_clientId);
            setClientId(refVal_clientId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_description;
            ok &= ModelBase::fromJson(fieldValue, refVal_description);
            setDescription(refVal_description);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("href")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("href"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_href;
            ok &= ModelBase::fromJson(fieldValue, refVal_href);
            setHref(refVal_href);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_name);
            setName(refVal_name);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_state;
            ok &= ModelBase::fromJson(fieldValue, refVal_state);
            setState(refVal_state);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("viewRef")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("viewRef"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_viewRef;
            ok &= ModelBase::fromJson(fieldValue, refVal_viewRef);
            setViewRef(refVal_viewRef);
        }
    }
    return ok;
}

void BTAPIApplicationSummaryInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ClientIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("clientId"), m_ClientId));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("description"), m_Description));
    }
    if(m_HrefIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("href"), m_Href));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_StateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("state"), m_State));
    }
    if(m_ViewRefIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("viewRef"), m_ViewRef));
    }
}

bool BTAPIApplicationSummaryInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("clientId")))
    {
        utility::string_t refVal_clientId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("clientId")), refVal_clientId );
        setClientId(refVal_clientId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("description")))
    {
        utility::string_t refVal_description;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("description")), refVal_description );
        setDescription(refVal_description);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("href")))
    {
        utility::string_t refVal_href;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("href")), refVal_href );
        setHref(refVal_href);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("state")))
    {
        int32_t refVal_state;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("state")), refVal_state );
        setState(refVal_state);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("viewRef")))
    {
        utility::string_t refVal_viewRef;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("viewRef")), refVal_viewRef );
        setViewRef(refVal_viewRef);
    }
    return ok;
}

utility::string_t BTAPIApplicationSummaryInfo::getClientId() const
{
    return m_ClientId;
}

void BTAPIApplicationSummaryInfo::setClientId(const utility::string_t& value)
{
    m_ClientId = value;
    m_ClientIdIsSet = true;
}

bool BTAPIApplicationSummaryInfo::clientIdIsSet() const
{
    return m_ClientIdIsSet;
}

void BTAPIApplicationSummaryInfo::unsetClientId()
{
    m_ClientIdIsSet = false;
}
utility::string_t BTAPIApplicationSummaryInfo::getDescription() const
{
    return m_Description;
}

void BTAPIApplicationSummaryInfo::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool BTAPIApplicationSummaryInfo::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void BTAPIApplicationSummaryInfo::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t BTAPIApplicationSummaryInfo::getHref() const
{
    return m_Href;
}

void BTAPIApplicationSummaryInfo::setHref(const utility::string_t& value)
{
    m_Href = value;
    m_HrefIsSet = true;
}

bool BTAPIApplicationSummaryInfo::hrefIsSet() const
{
    return m_HrefIsSet;
}

void BTAPIApplicationSummaryInfo::unsetHref()
{
    m_HrefIsSet = false;
}
utility::string_t BTAPIApplicationSummaryInfo::getId() const
{
    return m_Id;
}

void BTAPIApplicationSummaryInfo::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool BTAPIApplicationSummaryInfo::idIsSet() const
{
    return m_IdIsSet;
}

void BTAPIApplicationSummaryInfo::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t BTAPIApplicationSummaryInfo::getName() const
{
    return m_Name;
}

void BTAPIApplicationSummaryInfo::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool BTAPIApplicationSummaryInfo::nameIsSet() const
{
    return m_NameIsSet;
}

void BTAPIApplicationSummaryInfo::unsetName()
{
    m_NameIsSet = false;
}
int32_t BTAPIApplicationSummaryInfo::getState() const
{
    return m_State;
}

void BTAPIApplicationSummaryInfo::setState(int32_t value)
{
    m_State = value;
    m_StateIsSet = true;
}

bool BTAPIApplicationSummaryInfo::stateIsSet() const
{
    return m_StateIsSet;
}

void BTAPIApplicationSummaryInfo::unsetState()
{
    m_StateIsSet = false;
}
utility::string_t BTAPIApplicationSummaryInfo::getViewRef() const
{
    return m_ViewRef;
}

void BTAPIApplicationSummaryInfo::setViewRef(const utility::string_t& value)
{
    m_ViewRef = value;
    m_ViewRefIsSet = true;
}

bool BTAPIApplicationSummaryInfo::viewRefIsSet() const
{
    return m_ViewRefIsSet;
}

void BTAPIApplicationSummaryInfo::unsetViewRef()
{
    m_ViewRefIsSet = false;
}
}
}
}
}


