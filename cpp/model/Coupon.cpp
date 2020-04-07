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



#include "Coupon.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Coupon::Coupon()
{
    m_AmountOff = 0L;
    m_AmountOffIsSet = false;
    m_Created = 0L;
    m_CreatedIsSet = false;
    m_Currency = utility::conversions::to_string_t("");
    m_CurrencyIsSet = false;
    m_Duration = utility::conversions::to_string_t("");
    m_DurationIsSet = false;
    m_DurationInMonths = 0;
    m_DurationInMonthsIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Livemode = false;
    m_LivemodeIsSet = false;
    m_MaxRedemptions = 0L;
    m_MaxRedemptionsIsSet = false;
    m_MetadataIsSet = false;
    m_object = utility::conversions::to_string_t("");
    m_objectIsSet = false;
    m_PercentOff = 0;
    m_PercentOffIsSet = false;
    m_RedeemBy = 0L;
    m_RedeemByIsSet = false;
    m_TimesRedeemed = 0;
    m_TimesRedeemedIsSet = false;
    m_Valid = false;
    m_ValidIsSet = false;
}

Coupon::~Coupon()
{
}

void Coupon::validate()
{
    // TODO: implement validation
}

web::json::value Coupon::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AmountOffIsSet)
    {
        val[utility::conversions::to_string_t("amountOff")] = ModelBase::toJson(m_AmountOff);
    }
    if(m_CreatedIsSet)
    {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(m_Created);
    }
    if(m_CurrencyIsSet)
    {
        val[utility::conversions::to_string_t("currency")] = ModelBase::toJson(m_Currency);
    }
    if(m_DurationIsSet)
    {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(m_Duration);
    }
    if(m_DurationInMonthsIsSet)
    {
        val[utility::conversions::to_string_t("durationInMonths")] = ModelBase::toJson(m_DurationInMonths);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_LivemodeIsSet)
    {
        val[utility::conversions::to_string_t("livemode")] = ModelBase::toJson(m_Livemode);
    }
    if(m_MaxRedemptionsIsSet)
    {
        val[utility::conversions::to_string_t("maxRedemptions")] = ModelBase::toJson(m_MaxRedemptions);
    }
    if(m_MetadataIsSet)
    {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(m_Metadata);
    }
    if(m_objectIsSet)
    {
        val[utility::conversions::to_string_t("object")] = ModelBase::toJson(m_object);
    }
    if(m_PercentOffIsSet)
    {
        val[utility::conversions::to_string_t("percentOff")] = ModelBase::toJson(m_PercentOff);
    }
    if(m_RedeemByIsSet)
    {
        val[utility::conversions::to_string_t("redeemBy")] = ModelBase::toJson(m_RedeemBy);
    }
    if(m_TimesRedeemedIsSet)
    {
        val[utility::conversions::to_string_t("timesRedeemed")] = ModelBase::toJson(m_TimesRedeemed);
    }
    if(m_ValidIsSet)
    {
        val[utility::conversions::to_string_t("valid")] = ModelBase::toJson(m_Valid);
    }

    return val;
}

