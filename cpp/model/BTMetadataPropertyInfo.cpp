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



#include "BTMetadataPropertyInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTMetadataPropertyInfo::BTMetadataPropertyInfo()
{
    m_DefaultValueIsSet = false;
    m_Dirty = false;
    m_DirtyIsSet = false;
    m_Editable = false;
    m_EditableIsSet = false;
    m_EditableInUi = false;
    m_EditableInUiIsSet = false;
    m_EnumValuesIsSet = false;
    m_InitialValueIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_PropertyId = utility::conversions::to_string_t("");
    m_PropertyIdIsSet = false;
    m_PropertySource = 0;
    m_PropertySourceIsSet = false;
    m_Required = false;
    m_RequiredIsSet = false;
    m_SchemaId = utility::conversions::to_string_t("");
    m_SchemaIdIsSet = false;
    m_UiHintsIsSet = false;
    m_ValidatorIsSet = false;
    m_ValueIsSet = false;
    m_ValueType = utility::conversions::to_string_t("");
    m_ValueTypeIsSet = false;
}

BTMetadataPropertyInfo::~BTMetadataPropertyInfo()
{
}

void BTMetadataPropertyInfo::validate()
{
    // TODO: implement validation
}

web::json::value BTMetadataPropertyInfo::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DefaultValueIsSet)
    {
        val[utility::conversions::to_string_t("defaultValue")] = ModelBase::toJson(m_DefaultValue);
    }
    if(m_DirtyIsSet)
    {
        val[utility::conversions::to_string_t("dirty")] = ModelBase::toJson(m_Dirty);
    }
    if(m_EditableIsSet)
    {
        val[utility::conversions::to_string_t("editable")] = ModelBase::toJson(m_Editable);
    }
    if(m_EditableInUiIsSet)
    {
        val[utility::conversions::to_string_t("editableInUi")] = ModelBase::toJson(m_EditableInUi);
    }
    if(m_EnumValuesIsSet)
    {
        val[utility::conversions::to_string_t("enumValues")] = ModelBase::toJson(m_EnumValues);
    }
    if(m_InitialValueIsSet)
    {
        val[utility::conversions::to_string_t("initialValue")] = ModelBase::toJson(m_InitialValue);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_PropertyIdIsSet)
    {
        val[utility::conversions::to_string_t("propertyId")] = ModelBase::toJson(m_PropertyId);
    }
    if(m_PropertySourceIsSet)
    {
        val[utility::conversions::to_string_t("propertySource")] = ModelBase::toJson(m_PropertySource);
    }
    if(m_RequiredIsSet)
    {
        val[utility::conversions::to_string_t("required")] = ModelBase::toJson(m_Required);
    }
    if(m_SchemaIdIsSet)
    {
        val[utility::conversions::to_string_t("schemaId")] = ModelBase::toJson(m_SchemaId);
    }
    if(m_UiHintsIsSet)
    {
        val[utility::conversions::to_string_t("uiHints")] = ModelBase::toJson(m_UiHints);
    }
    if(m_ValidatorIsSet)
    {
        val[utility::conversions::to_string_t("validator")] = ModelBase::toJson(m_Validator);
    }
    if(m_ValueIsSet)
    {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(m_Value);
    }
    if(m_ValueTypeIsSet)
    {
        val[utility::conversions::to_string_t("valueType")] = ModelBase::toJson(m_ValueType);
    }

    return val;
}

