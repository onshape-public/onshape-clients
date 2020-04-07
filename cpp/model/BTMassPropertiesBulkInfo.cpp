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



#include "BTMassPropertiesBulkInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTMassPropertiesBulkInfo::BTMassPropertiesBulkInfo()
{
    m_BodiesIsSet = false;
    m_MicroversionId = utility::conversions::to_string_t("");
    m_MicroversionIdIsSet = false;
}

BTMassPropertiesBulkInfo::~BTMassPropertiesBulkInfo()
{
}

void BTMassPropertiesBulkInfo::validate()
{
    // TODO: implement validation
}

web::json::value BTMassPropertiesBulkInfo::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_BodiesIsSet)
    {
        val[utility::conversions::to_string_t("bodies")] = ModelBase::toJson(m_Bodies);
    }
    if(m_MicroversionIdIsSet)
    {
        val[utility::conversions::to_string_t("microversionId")] = ModelBase::toJson(m_MicroversionId);
    }

    return val;
}

bool BTMassPropertiesBulkInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bodies")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bodies"));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, std::shared_ptr<BTMassPropertiesInfo_null>> refVal_bodies;
            ok &= ModelBase::fromJson(fieldValue, refVal_bodies);
            setBodies(refVal_bodies);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("microversionId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("microversionId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_microversionId;
            ok &= ModelBase::fromJson(fieldValue, refVal_microversionId);
            setMicroversionId(refVal_microversionId);
        }
    }
    return ok;
}

void BTMassPropertiesBulkInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_BodiesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bodies"), m_Bodies));
    }
    if(m_MicroversionIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("microversionId"), m_MicroversionId));
    }
}

bool BTMassPropertiesBulkInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("bodies")))
    {
        std::map<utility::string_t, std::shared_ptr<BTMassPropertiesInfo_null>> refVal_bodies;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("bodies")), refVal_bodies );
        setBodies(refVal_bodies);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("microversionId")))
    {
        utility::string_t refVal_microversionId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("microversionId")), refVal_microversionId );
        setMicroversionId(refVal_microversionId);
    }
    return ok;
}

std::map<utility::string_t, std::shared_ptr<BTMassPropertiesInfo_null>>& BTMassPropertiesBulkInfo::getBodies()
{
    return m_Bodies;
}

void BTMassPropertiesBulkInfo::setBodies(const std::map<utility::string_t, std::shared_ptr<BTMassPropertiesInfo_null>>& value)
{
    m_Bodies = value;
    m_BodiesIsSet = true;
}

bool BTMassPropertiesBulkInfo::bodiesIsSet() const
{
    return m_BodiesIsSet;
}

void BTMassPropertiesBulkInfo::unsetBodies()
{
    m_BodiesIsSet = false;
}
utility::string_t BTMassPropertiesBulkInfo::getMicroversionId() const
{
    return m_MicroversionId;
}

void BTMassPropertiesBulkInfo::setMicroversionId(const utility::string_t& value)
{
    m_MicroversionId = value;
    m_MicroversionIdIsSet = true;
}

bool BTMassPropertiesBulkInfo::microversionIdIsSet() const
{
    return m_MicroversionIdIsSet;
}

void BTMassPropertiesBulkInfo::unsetMicroversionId()
{
    m_MicroversionIdIsSet = false;
}
}
}
}
}


