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



#include "BTPArgumentDeclaration_232.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTPArgumentDeclaration_232::BTPArgumentDeclaration_232()
{
    m_StandardType = utility::conversions::to_string_t("");
    m_StandardTypeIsSet = false;
    m_r_typeName = utility::conversions::to_string_t("");
    m_r_typeNameIsSet = false;
    m_NameIsSet = false;
    m_TypeIsSet = false;
}

BTPArgumentDeclaration_232::~BTPArgumentDeclaration_232()
{
}

void BTPArgumentDeclaration_232::validate()
{
    // TODO: implement validation
}

web::json::value BTPArgumentDeclaration_232::toJson() const
{
    web::json::value val = this->BTPNode_7::toJson();
    
    if(m_StandardTypeIsSet)
    {
        val[utility::conversions::to_string_t("standardType")] = ModelBase::toJson(m_StandardType);
    }
    if(m_r_typeNameIsSet)
    {
        val[utility::conversions::to_string_t("typeName")] = ModelBase::toJson(m_r_typeName);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    }

    return val;
}

bool BTPArgumentDeclaration_232::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTPNode_7::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t("standardType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("standardType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_standardType;
            ok &= ModelBase::fromJson(fieldValue, refVal_standardType);
            setStandardType(refVal_standardType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("typeName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("typeName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_typeName;
            ok &= ModelBase::fromJson(fieldValue, refVal_typeName);
            setRTypeName(refVal_typeName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPIdentifier_8> refVal_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_name);
            setName(refVal_name);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPTypeName_290> refVal_type;
            ok &= ModelBase::fromJson(fieldValue, refVal_type);
            setType(refVal_type);
        }
    }
    return ok;
}

void BTPArgumentDeclaration_232::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_AtomicIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("atomic"), m_Atomic));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
    if(m_DocumentationTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("documentationType"), m_DocumentationType));
    }
    if(m_EndSourceLocationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("endSourceLocation"), m_EndSourceLocation));
    }
    if(m_NodeIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nodeId"), m_NodeId));
    }
    if(m_ShortDescriptorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("shortDescriptor"), m_ShortDescriptor));
    }
    if(m_SpaceAfterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("spaceAfter"), m_SpaceAfter));
    }
    if(m_SpaceBeforeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("spaceBefore"), m_SpaceBefore));
    }
    if(m_SpaceDefaultIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("spaceDefault"), m_SpaceDefault));
    }
    if(m_StartSourceLocationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("startSourceLocation"), m_StartSourceLocation));
    }
    if(m_StandardTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("standardType"), m_StandardType));
    }
    if(m_r_typeNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("typeName"), m_r_typeName));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    }
}

bool BTPArgumentDeclaration_232::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("atomic")))
    {
        bool refVal_atomic;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("atomic")), refVal_atomic );
        setAtomic(refVal_atomic);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("documentationType")))
    {
        utility::string_t refVal_documentationType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("documentationType")), refVal_documentationType );
        setDocumentationType(refVal_documentationType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("endSourceLocation")))
    {
        int32_t refVal_endSourceLocation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("endSourceLocation")), refVal_endSourceLocation );
        setEndSourceLocation(refVal_endSourceLocation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("nodeId")))
    {
        utility::string_t refVal_nodeId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("nodeId")), refVal_nodeId );
        setNodeId(refVal_nodeId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("shortDescriptor")))
    {
        utility::string_t refVal_shortDescriptor;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("shortDescriptor")), refVal_shortDescriptor );
        setShortDescriptor(refVal_shortDescriptor);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("spaceAfter")))
    {
        std::shared_ptr<BTPSpace_10> refVal_spaceAfter;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("spaceAfter")), refVal_spaceAfter );
        setSpaceAfter(refVal_spaceAfter);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("spaceBefore")))
    {
        std::shared_ptr<BTPSpace_10> refVal_spaceBefore;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("spaceBefore")), refVal_spaceBefore );
        setSpaceBefore(refVal_spaceBefore);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("spaceDefault")))
    {
        bool refVal_spaceDefault;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("spaceDefault")), refVal_spaceDefault );
        setSpaceDefault(refVal_spaceDefault);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("startSourceLocation")))
    {
        int32_t refVal_startSourceLocation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("startSourceLocation")), refVal_startSourceLocation );
        setStartSourceLocation(refVal_startSourceLocation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("standardType")))
    {
        utility::string_t refVal_standardType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("standardType")), refVal_standardType );
        setStandardType(refVal_standardType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("typeName")))
    {
        utility::string_t refVal_typeName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("typeName")), refVal_typeName );
        setRTypeName(refVal_typeName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        std::shared_ptr<BTPIdentifier_8> refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("type")))
    {
        std::shared_ptr<BTPTypeName_290> refVal_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("type")), refVal_type );
        setType(refVal_type);
    }
    return ok;
}

utility::string_t BTPArgumentDeclaration_232::getStandardType() const
{
    return m_StandardType;
}

void BTPArgumentDeclaration_232::setStandardType(const utility::string_t& value)
{
    m_StandardType = value;
    m_StandardTypeIsSet = true;
}

bool BTPArgumentDeclaration_232::standardTypeIsSet() const
{
    return m_StandardTypeIsSet;
}

void BTPArgumentDeclaration_232::unsetStandardType()
{
    m_StandardTypeIsSet = false;
}
utility::string_t BTPArgumentDeclaration_232::getRTypeName() const
{
    return m_r_typeName;
}

void BTPArgumentDeclaration_232::setRTypeName(const utility::string_t& value)
{
    m_r_typeName = value;
    m_r_typeNameIsSet = true;
}

bool BTPArgumentDeclaration_232::rTypeNameIsSet() const
{
    return m_r_typeNameIsSet;
}

void BTPArgumentDeclaration_232::unsetr_typeName()
{
    m_r_typeNameIsSet = false;
}
std::shared_ptr<BTPIdentifier_8> BTPArgumentDeclaration_232::getName() const
{
    return m_Name;
}

void BTPArgumentDeclaration_232::setName(const std::shared_ptr<BTPIdentifier_8>& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool BTPArgumentDeclaration_232::nameIsSet() const
{
    return m_NameIsSet;
}

void BTPArgumentDeclaration_232::unsetName()
{
    m_NameIsSet = false;
}
std::shared_ptr<BTPTypeName_290> BTPArgumentDeclaration_232::getType() const
{
    return m_Type;
}

void BTPArgumentDeclaration_232::setType(const std::shared_ptr<BTPTypeName_290>& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool BTPArgumentDeclaration_232::typeIsSet() const
{
    return m_TypeIsSet;
}

void BTPArgumentDeclaration_232::unsetType()
{
    m_TypeIsSet = false;
}
}
}
}
}