bool Coupon::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("amountOff")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("amountOff"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_amountOff;
            ok &= ModelBase::fromJson(fieldValue, refVal_amountOff);
            setAmountOff(refVal_amountOff);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_created;
            ok &= ModelBase::fromJson(fieldValue, refVal_created);
            setCreated(refVal_created);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("currency")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("currency"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_currency;
            ok &= ModelBase::fromJson(fieldValue, refVal_currency);
            setCurrency(refVal_currency);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_duration;
            ok &= ModelBase::fromJson(fieldValue, refVal_duration);
            setDuration(refVal_duration);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("durationInMonths")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("durationInMonths"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_durationInMonths;
            ok &= ModelBase::fromJson(fieldValue, refVal_durationInMonths);
            setDurationInMonths(refVal_durationInMonths);
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
    if(val.has_field(utility::conversions::to_string_t("livemode")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("livemode"));
        if(!fieldValue.is_null())
        {
            bool refVal_livemode;
            ok &= ModelBase::fromJson(fieldValue, refVal_livemode);
            setLivemode(refVal_livemode);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxRedemptions")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxRedemptions"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_maxRedemptions;
            ok &= ModelBase::fromJson(fieldValue, refVal_maxRedemptions);
            setMaxRedemptions(refVal_maxRedemptions);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, utility::string_t> refVal_metadata;
            ok &= ModelBase::fromJson(fieldValue, refVal_metadata);
            setMetadata(refVal_metadata);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_object;
            ok &= ModelBase::fromJson(fieldValue, refVal_object);
            setObject(refVal_object);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("percentOff")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("percentOff"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_percentOff;
            ok &= ModelBase::fromJson(fieldValue, refVal_percentOff);
            setPercentOff(refVal_percentOff);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("redeemBy")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("redeemBy"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_redeemBy;
            ok &= ModelBase::fromJson(fieldValue, refVal_redeemBy);
            setRedeemBy(refVal_redeemBy);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timesRedeemed")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timesRedeemed"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_timesRedeemed;
            ok &= ModelBase::fromJson(fieldValue, refVal_timesRedeemed);
            setTimesRedeemed(refVal_timesRedeemed);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("valid")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("valid"));
        if(!fieldValue.is_null())
        {
            bool refVal_valid;
            ok &= ModelBase::fromJson(fieldValue, refVal_valid);
            setValid(refVal_valid);
        }
    }
    return ok;
}

void Coupon::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_AmountOffIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("amountOff"), m_AmountOff));
    }
    if(m_CreatedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("created"), m_Created));
    }
    if(m_CurrencyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("currency"), m_Currency));
    }
    if(m_DurationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("duration"), m_Duration));
    }
    if(m_DurationInMonthsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("durationInMonths"), m_DurationInMonths));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_LivemodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("livemode"), m_Livemode));
    }
    if(m_MaxRedemptionsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("maxRedemptions"), m_MaxRedemptions));
    }
    if(m_MetadataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("metadata"), m_Metadata));
    }
    if(m_objectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("object"), m_object));
    }
    if(m_PercentOffIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("percentOff"), m_PercentOff));
    }
    if(m_RedeemByIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("redeemBy"), m_RedeemBy));
    }
    if(m_TimesRedeemedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("timesRedeemed"), m_TimesRedeemed));
    }
    if(m_ValidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("valid"), m_Valid));
    }
}

bool Coupon::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("amountOff")))
    {
        int64_t refVal_amountOff;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("amountOff")), refVal_amountOff );
        setAmountOff(refVal_amountOff);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("created")))
    {
        int64_t refVal_created;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("created")), refVal_created );
        setCreated(refVal_created);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("currency")))
    {
        utility::string_t refVal_currency;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("currency")), refVal_currency );
        setCurrency(refVal_currency);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("duration")))
    {
        utility::string_t refVal_duration;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("duration")), refVal_duration );
        setDuration(refVal_duration);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("durationInMonths")))
    {
        int32_t refVal_durationInMonths;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("durationInMonths")), refVal_durationInMonths );
        setDurationInMonths(refVal_durationInMonths);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("livemode")))
    {
        bool refVal_livemode;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("livemode")), refVal_livemode );
        setLivemode(refVal_livemode);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("maxRedemptions")))
    {
        int64_t refVal_maxRedemptions;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("maxRedemptions")), refVal_maxRedemptions );
        setMaxRedemptions(refVal_maxRedemptions);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("metadata")))
    {
        std::map<utility::string_t, utility::string_t> refVal_metadata;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("metadata")), refVal_metadata );
        setMetadata(refVal_metadata);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("object")))
    {
        utility::string_t refVal_object;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("object")), refVal_object );
        setObject(refVal_object);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("percentOff")))
    {
        int32_t refVal_percentOff;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("percentOff")), refVal_percentOff );
        setPercentOff(refVal_percentOff);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("redeemBy")))
    {
        int64_t refVal_redeemBy;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("redeemBy")), refVal_redeemBy );
        setRedeemBy(refVal_redeemBy);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("timesRedeemed")))
    {
        int32_t refVal_timesRedeemed;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("timesRedeemed")), refVal_timesRedeemed );
        setTimesRedeemed(refVal_timesRedeemed);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("valid")))
    {
        bool refVal_valid;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("valid")), refVal_valid );
        setValid(refVal_valid);
    }
    return ok;
}

int64_t Coupon::getAmountOff() const
{
    return m_AmountOff;
}

void Coupon::setAmountOff(int64_t value)
{
    m_AmountOff = value;
    m_AmountOffIsSet = true;
}

bool Coupon::amountOffIsSet() const
{
    return m_AmountOffIsSet;
}

void Coupon::unsetAmountOff()
{
    m_AmountOffIsSet = false;
}
int64_t Coupon::getCreated() const
{
    return m_Created;
}

void Coupon::setCreated(int64_t value)
{
    m_Created = value;
    m_CreatedIsSet = true;
}

bool Coupon::createdIsSet() const
{
    return m_CreatedIsSet;
}

void Coupon::unsetCreated()
{
    m_CreatedIsSet = false;
}
utility::string_t Coupon::getCurrency() const
{
    return m_Currency;
}

