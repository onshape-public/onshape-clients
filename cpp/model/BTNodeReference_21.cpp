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



#include "BTNodeReference_21.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTNodeReference_21::BTNodeReference_21()
{
    m_NodeId = utility::conversions::to_string_t("");
    m_NodeIdIsSet = false;
    m_NodeIdRawIsSet = false;
}

BTNodeReference_21::~BTNodeReference_21()
{
}

void BTNodeReference_21::validate()
{
    // TODO: implement validation
}

web::json::value BTNodeReference_21::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NodeIdIsSet)
    {
        val[utility::conversions::to_string_t("nodeId")] = ModelBase::toJson(m_NodeId);
    }
    if(m_NodeIdRawIsSet)
    {
        val[utility::conversions::to_string_t("nodeIdRaw")] = ModelBase::toJson(m_NodeIdRaw);
    }

    return val;
}

bool BTNodeReference_21::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nodeId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_nodeId;
            ok &= ModelBase::fromJson(fieldValue, refVal_nodeId);
            setNodeId(refVal_nodeId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodeIdRaw")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeIdRaw"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTObjectId> refVal_nodeIdRaw;
            ok &= ModelBase::fromJson(fieldValue, refVal_nodeIdRaw);
            setNodeIdRaw(refVal_nodeIdRaw);
        }
    }
    return ok;
}

void BTNodeReference_21::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_NodeIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nodeId"), m_NodeId));
    }
    if(m_NodeIdRawIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nodeIdRaw"), m_NodeIdRaw));
    }
}

bool BTNodeReference_21::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("nodeId")))
    {
        utility::string_t refVal_nodeId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("nodeId")), refVal_nodeId );
        setNodeId(refVal_nodeId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("nodeIdRaw")))
    {
        std::shared_ptr<BTObjectId> refVal_nodeIdRaw;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("nodeIdRaw")), refVal_nodeIdRaw );
        setNodeIdRaw(refVal_nodeIdRaw);
    }
    return ok;
}

utility::string_t BTNodeReference_21::getNodeId() const
{
    return m_NodeId;
}

void BTNodeReference_21::setNodeId(const utility::string_t& value)
{
    m_NodeId = value;
    m_NodeIdIsSet = true;
}

bool BTNodeReference_21::nodeIdIsSet() const
{
    return m_NodeIdIsSet;
}

void BTNodeReference_21::unsetNodeId()
{
    m_NodeIdIsSet = false;
}
std::shared_ptr<BTObjectId> BTNodeReference_21::getNodeIdRaw() const
{
    return m_NodeIdRaw;
}

void BTNodeReference_21::setNodeIdRaw(const std::shared_ptr<BTObjectId>& value)
{
    m_NodeIdRaw = value;
    m_NodeIdRawIsSet = true;
}

bool BTNodeReference_21::nodeIdRawIsSet() const
{
    return m_NodeIdRawIsSet;
}

void BTNodeReference_21::unsetNodeIdRaw()
{
    m_NodeIdRawIsSet = false;
}
}
}
}
}


