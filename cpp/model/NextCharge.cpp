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



#include "NextCharge.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




NextCharge::NextCharge()
{
    m_Amount = 0L;
    m_AmountIsSet = false;
    m_CurrentPeriodEnd = utility::datetime();
    m_CurrentPeriodEndIsSet = false;
    m_Interval = utility::conversions::to_string_t("");
    m_IntervalIsSet = false;
    m_Total = 0L;
    m_TotalIsSet = false;
}

NextCharge::~NextCharge()
{
}

void NextCharge::validate()
{
    // TODO: implement validation
}

web::json::value NextCharge::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AmountIsSet)
    {
        val[utility::conversions::to_string_t("amount")] = ModelBase::toJson(m_Amount);
    }
    if(m_CurrentPeriodEndIsSet)
    {
        val[utility::conversions::to_string_t("currentPeriodEnd")] = ModelBase::toJson(m_CurrentPeriodEnd);
    }
    if(m_IntervalIsSet)
    {
        val[utility::conversions::to_string_t("interval")] = ModelBase::toJson(m_Interval);
    }
    if(m_TotalIsSet)
    {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(m_Total);
    }

    return val;
}

bool NextCharge::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("amount")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("amount"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_amount;
            ok &= ModelBase::fromJson(fieldValue, refVal_amount);
            setAmount(refVal_amount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("currentPeriodEnd")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("currentPeriodEnd"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_currentPeriodEnd;
            ok &= ModelBase::fromJson(fieldValue, refVal_currentPeriodEnd);
            setCurrentPeriodEnd(refVal_currentPeriodEnd);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interval")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interval"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_interval;
            ok &= ModelBase::fromJson(fieldValue, refVal_interval);
            setInterval(refVal_interval);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_total;
            ok &= ModelBase::fromJson(fieldValue, refVal_total);
            setTotal(refVal_total);
        }
    }
    return ok;
}

void NextCharge::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_AmountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("amount"), m_Amount));
    }
    if(m_CurrentPeriodEndIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("currentPeriodEnd"), m_CurrentPeriodEnd));
    }
    if(m_IntervalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("interval"), m_Interval));
    }
    if(m_TotalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("total"), m_Total));
    }
}

bool NextCharge::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("amount")))
    {
        int64_t refVal_amount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("amount")), refVal_amount );
        setAmount(refVal_amount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("currentPeriodEnd")))
    {
        utility::datetime refVal_currentPeriodEnd;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("currentPeriodEnd")), refVal_currentPeriodEnd );
        setCurrentPeriodEnd(refVal_currentPeriodEnd);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("interval")))
    {
        utility::string_t refVal_interval;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("interval")), refVal_interval );
        setInterval(refVal_interval);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("total")))
    {
        int64_t refVal_total;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("total")), refVal_total );
        setTotal(refVal_total);
    }
    return ok;
}

int64_t NextCharge::getAmount() const
{
    return m_Amount;
}

void NextCharge::setAmount(int64_t value)
{
    m_Amount = value;
    m_AmountIsSet = true;
}

bool NextCharge::amountIsSet() const
{
    return m_AmountIsSet;
}

void NextCharge::unsetAmount()
{
    m_AmountIsSet = false;
}
utility::datetime NextCharge::getCurrentPeriodEnd() const
{
    return m_CurrentPeriodEnd;
}

void NextCharge::setCurrentPeriodEnd(const utility::datetime& value)
{
    m_CurrentPeriodEnd = value;
    m_CurrentPeriodEndIsSet = true;
}

bool NextCharge::currentPeriodEndIsSet() const
{
    return m_CurrentPeriodEndIsSet;
}

void NextCharge::unsetCurrentPeriodEnd()
{
    m_CurrentPeriodEndIsSet = false;
}
utility::string_t NextCharge::getInterval() const
{
    return m_Interval;
}

void NextCharge::setInterval(const utility::string_t& value)
{
    m_Interval = value;
    m_IntervalIsSet = true;
}

bool NextCharge::intervalIsSet() const
{
    return m_IntervalIsSet;
}

void NextCharge::unsetInterval()
{
    m_IntervalIsSet = false;
}
int64_t NextCharge::getTotal() const
{
    return m_Total;
}

void NextCharge::setTotal(int64_t value)
{
    m_Total = value;
    m_TotalIsSet = true;
}

bool NextCharge::totalIsSet() const
{
    return m_TotalIsSet;
}

void NextCharge::unsetTotal()
{
    m_TotalIsSet = false;
}
}
}
}
}