void Coupon::setCurrency(const utility::string_t& value)
{
    m_Currency = value;
    m_CurrencyIsSet = true;
}

bool Coupon::currencyIsSet() const
{
    return m_CurrencyIsSet;
}

void Coupon::unsetCurrency()
{
    m_CurrencyIsSet = false;
}
utility::string_t Coupon::getDuration() const
{
    return m_Duration;
}

void Coupon::setDuration(const utility::string_t& value)
{
    m_Duration = value;
    m_DurationIsSet = true;
}

bool Coupon::durationIsSet() const
{
    return m_DurationIsSet;
}

void Coupon::unsetDuration()
{
    m_DurationIsSet = false;
}
int32_t Coupon::getDurationInMonths() const
{
    return m_DurationInMonths;
}

void Coupon::setDurationInMonths(int32_t value)
{
    m_DurationInMonths = value;
    m_DurationInMonthsIsSet = true;
}

bool Coupon::durationInMonthsIsSet() const
{
    return m_DurationInMonthsIsSet;
}

void Coupon::unsetDurationInMonths()
{
    m_DurationInMonthsIsSet = false;
}
utility::string_t Coupon::getId() const
{
    return m_Id;
}

void Coupon::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Coupon::idIsSet() const
{
    return m_IdIsSet;
}

void Coupon::unsetId()
{
    m_IdIsSet = false;
}
bool Coupon::isLivemode() const
{
    return m_Livemode;
}

void Coupon::setLivemode(bool value)
{
    m_Livemode = value;
    m_LivemodeIsSet = true;
}

bool Coupon::livemodeIsSet() const
{
    return m_LivemodeIsSet;
}

void Coupon::unsetLivemode()
{
    m_LivemodeIsSet = false;
}
int64_t Coupon::getMaxRedemptions() const
{
    return m_MaxRedemptions;
}

void Coupon::setMaxRedemptions(int64_t value)
{
    m_MaxRedemptions = value;
    m_MaxRedemptionsIsSet = true;
}

bool Coupon::maxRedemptionsIsSet() const
{
    return m_MaxRedemptionsIsSet;
}

void Coupon::unsetMaxRedemptions()
{
    m_MaxRedemptionsIsSet = false;
}
std::map<utility::string_t, utility::string_t>& Coupon::getMetadata()
{
    return m_Metadata;
}

void Coupon::setMetadata(const std::map<utility::string_t, utility::string_t>& value)
{
    m_Metadata = value;
    m_MetadataIsSet = true;
}

bool Coupon::metadataIsSet() const
{
    return m_MetadataIsSet;
}

void Coupon::unsetMetadata()
{
    m_MetadataIsSet = false;
}
utility::string_t Coupon::getObject() const
{
    return m_object;
}

void Coupon::setObject(const utility::string_t& value)
{
    m_object = value;
    m_objectIsSet = true;
}

bool Coupon::objectIsSet() const
{
    return m_objectIsSet;
}

void Coupon::unsetobject()
{
    m_objectIsSet = false;
}
int32_t Coupon::getPercentOff() const
{
    return m_PercentOff;
}

void Coupon::setPercentOff(int32_t value)
{
    m_PercentOff = value;
    m_PercentOffIsSet = true;
}

bool Coupon::percentOffIsSet() const
{
    return m_PercentOffIsSet;
}

void Coupon::unsetPercentOff()
{
    m_PercentOffIsSet = false;
}
int64_t Coupon::getRedeemBy() const
{
    return m_RedeemBy;
}

void Coupon::setRedeemBy(int64_t value)
{
    m_RedeemBy = value;
    m_RedeemByIsSet = true;
}

bool Coupon::redeemByIsSet() const
{
    return m_RedeemByIsSet;
}

void Coupon::unsetRedeemBy()
{
    m_RedeemByIsSet = false;
}
int32_t Coupon::getTimesRedeemed() const
{
    return m_TimesRedeemed;
}

void Coupon::setTimesRedeemed(int32_t value)
{
    m_TimesRedeemed = value;
    m_TimesRedeemedIsSet = true;
}

bool Coupon::timesRedeemedIsSet() const
{
    return m_TimesRedeemedIsSet;
}

void Coupon::unsetTimesRedeemed()
{
    m_TimesRedeemedIsSet = false;
}
bool Coupon::isValid() const
{
    return m_Valid;
}

void Coupon::setValid(bool value)
{
    m_Valid = value;
    m_ValidIsSet = true;
}

bool Coupon::validIsSet() const
{
    return m_ValidIsSet;
}

void Coupon::unsetValid()
{
    m_ValidIsSet = false;
}
}
}
}
}


