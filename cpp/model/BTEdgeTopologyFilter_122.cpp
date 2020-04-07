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



#include "BTEdgeTopologyFilter_122.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTEdgeTopologyFilter_122::BTEdgeTopologyFilter_122()
{
    m_IsInternalEdge = false;
    m_IsInternalEdgeIsSet = false;
}

BTEdgeTopologyFilter_122::~BTEdgeTopologyFilter_122()
{
}

void BTEdgeTopologyFilter_122::validate()
{
    // TODO: implement validation
}

web::json::value BTEdgeTopologyFilter_122::toJson() const
{
    web::json::value val = this->BTQueryFilter_183::toJson();
    
    if(m_IsInternalEdgeIsSet)
    {
        val[utility::conversions::to_string_t("isInternalEdge")] = ModelBase::toJson(m_IsInternalEdge);
    }

    return val;
}

bool BTEdgeTopologyFilter_122::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTQueryFilter_183::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t("isInternalEdge")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isInternalEdge"));
        if(!fieldValue.is_null())
        {
            bool refVal_isInternalEdge;
            ok &= ModelBase::fromJson(fieldValue, refVal_isInternalEdge);
            setIsInternalEdge(refVal_isInternalEdge);
        }
    }
    return ok;
}

void BTEdgeTopologyFilter_122::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_IsInternalEdgeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isInternalEdge"), m_IsInternalEdge));
    }
}

bool BTEdgeTopologyFilter_122::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("isInternalEdge")))
    {
        bool refVal_isInternalEdge;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("isInternalEdge")), refVal_isInternalEdge );
        setIsInternalEdge(refVal_isInternalEdge);
    }
    return ok;
}

bool BTEdgeTopologyFilter_122::isIsInternalEdge() const
{
    return m_IsInternalEdge;
}

void BTEdgeTopologyFilter_122::setIsInternalEdge(bool value)
{
    m_IsInternalEdge = value;
    m_IsInternalEdgeIsSet = true;
}

bool BTEdgeTopologyFilter_122::isInternalEdgeIsSet() const
{
    return m_IsInternalEdgeIsSet;
}

void BTEdgeTopologyFilter_122::unsetIsInternalEdge()
{
    m_IsInternalEdgeIsSet = false;
}
}
}
}
}


