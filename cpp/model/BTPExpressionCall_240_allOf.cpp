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



#include "BTPExpressionCall_240_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTPExpressionCall_240_allOf::BTPExpressionCall_240_allOf()
{
    m_FunctionNameString = utility::conversions::to_string_t("");
    m_FunctionNameStringIsSet = false;
    m_FunctionNameIsSet = false;
    m_FunctionExpressionIsSet = false;
    m_SpaceInEmptyListIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTPExpressionCall_240_allOf::~BTPExpressionCall_240_allOf()
{
}

void BTPExpressionCall_240_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTPExpressionCall_240_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_FunctionNameStringIsSet)
    {
        val[utility::conversions::to_string_t("functionNameString")] = ModelBase::toJson(m_FunctionNameString);
    }
    if(m_FunctionNameIsSet)
    {
        val[utility::conversions::to_string_t("functionName")] = ModelBase::toJson(m_FunctionName);
    }
    if(m_FunctionExpressionIsSet)
    {
        val[utility::conversions::to_string_t("functionExpression")] = ModelBase::toJson(m_FunctionExpression);
    }
    if(m_SpaceInEmptyListIsSet)
    {
        val[utility::conversions::to_string_t("spaceInEmptyList")] = ModelBase::toJson(m_SpaceInEmptyList);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTPExpressionCall_240_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("functionNameString")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("functionNameString"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_functionNameString;
            ok &= ModelBase::fromJson(fieldValue, refVal_functionNameString);
            setFunctionNameString(refVal_functionNameString);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("functionName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("functionName"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPName_261> refVal_functionName;
            ok &= ModelBase::fromJson(fieldValue, refVal_functionName);
            setFunctionName(refVal_functionName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("functionExpression")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("functionExpression"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPExpression_9> refVal_functionExpression;
            ok &= ModelBase::fromJson(fieldValue, refVal_functionExpression);
            setFunctionExpression(refVal_functionExpression);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spaceInEmptyList")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spaceInEmptyList"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPSpace_10> refVal_spaceInEmptyList;
            ok &= ModelBase::fromJson(fieldValue, refVal_spaceInEmptyList);
            setSpaceInEmptyList(refVal_spaceInEmptyList);
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

void BTPExpressionCall_240_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_FunctionNameStringIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("functionNameString"), m_FunctionNameString));
    }
    if(m_FunctionNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("functionName"), m_FunctionName));
    }
    if(m_FunctionExpressionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("functionExpression"), m_FunctionExpression));
    }
    if(m_SpaceInEmptyListIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("spaceInEmptyList"), m_SpaceInEmptyList));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTPExpressionCall_240_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("functionNameString")))
    {
        utility::string_t refVal_functionNameString;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("functionNameString")), refVal_functionNameString );
        setFunctionNameString(refVal_functionNameString);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("functionName")))
    {
        std::shared_ptr<BTPName_261> refVal_functionName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("functionName")), refVal_functionName );
        setFunctionName(refVal_functionName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("functionExpression")))
    {
        std::shared_ptr<BTPExpression_9> refVal_functionExpression;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("functionExpression")), refVal_functionExpression );
        setFunctionExpression(refVal_functionExpression);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("spaceInEmptyList")))
    {
        std::shared_ptr<BTPSpace_10> refVal_spaceInEmptyList;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("spaceInEmptyList")), refVal_spaceInEmptyList );
        setSpaceInEmptyList(refVal_spaceInEmptyList);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

utility::string_t BTPExpressionCall_240_allOf::getFunctionNameString() const
{
    return m_FunctionNameString;
}

void BTPExpressionCall_240_allOf::setFunctionNameString(const utility::string_t& value)
{
    m_FunctionNameString = value;
    m_FunctionNameStringIsSet = true;
}

bool BTPExpressionCall_240_allOf::functionNameStringIsSet() const
{
    return m_FunctionNameStringIsSet;
}

void BTPExpressionCall_240_allOf::unsetFunctionNameString()
{
    m_FunctionNameStringIsSet = false;
}
std::shared_ptr<BTPName_261> BTPExpressionCall_240_allOf::getFunctionName() const
{
    return m_FunctionName;
}

void BTPExpressionCall_240_allOf::setFunctionName(const std::shared_ptr<BTPName_261>& value)
{
    m_FunctionName = value;
    m_FunctionNameIsSet = true;
}

bool BTPExpressionCall_240_allOf::functionNameIsSet() const
{
    return m_FunctionNameIsSet;
}

void BTPExpressionCall_240_allOf::unsetFunctionName()
{
    m_FunctionNameIsSet = false;
}
std::shared_ptr<BTPExpression_9> BTPExpressionCall_240_allOf::getFunctionExpression() const
{
    return m_FunctionExpression;
}

void BTPExpressionCall_240_allOf::setFunctionExpression(const std::shared_ptr<BTPExpression_9>& value)
{
    m_FunctionExpression = value;
    m_FunctionExpressionIsSet = true;
}

bool BTPExpressionCall_240_allOf::functionExpressionIsSet() const
{
    return m_FunctionExpressionIsSet;
}

void BTPExpressionCall_240_allOf::unsetFunctionExpression()
{
    m_FunctionExpressionIsSet = false;
}
std::shared_ptr<BTPSpace_10> BTPExpressionCall_240_allOf::getSpaceInEmptyList() const
{
    return m_SpaceInEmptyList;
}

void BTPExpressionCall_240_allOf::setSpaceInEmptyList(const std::shared_ptr<BTPSpace_10>& value)
{
    m_SpaceInEmptyList = value;
    m_SpaceInEmptyListIsSet = true;
}

bool BTPExpressionCall_240_allOf::spaceInEmptyListIsSet() const
{
    return m_SpaceInEmptyListIsSet;
}

void BTPExpressionCall_240_allOf::unsetSpaceInEmptyList()
{
    m_SpaceInEmptyListIsSet = false;
}
utility::string_t BTPExpressionCall_240_allOf::getBtType() const
{
    return m_BtType;
}

void BTPExpressionCall_240_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTPExpressionCall_240_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTPExpressionCall_240_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}


