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



#include "BTMInferenceQueryWithOccurrence_1083.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTMInferenceQueryWithOccurrence_1083::BTMInferenceQueryWithOccurrence_1083()
{
    m_SecondEntityQuery = utility::conversions::to_string_t("");
    m_SecondEntityQueryIsSet = false;
    m_InferenceType = utility::conversions::to_string_t("");
    m_InferenceTypeIsSet = false;
    m_SecondDeterministicId = utility::conversions::to_string_t("");
    m_SecondDeterministicIdIsSet = false;
}

BTMInferenceQueryWithOccurrence_1083::~BTMInferenceQueryWithOccurrence_1083()
{
}

void BTMInferenceQueryWithOccurrence_1083::validate()
{
    // TODO: implement validation
}

web::json::value BTMInferenceQueryWithOccurrence_1083::toJson() const
{
    web::json::value val = this->BTMIndividualQueryWithOccurrence_811::toJson();
    
    if(m_SecondEntityQueryIsSet)
    {
        val[utility::conversions::to_string_t("secondEntityQuery")] = ModelBase::toJson(m_SecondEntityQuery);
    }
    if(m_InferenceTypeIsSet)
    {
        val[utility::conversions::to_string_t("inferenceType")] = ModelBase::toJson(m_InferenceType);
    }
    if(m_SecondDeterministicIdIsSet)
    {
        val[utility::conversions::to_string_t("secondDeterministicId")] = ModelBase::toJson(m_SecondDeterministicId);
    }

    return val;
}

bool BTMInferenceQueryWithOccurrence_1083::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTMIndividualQueryWithOccurrence_811::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t("secondEntityQuery")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secondEntityQuery"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_secondEntityQuery;
            ok &= ModelBase::fromJson(fieldValue, refVal_secondEntityQuery);
            setSecondEntityQuery(refVal_secondEntityQuery);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inferenceType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inferenceType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_inferenceType;
            ok &= ModelBase::fromJson(fieldValue, refVal_inferenceType);
            setInferenceType(refVal_inferenceType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secondDeterministicId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secondDeterministicId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_secondDeterministicId;
            ok &= ModelBase::fromJson(fieldValue, refVal_secondDeterministicId);
            setSecondDeterministicId(refVal_secondDeterministicId);
        }
    }
    return ok;
}

void BTMInferenceQueryWithOccurrence_1083::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_DeterministicIdListIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("deterministicIdList"), m_DeterministicIdList));
    }
    if(m_DeterministicIdsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("deterministicIds"), m_DeterministicIds));
    }
    if(m_ImportMicroversionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("importMicroversion"), m_ImportMicroversion));
    }
    if(m_NodeIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nodeId"), m_NodeId));
    }
    if(m_PathIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("path"), m_Path));
    }
    if(m_QueryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("query"), m_Query));
    }
    if(m_QueryStringIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("queryString"), m_QueryString));
    }
    if(m_EntityQueryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("entityQuery"), m_EntityQuery));
    }
    if(m_SecondEntityQueryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("secondEntityQuery"), m_SecondEntityQuery));
    }
    if(m_InferenceTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inferenceType"), m_InferenceType));
    }
    if(m_SecondDeterministicIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("secondDeterministicId"), m_SecondDeterministicId));
    }
}

bool BTMInferenceQueryWithOccurrence_1083::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("deterministicIdList")))
    {
        std::shared_ptr<BTMIndividualQueryBase_139> refVal_deterministicIdList;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("deterministicIdList")), refVal_deterministicIdList );
        setDeterministicIdList(refVal_deterministicIdList);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("deterministicIds")))
    {
        std::vector<utility::string_t> refVal_deterministicIds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("deterministicIds")), refVal_deterministicIds );
        setDeterministicIds(refVal_deterministicIds);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("importMicroversion")))
    {
        utility::string_t refVal_importMicroversion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("importMicroversion")), refVal_importMicroversion );
        setImportMicroversion(refVal_importMicroversion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("nodeId")))
    {
        utility::string_t refVal_nodeId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("nodeId")), refVal_nodeId );
        setNodeId(refVal_nodeId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("path")))
    {
        std::vector<utility::string_t> refVal_path;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("path")), refVal_path );
        setPath(refVal_path);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("query")))
    {
        std::shared_ptr<BTMIndividualQueryBase_139> refVal_query;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("query")), refVal_query );
        setQuery(refVal_query);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("queryString")))
    {
        utility::string_t refVal_queryString;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("queryString")), refVal_queryString );
        setQueryString(refVal_queryString);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("entityQuery")))
    {
        utility::string_t refVal_entityQuery;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("entityQuery")), refVal_entityQuery );
        setEntityQuery(refVal_entityQuery);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("secondEntityQuery")))
    {
        utility::string_t refVal_secondEntityQuery;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("secondEntityQuery")), refVal_secondEntityQuery );
        setSecondEntityQuery(refVal_secondEntityQuery);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("inferenceType")))
    {
        utility::string_t refVal_inferenceType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("inferenceType")), refVal_inferenceType );
        setInferenceType(refVal_inferenceType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("secondDeterministicId")))
    {
        utility::string_t refVal_secondDeterministicId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("secondDeterministicId")), refVal_secondDeterministicId );
        setSecondDeterministicId(refVal_secondDeterministicId);
    }
    return ok;
}

utility::string_t BTMInferenceQueryWithOccurrence_1083::getSecondEntityQuery() const
{
    return m_SecondEntityQuery;
}

void BTMInferenceQueryWithOccurrence_1083::setSecondEntityQuery(const utility::string_t& value)
{
    m_SecondEntityQuery = value;
    m_SecondEntityQueryIsSet = true;
}

bool BTMInferenceQueryWithOccurrence_1083::secondEntityQueryIsSet() const
{
    return m_SecondEntityQueryIsSet;
}

void BTMInferenceQueryWithOccurrence_1083::unsetSecondEntityQuery()
{
    m_SecondEntityQueryIsSet = false;
}
utility::string_t BTMInferenceQueryWithOccurrence_1083::getInferenceType() const
{
    return m_InferenceType;
}

void BTMInferenceQueryWithOccurrence_1083::setInferenceType(const utility::string_t& value)
{
    m_InferenceType = value;
    m_InferenceTypeIsSet = true;
}

bool BTMInferenceQueryWithOccurrence_1083::inferenceTypeIsSet() const
{
    return m_InferenceTypeIsSet;
}

void BTMInferenceQueryWithOccurrence_1083::unsetInferenceType()
{
    m_InferenceTypeIsSet = false;
}
utility::string_t BTMInferenceQueryWithOccurrence_1083::getSecondDeterministicId() const
{
    return m_SecondDeterministicId;
}

void BTMInferenceQueryWithOccurrence_1083::setSecondDeterministicId(const utility::string_t& value)
{
    m_SecondDeterministicId = value;
    m_SecondDeterministicIdIsSet = true;
}

bool BTMInferenceQueryWithOccurrence_1083::secondDeterministicIdIsSet() const
{
    return m_SecondDeterministicIdIsSet;
}

void BTMInferenceQueryWithOccurrence_1083::unsetSecondDeterministicId()
{
    m_SecondDeterministicIdIsSet = false;
}
}
}
}
}


