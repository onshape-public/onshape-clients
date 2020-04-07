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



#include "BTListResponseBTRevisionInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTListResponseBTRevisionInfo::BTListResponseBTRevisionInfo()
{
    m_Href = utility::conversions::to_string_t("");
    m_HrefIsSet = false;
    m_ItemsIsSet = false;
    m_Next = utility::conversions::to_string_t("");
    m_NextIsSet = false;
    m_Previous = utility::conversions::to_string_t("");
    m_PreviousIsSet = false;
}

BTListResponseBTRevisionInfo::~BTListResponseBTRevisionInfo()
{
}

void BTListResponseBTRevisionInfo::validate()
{
    // TODO: implement validation
}

web::json::value BTListResponseBTRevisionInfo::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_HrefIsSet)
    {
        val[utility::conversions::to_string_t("href")] = ModelBase::toJson(m_Href);
    }
    if(m_ItemsIsSet)
    {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(m_Items);
    }
    if(m_NextIsSet)
    {
        val[utility::conversions::to_string_t("next")] = ModelBase::toJson(m_Next);
    }
    if(m_PreviousIsSet)
    {
        val[utility::conversions::to_string_t("previous")] = ModelBase::toJson(m_Previous);
    }

    return val;
}

bool BTListResponseBTRevisionInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("items")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<BTRevisionInfo>> refVal_items;
            ok &= ModelBase::fromJson(fieldValue, refVal_items);
            setItems(refVal_items);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("next")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_next;
            ok &= ModelBase::fromJson(fieldValue, refVal_next);
            setNext(refVal_next);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("previous")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("previous"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_previous;
            ok &= ModelBase::fromJson(fieldValue, refVal_previous);
            setPrevious(refVal_previous);
        }
    }
    return ok;
}

void BTListResponseBTRevisionInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_HrefIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("href"), m_Href));
    }
    if(m_ItemsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("items"), m_Items));
    }
    if(m_NextIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("next"), m_Next));
    }
    if(m_PreviousIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("previous"), m_Previous));
    }
}

bool BTListResponseBTRevisionInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("href")))
    {
        utility::string_t refVal_href;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("href")), refVal_href );
        setHref(refVal_href);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("items")))
    {
        std::vector<std::shared_ptr<BTRevisionInfo>> refVal_items;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("items")), refVal_items );
        setItems(refVal_items);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("next")))
    {
        utility::string_t refVal_next;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("next")), refVal_next );
        setNext(refVal_next);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("previous")))
    {
        utility::string_t refVal_previous;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("previous")), refVal_previous );
        setPrevious(refVal_previous);
    }
    return ok;
}

utility::string_t BTListResponseBTRevisionInfo::getHref() const
{
    return m_Href;
}

void BTListResponseBTRevisionInfo::setHref(const utility::string_t& value)
{
    m_Href = value;
    m_HrefIsSet = true;
}

bool BTListResponseBTRevisionInfo::hrefIsSet() const
{
    return m_HrefIsSet;
}

void BTListResponseBTRevisionInfo::unsetHref()
{
    m_HrefIsSet = false;
}
std::vector<std::shared_ptr<BTRevisionInfo>>& BTListResponseBTRevisionInfo::getItems()
{
    return m_Items;
}

void BTListResponseBTRevisionInfo::setItems(const std::vector<std::shared_ptr<BTRevisionInfo>>& value)
{
    m_Items = value;
    m_ItemsIsSet = true;
}

bool BTListResponseBTRevisionInfo::itemsIsSet() const
{
    return m_ItemsIsSet;
}

void BTListResponseBTRevisionInfo::unsetItems()
{
    m_ItemsIsSet = false;
}
utility::string_t BTListResponseBTRevisionInfo::getNext() const
{
    return m_Next;
}

void BTListResponseBTRevisionInfo::setNext(const utility::string_t& value)
{
    m_Next = value;
    m_NextIsSet = true;
}

bool BTListResponseBTRevisionInfo::nextIsSet() const
{
    return m_NextIsSet;
}

void BTListResponseBTRevisionInfo::unsetNext()
{
    m_NextIsSet = false;
}
utility::string_t BTListResponseBTRevisionInfo::getPrevious() const
{
    return m_Previous;
}

void BTListResponseBTRevisionInfo::setPrevious(const utility::string_t& value)
{
    m_Previous = value;
    m_PreviousIsSet = true;
}

bool BTListResponseBTRevisionInfo::previousIsSet() const
{
    return m_PreviousIsSet;
}

void BTListResponseBTRevisionInfo::unsetPrevious()
{
    m_PreviousIsSet = false;
}
}
}
}
}


