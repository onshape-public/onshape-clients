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



#include "BTParameterSpecReferenceImage_1722.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTParameterSpecReferenceImage_1722::BTParameterSpecReferenceImage_1722()
{
}

BTParameterSpecReferenceImage_1722::~BTParameterSpecReferenceImage_1722()
{
}

void BTParameterSpecReferenceImage_1722::validate()
{
    // TODO: implement validation
}

web::json::value BTParameterSpecReferenceImage_1722::toJson() const
{
    web::json::value val = this->BTParameterSpecReferenceBlob_1367::toJson();
    

    return val;
}

bool BTParameterSpecReferenceImage_1722::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTParameterSpecReferenceBlob_1367::fromJson(val);
    
    return ok;
}

void BTParameterSpecReferenceImage_1722::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_AdditionalLocalizedStringsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("additionalLocalizedStrings"), m_AdditionalLocalizedStrings));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
    if(m_ColumnNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("columnName"), m_ColumnName));
    }
    if(m_DefaultValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("defaultValue"), m_DefaultValue));
    }
    if(m_IconUriIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("iconUri"), m_IconUri));
    }
    if(m_LocalizableNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("localizableName"), m_LocalizableName));
    }
    if(m_LocalizedNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("localizedName"), m_LocalizedName));
    }
    if(m_ParameterIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parameterId"), m_ParameterId));
    }
    if(m_ParameterNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parameterName"), m_ParameterName));
    }
    if(m_StringsToLocalizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("stringsToLocalize"), m_StringsToLocalize));
    }
    if(m_UiHintIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("uiHint"), m_UiHint));
    }
    if(m_UiHintsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("uiHints"), m_UiHints));
    }
    if(m_VisibilityConditionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("visibilityCondition"), m_VisibilityCondition));
    }
}

bool BTParameterSpecReferenceImage_1722::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("additionalLocalizedStrings")))
    {
        int32_t refVal_additionalLocalizedStrings;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("additionalLocalizedStrings")), refVal_additionalLocalizedStrings );
        setAdditionalLocalizedStrings(refVal_additionalLocalizedStrings);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("columnName")))
    {
        utility::string_t refVal_columnName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("columnName")), refVal_columnName );
        setColumnName(refVal_columnName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("defaultValue")))
    {
        std::shared_ptr<BTMParameter_1> refVal_defaultValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("defaultValue")), refVal_defaultValue );
        setDefaultValue(refVal_defaultValue);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("iconUri")))
    {
        utility::string_t refVal_iconUri;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("iconUri")), refVal_iconUri );
        setIconUri(refVal_iconUri);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("localizableName")))
    {
        utility::string_t refVal_localizableName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("localizableName")), refVal_localizableName );
        setLocalizableName(refVal_localizableName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("localizedName")))
    {
        utility::string_t refVal_localizedName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("localizedName")), refVal_localizedName );
        setLocalizedName(refVal_localizedName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parameterId")))
    {
        utility::string_t refVal_parameterId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parameterId")), refVal_parameterId );
        setParameterId(refVal_parameterId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parameterName")))
    {
        utility::string_t refVal_parameterName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parameterName")), refVal_parameterName );
        setParameterName(refVal_parameterName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("stringsToLocalize")))
    {
        std::vector<utility::string_t> refVal_stringsToLocalize;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("stringsToLocalize")), refVal_stringsToLocalize );
        setStringsToLocalize(refVal_stringsToLocalize);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("uiHint")))
    {
        utility::string_t refVal_uiHint;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("uiHint")), refVal_uiHint );
        setUiHint(refVal_uiHint);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("uiHints")))
    {
        std::vector<utility::string_t> refVal_uiHints;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("uiHints")), refVal_uiHints );
        setUiHints(refVal_uiHints);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("visibilityCondition")))
    {
        std::shared_ptr<BTParameterVisibilityCondition_177> refVal_visibilityCondition;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("visibilityCondition")), refVal_visibilityCondition );
        setVisibilityCondition(refVal_visibilityCondition);
    }
    return ok;
}

}
}
}
}