bool BTMetadataPropertyInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("defaultValue")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defaultValue"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_defaultValue;
            ok &= ModelBase::fromJson(fieldValue, refVal_defaultValue);
            setDefaultValue(refVal_defaultValue);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dirty")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dirty"));
        if(!fieldValue.is_null())
        {
            bool refVal_dirty;
            ok &= ModelBase::fromJson(fieldValue, refVal_dirty);
            setDirty(refVal_dirty);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("editable")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("editable"));
        if(!fieldValue.is_null())
        {
            bool refVal_editable;
            ok &= ModelBase::fromJson(fieldValue, refVal_editable);
            setEditable(refVal_editable);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("editableInUi")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("editableInUi"));
        if(!fieldValue.is_null())
        {
            bool refVal_editableInUi;
            ok &= ModelBase::fromJson(fieldValue, refVal_editableInUi);
            setEditableInUi(refVal_editableInUi);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enumValues")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enumValues"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<BTMetadataEnumValueInfo>> refVal_enumValues;
            ok &= ModelBase::fromJson(fieldValue, refVal_enumValues);
            setEnumValues(refVal_enumValues);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("initialValue")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("initialValue"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_initialValue;
            ok &= ModelBase::fromJson(fieldValue, refVal_initialValue);
            setInitialValue(refVal_initialValue);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_name);
            setName(refVal_name);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("propertyId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("propertyId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_propertyId;
            ok &= ModelBase::fromJson(fieldValue, refVal_propertyId);
            setPropertyId(refVal_propertyId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("propertySource")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("propertySource"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_propertySource;
            ok &= ModelBase::fromJson(fieldValue, refVal_propertySource);
            setPropertySource(refVal_propertySource);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("required")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("required"));
        if(!fieldValue.is_null())
        {
            bool refVal_required;
            ok &= ModelBase::fromJson(fieldValue, refVal_required);
            setRequired(refVal_required);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schemaId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schemaId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_schemaId;
            ok &= ModelBase::fromJson(fieldValue, refVal_schemaId);
            setSchemaId(refVal_schemaId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uiHints")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uiHints"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTMetadataPropertyUiHintsInfo> refVal_uiHints;
            ok &= ModelBase::fromJson(fieldValue, refVal_uiHints);
            setUiHints(refVal_uiHints);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("validator")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("validator"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTMetadataPropertyValidatorInfo> refVal_validator;
            ok &= ModelBase::fromJson(fieldValue, refVal_validator);
            setValidator(refVal_validator);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_value;
            ok &= ModelBase::fromJson(fieldValue, refVal_value);
            setValue(refVal_value);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("valueType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("valueType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_valueType;
            ok &= ModelBase::fromJson(fieldValue, refVal_valueType);
            setValueType(refVal_valueType);
        }
    }
    return ok;
}

void BTMetadataPropertyInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_DefaultValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("defaultValue"), m_DefaultValue));
    }
    if(m_DirtyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("dirty"), m_Dirty));
    }
    if(m_EditableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("editable"), m_Editable));
    }
    if(m_EditableInUiIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("editableInUi"), m_EditableInUi));
    }
    if(m_EnumValuesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("enumValues"), m_EnumValues));
    }
    if(m_InitialValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("initialValue"), m_InitialValue));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_PropertyIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("propertyId"), m_PropertyId));
    }
    if(m_PropertySourceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("propertySource"), m_PropertySource));
    }
    if(m_RequiredIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("required"), m_Required));
    }
    if(m_SchemaIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("schemaId"), m_SchemaId));
    }
    if(m_UiHintsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("uiHints"), m_UiHints));
    }
    if(m_ValidatorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("validator"), m_Validator));
    }
    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("value"), m_Value));
    }
    if(m_ValueTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("valueType"), m_ValueType));
    }
}

bool BTMetadataPropertyInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("defaultValue")))
    {
        std::shared_ptr<Object> refVal_defaultValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("defaultValue")), refVal_defaultValue );
        setDefaultValue(refVal_defaultValue);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("dirty")))
    {
        bool refVal_dirty;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("dirty")), refVal_dirty );
        setDirty(refVal_dirty);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("editable")))
    {
        bool refVal_editable;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("editable")), refVal_editable );
        setEditable(refVal_editable);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("editableInUi")))
    {
        bool refVal_editableInUi;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("editableInUi")), refVal_editableInUi );
        setEditableInUi(refVal_editableInUi);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("enumValues")))
    {
        std::vector<std::shared_ptr<BTMetadataEnumValueInfo>> refVal_enumValues;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("enumValues")), refVal_enumValues );
        setEnumValues(refVal_enumValues);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("initialValue")))
    {
        std::shared_ptr<Object> refVal_initialValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("initialValue")), refVal_initialValue );
        setInitialValue(refVal_initialValue);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("propertyId")))
    {
        utility::string_t refVal_propertyId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("propertyId")), refVal_propertyId );
        setPropertyId(refVal_propertyId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("propertySource")))
    {
        int32_t refVal_propertySource;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("propertySource")), refVal_propertySource );
        setPropertySource(refVal_propertySource);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("required")))
    {
        bool refVal_required;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("required")), refVal_required );
        setRequired(refVal_required);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("schemaId")))
    {
        utility::string_t refVal_schemaId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("schemaId")), refVal_schemaId );
        setSchemaId(refVal_schemaId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("uiHints")))
    {
        std::shared_ptr<BTMetadataPropertyUiHintsInfo> refVal_uiHints;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("uiHints")), refVal_uiHints );
        setUiHints(refVal_uiHints);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("validator")))
    {
        std::shared_ptr<BTMetadataPropertyValidatorInfo> refVal_validator;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("validator")), refVal_validator );
        setValidator(refVal_validator);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("value")))
    {
        std::shared_ptr<Object> refVal_value;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("value")), refVal_value );
        setValue(refVal_value);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("valueType")))
    {
        utility::string_t refVal_valueType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("valueType")), refVal_valueType );
        setValueType(refVal_valueType);
    }
    return ok;
}

