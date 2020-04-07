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



#include "BTMetadataPropertyValidatorInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTMetadataPropertyValidatorInfo::BTMetadataPropertyValidatorInfo()
{
    m_Max = 0.0;
    m_MaxIsSet = false;
    m_MaxCount = 0;
    m_MaxCountIsSet = false;
    m_MaxDate = utility::datetime();
    m_MaxDateIsSet = false;
    m_MaxLength = 0;
    m_MaxLengthIsSet = false;
    m_Min = 0.0;
    m_MinIsSet = false;
    m_MinCount = 0;
    m_MinCountIsSet = false;
    m_MinDate = utility::datetime();
    m_MinDateIsSet = false;
    m_MinLength = 0;
    m_MinLengthIsSet = false;
    m_Pattern = utility::conversions::to_string_t("");
    m_PatternIsSet = false;
}

BTMetadataPropertyValidatorInfo::~BTMetadataPropertyValidatorInfo()
{
}

void BTMetadataPropertyValidatorInfo::validate()
{
    // TODO: implement validation
}

web::json::value BTMetadataPropertyValidatorInfo::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_MaxIsSet)
    {
        val[utility::conversions::to_string_t("max")] = ModelBase::toJson(m_Max);
    }
    if(m_MaxCountIsSet)
    {
        val[utility::conversions::to_string_t("maxCount")] = ModelBase::toJson(m_MaxCount);
    }
    if(m_MaxDateIsSet)
    {
        val[utility::conversions::to_string_t("maxDate")] = ModelBase::toJson(m_MaxDate);
    }
    if(m_MaxLengthIsSet)
    {
        val[utility::conversions::to_string_t("maxLength")] = ModelBase::toJson(m_MaxLength);
    }
    if(m_MinIsSet)
    {
        val[utility::conversions::to_string_t("min")] = ModelBase::toJson(m_Min);
    }
    if(m_MinCountIsSet)
    {
        val[utility::conversions::to_string_t("minCount")] = ModelBase::toJson(m_MinCount);
    }
    if(m_MinDateIsSet)
    {
        val[utility::conversions::to_string_t("minDate")] = ModelBase::toJson(m_MinDate);
    }
    if(m_MinLengthIsSet)
    {
        val[utility::conversions::to_string_t("minLength")] = ModelBase::toJson(m_MinLength);
    }
    if(m_PatternIsSet)
    {
        val[utility::conversions::to_string_t("pattern")] = ModelBase::toJson(m_Pattern);
    }

    return val;
}

bool BTMetadataPropertyValidatorInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("max")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max"));
        if(!fieldValue.is_null())
        {
            double refVal_max;
            ok &= ModelBase::fromJson(fieldValue, refVal_max);
            setMax(refVal_max);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxCount")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_maxCount;
            ok &= ModelBase::fromJson(fieldValue, refVal_maxCount);
            setMaxCount(refVal_maxCount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxDate")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxDate"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_maxDate;
            ok &= ModelBase::fromJson(fieldValue, refVal_maxDate);
            setMaxDate(refVal_maxDate);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxLength")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxLength"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_maxLength;
            ok &= ModelBase::fromJson(fieldValue, refVal_maxLength);
            setMaxLength(refVal_maxLength);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min"));
        if(!fieldValue.is_null())
        {
            double refVal_min;
            ok &= ModelBase::fromJson(fieldValue, refVal_min);
            setMin(refVal_min);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("minCount")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("minCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_minCount;
            ok &= ModelBase::fromJson(fieldValue, refVal_minCount);
            setMinCount(refVal_minCount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("minDate")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("minDate"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_minDate;
            ok &= ModelBase::fromJson(fieldValue, refVal_minDate);
            setMinDate(refVal_minDate);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("minLength")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("minLength"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_minLength;
            ok &= ModelBase::fromJson(fieldValue, refVal_minLength);
            setMinLength(refVal_minLength);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pattern")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pattern"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_pattern;
            ok &= ModelBase::fromJson(fieldValue, refVal_pattern);
            setPattern(refVal_pattern);
        }
    }
    return ok;
}

void BTMetadataPropertyValidatorInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_MaxIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("max"), m_Max));
    }
    if(m_MaxCountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("maxCount"), m_MaxCount));
    }
    if(m_MaxDateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("maxDate"), m_MaxDate));
    }
    if(m_MaxLengthIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("maxLength"), m_MaxLength));
    }
    if(m_MinIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("min"), m_Min));
    }
    if(m_MinCountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("minCount"), m_MinCount));
    }
    if(m_MinDateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("minDate"), m_MinDate));
    }
    if(m_MinLengthIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("minLength"), m_MinLength));
    }
    if(m_PatternIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pattern"), m_Pattern));
    }
}

bool BTMetadataPropertyValidatorInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("max")))
    {
        double refVal_max;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("max")), refVal_max );
        setMax(refVal_max);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("maxCount")))
    {
        int32_t refVal_maxCount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("maxCount")), refVal_maxCount );
        setMaxCount(refVal_maxCount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("maxDate")))
    {
        utility::datetime refVal_maxDate;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("maxDate")), refVal_maxDate );
        setMaxDate(refVal_maxDate);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("maxLength")))
    {
        int32_t refVal_maxLength;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("maxLength")), refVal_maxLength );
        setMaxLength(refVal_maxLength);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("min")))
    {
        double refVal_min;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("min")), refVal_min );
        setMin(refVal_min);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("minCount")))
    {
        int32_t refVal_minCount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("minCount")), refVal_minCount );
        setMinCount(refVal_minCount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("minDate")))
    {
        utility::datetime refVal_minDate;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("minDate")), refVal_minDate );
        setMinDate(refVal_minDate);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("minLength")))
    {
        int32_t refVal_minLength;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("minLength")), refVal_minLength );
        setMinLength(refVal_minLength);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("pattern")))
    {
        utility::string_t refVal_pattern;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("pattern")), refVal_pattern );
        setPattern(refVal_pattern);
    }
    return ok;
}

double BTMetadataPropertyValidatorInfo::getMax() const
{
    return m_Max;
}

void BTMetadataPropertyValidatorInfo::setMax(double value)
{
    m_Max = value;
    m_MaxIsSet = true;
}

bool BTMetadataPropertyValidatorInfo::maxIsSet() const
{
    return m_MaxIsSet;
}

void BTMetadataPropertyValidatorInfo::unsetMax()
{
    m_MaxIsSet = false;
}
int32_t BTMetadataPropertyValidatorInfo::getMaxCount() const
{
    return m_MaxCount;
}

void BTMetadataPropertyValidatorInfo::setMaxCount(int32_t value)
{
    m_MaxCount = value;
    m_MaxCountIsSet = true;
}

bool BTMetadataPropertyValidatorInfo::maxCountIsSet() const
{
    return m_MaxCountIsSet;
}

void BTMetadataPropertyValidatorInfo::unsetMaxCount()
{
    m_MaxCountIsSet = false;
}
utility::datetime BTMetadataPropertyValidatorInfo::getMaxDate() const
{
    return m_MaxDate;
}

void BTMetadataPropertyValidatorInfo::setMaxDate(const utility::datetime& value)
{
    m_MaxDate = value;
    m_MaxDateIsSet = true;
}

bool BTMetadataPropertyValidatorInfo::maxDateIsSet() const
{
    return m_MaxDateIsSet;
}

void BTMetadataPropertyValidatorInfo::unsetMaxDate()
{
    m_MaxDateIsSet = false;
}
int32_t BTMetadataPropertyValidatorInfo::getMaxLength() const
{
    return m_MaxLength;
}

void BTMetadataPropertyValidatorInfo::setMaxLength(int32_t value)
{
    m_MaxLength = value;
    m_MaxLengthIsSet = true;
}

bool BTMetadataPropertyValidatorInfo::maxLengthIsSet() const
{
    return m_MaxLengthIsSet;
}

void BTMetadataPropertyValidatorInfo::unsetMaxLength()
{
    m_MaxLengthIsSet = false;
}
double BTMetadataPropertyValidatorInfo::getMin() const
{
    return m_Min;
}

void BTMetadataPropertyValidatorInfo::setMin(double value)
{
    m_Min = value;
    m_MinIsSet = true;
}

bool BTMetadataPropertyValidatorInfo::minIsSet() const
{
    return m_MinIsSet;
}

void BTMetadataPropertyValidatorInfo::unsetMin()
{
    m_MinIsSet = false;
}
int32_t BTMetadataPropertyValidatorInfo::getMinCount() const
{
    return m_MinCount;
}

void BTMetadataPropertyValidatorInfo::setMinCount(int32_t value)
{
    m_MinCount = value;
    m_MinCountIsSet = true;
}

bool BTMetadataPropertyValidatorInfo::minCountIsSet() const
{
    return m_MinCountIsSet;
}

void BTMetadataPropertyValidatorInfo::unsetMinCount()
{
    m_MinCountIsSet = false;
}
utility::datetime BTMetadataPropertyValidatorInfo::getMinDate() const
{
    return m_MinDate;
}

void BTMetadataPropertyValidatorInfo::setMinDate(const utility::datetime& value)
{
    m_MinDate = value;
    m_MinDateIsSet = true;
}

bool BTMetadataPropertyValidatorInfo::minDateIsSet() const
{
    return m_MinDateIsSet;
}

void BTMetadataPropertyValidatorInfo::unsetMinDate()
{
    m_MinDateIsSet = false;
}
int32_t BTMetadataPropertyValidatorInfo::getMinLength() const
{
    return m_MinLength;
}

void BTMetadataPropertyValidatorInfo::setMinLength(int32_t value)
{
    m_MinLength = value;
    m_MinLengthIsSet = true;
}

bool BTMetadataPropertyValidatorInfo::minLengthIsSet() const
{
    return m_MinLengthIsSet;
}

void BTMetadataPropertyValidatorInfo::unsetMinLength()
{
    m_MinLengthIsSet = false;
}
utility::string_t BTMetadataPropertyValidatorInfo::getPattern() const
{
    return m_Pattern;
}

void BTMetadataPropertyValidatorInfo::setPattern(const utility::string_t& value)
{
    m_Pattern = value;
    m_PatternIsSet = true;
}

bool BTMetadataPropertyValidatorInfo::patternIsSet() const
{
    return m_PatternIsSet;
}

void BTMetadataPropertyValidatorInfo::unsetPattern()
{
    m_PatternIsSet = false;
}
}
}
}
}


