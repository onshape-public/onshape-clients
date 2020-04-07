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



#include "BTMFeatureQueryWithOccurrence_157_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTMFeatureQueryWithOccurrence_157_allOf::BTMFeatureQueryWithOccurrence_157_allOf()
{
    m_FeatureIdWithOccurrence = utility::conversions::to_string_t("");
    m_FeatureIdWithOccurrenceIsSet = false;
    m_PartStudioMateConnectorQuery = false;
    m_PartStudioMateConnectorQueryIsSet = false;
    m_FeatureId = utility::conversions::to_string_t("");
    m_FeatureIdIsSet = false;
    m_QueryData = utility::conversions::to_string_t("");
    m_QueryDataIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTMFeatureQueryWithOccurrence_157_allOf::~BTMFeatureQueryWithOccurrence_157_allOf()
{
}

void BTMFeatureQueryWithOccurrence_157_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTMFeatureQueryWithOccurrence_157_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_FeatureIdWithOccurrenceIsSet)
    {
        val[utility::conversions::to_string_t("featureIdWithOccurrence")] = ModelBase::toJson(m_FeatureIdWithOccurrence);
    }
    if(m_PartStudioMateConnectorQueryIsSet)
    {
        val[utility::conversions::to_string_t("partStudioMateConnectorQuery")] = ModelBase::toJson(m_PartStudioMateConnectorQuery);
    }
    if(m_FeatureIdIsSet)
    {
        val[utility::conversions::to_string_t("featureId")] = ModelBase::toJson(m_FeatureId);
    }
    if(m_QueryDataIsSet)
    {
        val[utility::conversions::to_string_t("queryData")] = ModelBase::toJson(m_QueryData);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTMFeatureQueryWithOccurrence_157_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("featureIdWithOccurrence")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("featureIdWithOccurrence"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_featureIdWithOccurrence;
            ok &= ModelBase::fromJson(fieldValue, refVal_featureIdWithOccurrence);
            setFeatureIdWithOccurrence(refVal_featureIdWithOccurrence);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("partStudioMateConnectorQuery")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("partStudioMateConnectorQuery"));
        if(!fieldValue.is_null())
        {
            bool refVal_partStudioMateConnectorQuery;
            ok &= ModelBase::fromJson(fieldValue, refVal_partStudioMateConnectorQuery);
            setPartStudioMateConnectorQuery(refVal_partStudioMateConnectorQuery);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("featureId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("featureId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_featureId;
            ok &= ModelBase::fromJson(fieldValue, refVal_featureId);
            setFeatureId(refVal_featureId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("queryData")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("queryData"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_queryData;
            ok &= ModelBase::fromJson(fieldValue, refVal_queryData);
            setQueryData(refVal_queryData);
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

void BTMFeatureQueryWithOccurrence_157_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_FeatureIdWithOccurrenceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("featureIdWithOccurrence"), m_FeatureIdWithOccurrence));
    }
    if(m_PartStudioMateConnectorQueryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("partStudioMateConnectorQuery"), m_PartStudioMateConnectorQuery));
    }
    if(m_FeatureIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("featureId"), m_FeatureId));
    }
    if(m_QueryDataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("queryData"), m_QueryData));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTMFeatureQueryWithOccurrence_157_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("featureIdWithOccurrence")))
    {
        utility::string_t refVal_featureIdWithOccurrence;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("featureIdWithOccurrence")), refVal_featureIdWithOccurrence );
        setFeatureIdWithOccurrence(refVal_featureIdWithOccurrence);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("partStudioMateConnectorQuery")))
    {
        bool refVal_partStudioMateConnectorQuery;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("partStudioMateConnectorQuery")), refVal_partStudioMateConnectorQuery );
        setPartStudioMateConnectorQuery(refVal_partStudioMateConnectorQuery);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("featureId")))
    {
        utility::string_t refVal_featureId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("featureId")), refVal_featureId );
        setFeatureId(refVal_featureId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("queryData")))
    {
        utility::string_t refVal_queryData;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("queryData")), refVal_queryData );
        setQueryData(refVal_queryData);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

utility::string_t BTMFeatureQueryWithOccurrence_157_allOf::getFeatureIdWithOccurrence() const
{
    return m_FeatureIdWithOccurrence;
}

void BTMFeatureQueryWithOccurrence_157_allOf::setFeatureIdWithOccurrence(const utility::string_t& value)
{
    m_FeatureIdWithOccurrence = value;
    m_FeatureIdWithOccurrenceIsSet = true;
}

bool BTMFeatureQueryWithOccurrence_157_allOf::featureIdWithOccurrenceIsSet() const
{
    return m_FeatureIdWithOccurrenceIsSet;
}

void BTMFeatureQueryWithOccurrence_157_allOf::unsetFeatureIdWithOccurrence()
{
    m_FeatureIdWithOccurrenceIsSet = false;
}
bool BTMFeatureQueryWithOccurrence_157_allOf::isPartStudioMateConnectorQuery() const
{
    return m_PartStudioMateConnectorQuery;
}

void BTMFeatureQueryWithOccurrence_157_allOf::setPartStudioMateConnectorQuery(bool value)
{
    m_PartStudioMateConnectorQuery = value;
    m_PartStudioMateConnectorQueryIsSet = true;
}

bool BTMFeatureQueryWithOccurrence_157_allOf::partStudioMateConnectorQueryIsSet() const
{
    return m_PartStudioMateConnectorQueryIsSet;
}

void BTMFeatureQueryWithOccurrence_157_allOf::unsetPartStudioMateConnectorQuery()
{
    m_PartStudioMateConnectorQueryIsSet = false;
}
utility::string_t BTMFeatureQueryWithOccurrence_157_allOf::getFeatureId() const
{
    return m_FeatureId;
}

void BTMFeatureQueryWithOccurrence_157_allOf::setFeatureId(const utility::string_t& value)
{
    m_FeatureId = value;
    m_FeatureIdIsSet = true;
}

bool BTMFeatureQueryWithOccurrence_157_allOf::featureIdIsSet() const
{
    return m_FeatureIdIsSet;
}

void BTMFeatureQueryWithOccurrence_157_allOf::unsetFeatureId()
{
    m_FeatureIdIsSet = false;
}
utility::string_t BTMFeatureQueryWithOccurrence_157_allOf::getQueryData() const
{
    return m_QueryData;
}

void BTMFeatureQueryWithOccurrence_157_allOf::setQueryData(const utility::string_t& value)
{
    m_QueryData = value;
    m_QueryDataIsSet = true;
}

bool BTMFeatureQueryWithOccurrence_157_allOf::queryDataIsSet() const
{
    return m_QueryDataIsSet;
}

void BTMFeatureQueryWithOccurrence_157_allOf::unsetQueryData()
{
    m_QueryDataIsSet = false;
}
utility::string_t BTMFeatureQueryWithOccurrence_157_allOf::getBtType() const
{
    return m_BtType;
}

void BTMFeatureQueryWithOccurrence_157_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTMFeatureQueryWithOccurrence_157_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTMFeatureQueryWithOccurrence_157_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}