std::shared_ptr<Object> BTMetadataPropertyInfo::getDefaultValue() const
{
    return m_DefaultValue;
}

void BTMetadataPropertyInfo::setDefaultValue(const std::shared_ptr<Object>& value)
{
    m_DefaultValue = value;
    m_DefaultValueIsSet = true;
}

bool BTMetadataPropertyInfo::defaultValueIsSet() const
{
    return m_DefaultValueIsSet;
}

void BTMetadataPropertyInfo::unsetDefaultValue()
{
    m_DefaultValueIsSet = false;
}
bool BTMetadataPropertyInfo::isDirty() const
{
    return m_Dirty;
}

void BTMetadataPropertyInfo::setDirty(bool value)
{
    m_Dirty = value;
    m_DirtyIsSet = true;
}

bool BTMetadataPropertyInfo::dirtyIsSet() const
{
    return m_DirtyIsSet;
}

void BTMetadataPropertyInfo::unsetDirty()
{
    m_DirtyIsSet = false;
}
bool BTMetadataPropertyInfo::isEditable() const
{
    return m_Editable;
}

void BTMetadataPropertyInfo::setEditable(bool value)
{
    m_Editable = value;
    m_EditableIsSet = true;
}

bool BTMetadataPropertyInfo::editableIsSet() const
{
    return m_EditableIsSet;
}

void BTMetadataPropertyInfo::unsetEditable()
{
    m_EditableIsSet = false;
}
bool BTMetadataPropertyInfo::isEditableInUi() const
{
    return m_EditableInUi;
}

void BTMetadataPropertyInfo::setEditableInUi(bool value)
{
    m_EditableInUi = value;
    m_EditableInUiIsSet = true;
}

bool BTMetadataPropertyInfo::editableInUiIsSet() const
{
    return m_EditableInUiIsSet;
}

void BTMetadataPropertyInfo::unsetEditableInUi()
{
    m_EditableInUiIsSet = false;
}
std::vector<std::shared_ptr<BTMetadataEnumValueInfo>>& BTMetadataPropertyInfo::getEnumValues()
{
    return m_EnumValues;
}

void BTMetadataPropertyInfo::setEnumValues(const std::vector<std::shared_ptr<BTMetadataEnumValueInfo>>& value)
{
    m_EnumValues = value;
    m_EnumValuesIsSet = true;
}

bool BTMetadataPropertyInfo::enumValuesIsSet() const
{
    return m_EnumValuesIsSet;
}

void BTMetadataPropertyInfo::unsetEnumValues()
{
    m_EnumValuesIsSet = false;
}
std::shared_ptr<Object> BTMetadataPropertyInfo::getInitialValue() const
{
    return m_InitialValue;
}

void BTMetadataPropertyInfo::setInitialValue(const std::shared_ptr<Object>& value)
{
    m_InitialValue = value;
    m_InitialValueIsSet = true;
}

bool BTMetadataPropertyInfo::initialValueIsSet() const
{
    return m_InitialValueIsSet;
}

void BTMetadataPropertyInfo::unsetInitialValue()
{
    m_InitialValueIsSet = false;
}
utility::string_t BTMetadataPropertyInfo::getName() const
{
    return m_Name;
}

void BTMetadataPropertyInfo::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool BTMetadataPropertyInfo::nameIsSet() const
{
    return m_NameIsSet;
}

void BTMetadataPropertyInfo::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t BTMetadataPropertyInfo::getPropertyId() const
{
    return m_PropertyId;
}

void BTMetadataPropertyInfo::setPropertyId(const utility::string_t& value)
{
    m_PropertyId = value;
    m_PropertyIdIsSet = true;
}

bool BTMetadataPropertyInfo::propertyIdIsSet() const
{
    return m_PropertyIdIsSet;
}

void BTMetadataPropertyInfo::unsetPropertyId()
{
    m_PropertyIdIsSet = false;
}
int32_t BTMetadataPropertyInfo::getPropertySource() const
{
    return m_PropertySource;
}

void BTMetadataPropertyInfo::setPropertySource(int32_t value)
{
    m_PropertySource = value;
    m_PropertySourceIsSet = true;
}

bool BTMetadataPropertyInfo::propertySourceIsSet() const
{
    return m_PropertySourceIsSet;
}

void BTMetadataPropertyInfo::unsetPropertySource()
{
    m_PropertySourceIsSet = false;
}
bool BTMetadataPropertyInfo::isRequired() const
{
    return m_Required;
}

void BTMetadataPropertyInfo::setRequired(bool value)
{
    m_Required = value;
    m_RequiredIsSet = true;
}

bool BTMetadataPropertyInfo::requiredIsSet() const
{
    return m_RequiredIsSet;
}

void BTMetadataPropertyInfo::unsetRequired()
{
    m_RequiredIsSet = false;
}
utility::string_t BTMetadataPropertyInfo::getSchemaId() const
{
    return m_SchemaId;
}

void BTMetadataPropertyInfo::setSchemaId(const utility::string_t& value)
{
    m_SchemaId = value;
    m_SchemaIdIsSet = true;
}

bool BTMetadataPropertyInfo::schemaIdIsSet() const
{
    return m_SchemaIdIsSet;
}

void BTMetadataPropertyInfo::unsetSchemaId()
{
    m_SchemaIdIsSet = false;
}
std::shared_ptr<BTMetadataPropertyUiHintsInfo> BTMetadataPropertyInfo::getUiHints() const
{
    return m_UiHints;
}

void BTMetadataPropertyInfo::setUiHints(const std::shared_ptr<BTMetadataPropertyUiHintsInfo>& value)
{
    m_UiHints = value;
    m_UiHintsIsSet = true;
}

bool BTMetadataPropertyInfo::uiHintsIsSet() const
{
    return m_UiHintsIsSet;
}

void BTMetadataPropertyInfo::unsetUiHints()
{
    m_UiHintsIsSet = false;
}
std::shared_ptr<BTMetadataPropertyValidatorInfo> BTMetadataPropertyInfo::getValidator() const
{
    return m_Validator;
}

void BTMetadataPropertyInfo::setValidator(const std::shared_ptr<BTMetadataPropertyValidatorInfo>& value)
{
    m_Validator = value;
    m_ValidatorIsSet = true;
}

bool BTMetadataPropertyInfo::validatorIsSet() const
{
    return m_ValidatorIsSet;
}

void BTMetadataPropertyInfo::unsetValidator()
{
    m_ValidatorIsSet = false;
}
std::shared_ptr<Object> BTMetadataPropertyInfo::getValue() const
{
    return m_Value;
}

void BTMetadataPropertyInfo::setValue(const std::shared_ptr<Object>& value)
{
    m_Value = value;
    m_ValueIsSet = true;
}

bool BTMetadataPropertyInfo::valueIsSet() const
{
    return m_ValueIsSet;
}

void BTMetadataPropertyInfo::unsetValue()
{
    m_ValueIsSet = false;
}
utility::string_t BTMetadataPropertyInfo::getValueType() const
{
    return m_ValueType;
}

void BTMetadataPropertyInfo::setValueType(const utility::string_t& value)
{
    m_ValueType = value;
    m_ValueTypeIsSet = true;
}

bool BTMetadataPropertyInfo::valueTypeIsSet() const
{
    return m_ValueTypeIsSet;
}

void BTMetadataPropertyInfo::unsetValueType()
{
    m_ValueTypeIsSet = false;
}
}
}
}
}


