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



#include "BTGlobalTreeNodeInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTGlobalTreeNodeInfo::BTGlobalTreeNodeInfo()
{
    m_CanMove = false;
    m_CanMoveIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_CreatedByIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_Href = utility::conversions::to_string_t("");
    m_HrefIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_IsContainer = false;
    m_IsContainerIsSet = false;
    m_IsEnterpriseOwned = false;
    m_IsEnterpriseOwnedIsSet = false;
    m_IsMutable = false;
    m_IsMutableIsSet = false;
    m_JsonType = utility::conversions::to_string_t("");
    m_JsonTypeIsSet = false;
    m_ModifiedAt = utility::datetime();
    m_ModifiedAtIsSet = false;
    m_ModifiedByIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_OwnerIsSet = false;
    m_ProjectId = utility::conversions::to_string_t("");
    m_ProjectIdIsSet = false;
    m_ResourceType = utility::conversions::to_string_t("");
    m_ResourceTypeIsSet = false;
    m_TreeHref = utility::conversions::to_string_t("");
    m_TreeHrefIsSet = false;
    m_ViewRef = utility::conversions::to_string_t("");
    m_ViewRefIsSet = false;
}

BTGlobalTreeNodeInfo::~BTGlobalTreeNodeInfo()
{
}

void BTGlobalTreeNodeInfo::validate()
{
    // TODO: implement validation
}

web::json::value BTGlobalTreeNodeInfo::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_CanMoveIsSet)
    {
        val[utility::conversions::to_string_t("canMove")] = ModelBase::toJson(m_CanMove);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_CreatedByIsSet)
    {
        val[utility::conversions::to_string_t("createdBy")] = ModelBase::toJson(m_CreatedBy);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(m_Description);
    }
    if(m_HrefIsSet)
    {
        val[utility::conversions::to_string_t("href")] = ModelBase::toJson(m_Href);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_IsContainerIsSet)
    {
        val[utility::conversions::to_string_t("isContainer")] = ModelBase::toJson(m_IsContainer);
    }
    if(m_IsEnterpriseOwnedIsSet)
    {
        val[utility::conversions::to_string_t("isEnterpriseOwned")] = ModelBase::toJson(m_IsEnterpriseOwned);
    }
    if(m_IsMutableIsSet)
    {
        val[utility::conversions::to_string_t("isMutable")] = ModelBase::toJson(m_IsMutable);
    }
    if(m_JsonTypeIsSet)
    {
        val[utility::conversions::to_string_t("jsonType")] = ModelBase::toJson(m_JsonType);
    }
    if(m_ModifiedAtIsSet)
    {
        val[utility::conversions::to_string_t("modifiedAt")] = ModelBase::toJson(m_ModifiedAt);
    }
    if(m_ModifiedByIsSet)
    {
        val[utility::conversions::to_string_t("modifiedBy")] = ModelBase::toJson(m_ModifiedBy);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_OwnerIsSet)
    {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(m_Owner);
    }
    if(m_ProjectIdIsSet)
    {
        val[utility::conversions::to_string_t("projectId")] = ModelBase::toJson(m_ProjectId);
    }
    if(m_ResourceTypeIsSet)
    {
        val[utility::conversions::to_string_t("resourceType")] = ModelBase::toJson(m_ResourceType);
    }
    if(m_TreeHrefIsSet)
    {
        val[utility::conversions::to_string_t("treeHref")] = ModelBase::toJson(m_TreeHref);
    }
    if(m_ViewRefIsSet)
    {
        val[utility::conversions::to_string_t("viewRef")] = ModelBase::toJson(m_ViewRef);
    }

    return val;
}

bool BTGlobalTreeNodeInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("canMove")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("canMove"));
        if(!fieldValue.is_null())
        {
            bool refVal_canMove;
            ok &= ModelBase::fromJson(fieldValue, refVal_canMove);
            setCanMove(refVal_canMove);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createdAt")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createdAt"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_createdAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_createdAt);
            setCreatedAt(refVal_createdAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createdBy")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createdBy"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTUserBasicSummaryInfo> refVal_createdBy;
            ok &= ModelBase::fromJson(fieldValue, refVal_createdBy);
            setCreatedBy(refVal_createdBy);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_description;
            ok &= ModelBase::fromJson(fieldValue, refVal_description);
            setDescription(refVal_description);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("href")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("href"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_href;
            ok &= ModelBase::fromJson(fieldValue, refVal_href);
            setHref(refVal_href);
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
    if(val.has_field(utility::conversions::to_string_t("isContainer")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isContainer"));
        if(!fieldValue.is_null())
        {
            bool refVal_isContainer;
            ok &= ModelBase::fromJson(fieldValue, refVal_isContainer);
            setIsContainer(refVal_isContainer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isEnterpriseOwned")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isEnterpriseOwned"));
        if(!fieldValue.is_null())
        {
            bool refVal_isEnterpriseOwned;
            ok &= ModelBase::fromJson(fieldValue, refVal_isEnterpriseOwned);
            setIsEnterpriseOwned(refVal_isEnterpriseOwned);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isMutable")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isMutable"));
        if(!fieldValue.is_null())
        {
            bool refVal_isMutable;
            ok &= ModelBase::fromJson(fieldValue, refVal_isMutable);
            setIsMutable(refVal_isMutable);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jsonType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jsonType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_jsonType;
            ok &= ModelBase::fromJson(fieldValue, refVal_jsonType);
            setJsonType(refVal_jsonType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modifiedAt")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modifiedAt"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_modifiedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_modifiedAt);
            setModifiedAt(refVal_modifiedAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modifiedBy")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modifiedBy"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTUserBasicSummaryInfo> refVal_modifiedBy;
            ok &= ModelBase::fromJson(fieldValue, refVal_modifiedBy);
            setModifiedBy(refVal_modifiedBy);
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
    if(val.has_field(utility::conversions::to_string_t("owner")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTOwnerInfo> refVal_owner;
            ok &= ModelBase::fromJson(fieldValue, refVal_owner);
            setOwner(refVal_owner);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("projectId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projectId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_projectId;
            ok &= ModelBase::fromJson(fieldValue, refVal_projectId);
            setProjectId(refVal_projectId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resourceType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resourceType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_resourceType;
            ok &= ModelBase::fromJson(fieldValue, refVal_resourceType);
            setResourceType(refVal_resourceType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("treeHref")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("treeHref"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_treeHref;
            ok &= ModelBase::fromJson(fieldValue, refVal_treeHref);
            setTreeHref(refVal_treeHref);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("viewRef")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("viewRef"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_viewRef;
            ok &= ModelBase::fromJson(fieldValue, refVal_viewRef);
            setViewRef(refVal_viewRef);
        }
    }
    return ok;
}

void BTGlobalTreeNodeInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_CanMoveIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("canMove"), m_CanMove));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
    }
    if(m_CreatedByIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdBy"), m_CreatedBy));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("description"), m_Description));
    }
    if(m_HrefIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("href"), m_Href));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_IsContainerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isContainer"), m_IsContainer));
    }
    if(m_IsEnterpriseOwnedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isEnterpriseOwned"), m_IsEnterpriseOwned));
    }
    if(m_IsMutableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isMutable"), m_IsMutable));
    }
    if(m_JsonTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("jsonType"), m_JsonType));
    }
    if(m_ModifiedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("modifiedAt"), m_ModifiedAt));
    }
    if(m_ModifiedByIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("modifiedBy"), m_ModifiedBy));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_OwnerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("owner"), m_Owner));
    }
    if(m_ProjectIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("projectId"), m_ProjectId));
    }
    if(m_ResourceTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("resourceType"), m_ResourceType));
    }
    if(m_TreeHrefIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("treeHref"), m_TreeHref));
    }
    if(m_ViewRefIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("viewRef"), m_ViewRef));
    }
}

bool BTGlobalTreeNodeInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("canMove")))
    {
        bool refVal_canMove;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("canMove")), refVal_canMove );
        setCanMove(refVal_canMove);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("createdAt")))
    {
        utility::datetime refVal_createdAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdAt")), refVal_createdAt );
        setCreatedAt(refVal_createdAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("createdBy")))
    {
        std::shared_ptr<BTUserBasicSummaryInfo> refVal_createdBy;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdBy")), refVal_createdBy );
        setCreatedBy(refVal_createdBy);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("description")))
    {
        utility::string_t refVal_description;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("description")), refVal_description );
        setDescription(refVal_description);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("href")))
    {
        utility::string_t refVal_href;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("href")), refVal_href );
        setHref(refVal_href);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("isContainer")))
    {
        bool refVal_isContainer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("isContainer")), refVal_isContainer );
        setIsContainer(refVal_isContainer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("isEnterpriseOwned")))
    {
        bool refVal_isEnterpriseOwned;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("isEnterpriseOwned")), refVal_isEnterpriseOwned );
        setIsEnterpriseOwned(refVal_isEnterpriseOwned);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("isMutable")))
    {
        bool refVal_isMutable;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("isMutable")), refVal_isMutable );
        setIsMutable(refVal_isMutable);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("jsonType")))
    {
        utility::string_t refVal_jsonType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("jsonType")), refVal_jsonType );
        setJsonType(refVal_jsonType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("modifiedAt")))
    {
        utility::datetime refVal_modifiedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("modifiedAt")), refVal_modifiedAt );
        setModifiedAt(refVal_modifiedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("modifiedBy")))
    {
        std::shared_ptr<BTUserBasicSummaryInfo> refVal_modifiedBy;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("modifiedBy")), refVal_modifiedBy );
        setModifiedBy(refVal_modifiedBy);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("owner")))
    {
        std::shared_ptr<BTOwnerInfo> refVal_owner;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("owner")), refVal_owner );
        setOwner(refVal_owner);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("projectId")))
    {
        utility::string_t refVal_projectId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("projectId")), refVal_projectId );
        setProjectId(refVal_projectId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("resourceType")))
    {
        utility::string_t refVal_resourceType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("resourceType")), refVal_resourceType );
        setResourceType(refVal_resourceType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("treeHref")))
    {
        utility::string_t refVal_treeHref;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("treeHref")), refVal_treeHref );
        setTreeHref(refVal_treeHref);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("viewRef")))
    {
        utility::string_t refVal_viewRef;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("viewRef")), refVal_viewRef );
        setViewRef(refVal_viewRef);
    }
    return ok;
}

bool BTGlobalTreeNodeInfo::isCanMove() const
{
    return m_CanMove;
}

void BTGlobalTreeNodeInfo::setCanMove(bool value)
{
    m_CanMove = value;
    m_CanMoveIsSet = true;
}

bool BTGlobalTreeNodeInfo::canMoveIsSet() const
{
    return m_CanMoveIsSet;
}

void BTGlobalTreeNodeInfo::unsetCanMove()
{
    m_CanMoveIsSet = false;
}
utility::datetime BTGlobalTreeNodeInfo::getCreatedAt() const
{
    return m_CreatedAt;
}

void BTGlobalTreeNodeInfo::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool BTGlobalTreeNodeInfo::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void BTGlobalTreeNodeInfo::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
std::shared_ptr<BTUserBasicSummaryInfo> BTGlobalTreeNodeInfo::getCreatedBy() const
{
    return m_CreatedBy;
}

void BTGlobalTreeNodeInfo::setCreatedBy(const std::shared_ptr<BTUserBasicSummaryInfo>& value)
{
    m_CreatedBy = value;
    m_CreatedByIsSet = true;
}

bool BTGlobalTreeNodeInfo::createdByIsSet() const
{
    return m_CreatedByIsSet;
}

void BTGlobalTreeNodeInfo::unsetCreatedBy()
{
    m_CreatedByIsSet = false;
}
utility::string_t BTGlobalTreeNodeInfo::getDescription() const
{
    return m_Description;
}

void BTGlobalTreeNodeInfo::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool BTGlobalTreeNodeInfo::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void BTGlobalTreeNodeInfo::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t BTGlobalTreeNodeInfo::getHref() const
{
    return m_Href;
}

void BTGlobalTreeNodeInfo::setHref(const utility::string_t& value)
{
    m_Href = value;
    m_HrefIsSet = true;
}

bool BTGlobalTreeNodeInfo::hrefIsSet() const
{
    return m_HrefIsSet;
}

void BTGlobalTreeNodeInfo::unsetHref()
{
    m_HrefIsSet = false;
}
utility::string_t BTGlobalTreeNodeInfo::getId() const
{
    return m_Id;
}

void BTGlobalTreeNodeInfo::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool BTGlobalTreeNodeInfo::idIsSet() const
{
    return m_IdIsSet;
}

void BTGlobalTreeNodeInfo::unsetId()
{
    m_IdIsSet = false;
}
bool BTGlobalTreeNodeInfo::isIsContainer() const
{
    return m_IsContainer;
}

void BTGlobalTreeNodeInfo::setIsContainer(bool value)
{
    m_IsContainer = value;
    m_IsContainerIsSet = true;
}

bool BTGlobalTreeNodeInfo::isContainerIsSet() const
{
    return m_IsContainerIsSet;
}

void BTGlobalTreeNodeInfo::unsetIsContainer()
{
    m_IsContainerIsSet = false;
}
bool BTGlobalTreeNodeInfo::isIsEnterpriseOwned() const
{
    return m_IsEnterpriseOwned;
}

void BTGlobalTreeNodeInfo::setIsEnterpriseOwned(bool value)
{
    m_IsEnterpriseOwned = value;
    m_IsEnterpriseOwnedIsSet = true;
}

bool BTGlobalTreeNodeInfo::isEnterpriseOwnedIsSet() const
{
    return m_IsEnterpriseOwnedIsSet;
}

void BTGlobalTreeNodeInfo::unsetIsEnterpriseOwned()
{
    m_IsEnterpriseOwnedIsSet = false;
}
bool BTGlobalTreeNodeInfo::isIsMutable() const
{
    return m_IsMutable;
}

void BTGlobalTreeNodeInfo::setIsMutable(bool value)
{
    m_IsMutable = value;
    m_IsMutableIsSet = true;
}

bool BTGlobalTreeNodeInfo::isMutableIsSet() const
{
    return m_IsMutableIsSet;
}

void BTGlobalTreeNodeInfo::unsetIsMutable()
{
    m_IsMutableIsSet = false;
}
utility::string_t BTGlobalTreeNodeInfo::getJsonType() const
{
    return m_JsonType;
}

void BTGlobalTreeNodeInfo::setJsonType(const utility::string_t& value)
{
    m_JsonType = value;
    m_JsonTypeIsSet = true;
}

bool BTGlobalTreeNodeInfo::jsonTypeIsSet() const
{
    return m_JsonTypeIsSet;
}

void BTGlobalTreeNodeInfo::unsetJsonType()
{
    m_JsonTypeIsSet = false;
}
utility::datetime BTGlobalTreeNodeInfo::getModifiedAt() const
{
    return m_ModifiedAt;
}

void BTGlobalTreeNodeInfo::setModifiedAt(const utility::datetime& value)
{
    m_ModifiedAt = value;
    m_ModifiedAtIsSet = true;
}

bool BTGlobalTreeNodeInfo::modifiedAtIsSet() const
{
    return m_ModifiedAtIsSet;
}

void BTGlobalTreeNodeInfo::unsetModifiedAt()
{
    m_ModifiedAtIsSet = false;
}
std::shared_ptr<BTUserBasicSummaryInfo> BTGlobalTreeNodeInfo::getModifiedBy() const
{
    return m_ModifiedBy;
}

void BTGlobalTreeNodeInfo::setModifiedBy(const std::shared_ptr<BTUserBasicSummaryInfo>& value)
{
    m_ModifiedBy = value;
    m_ModifiedByIsSet = true;
}

bool BTGlobalTreeNodeInfo::modifiedByIsSet() const
{
    return m_ModifiedByIsSet;
}

void BTGlobalTreeNodeInfo::unsetModifiedBy()
{
    m_ModifiedByIsSet = false;
}
utility::string_t BTGlobalTreeNodeInfo::getName() const
{
    return m_Name;
}

void BTGlobalTreeNodeInfo::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool BTGlobalTreeNodeInfo::nameIsSet() const
{
    return m_NameIsSet;
}

void BTGlobalTreeNodeInfo::unsetName()
{
    m_NameIsSet = false;
}
std::shared_ptr<BTOwnerInfo> BTGlobalTreeNodeInfo::getOwner() const
{
    return m_Owner;
}

void BTGlobalTreeNodeInfo::setOwner(const std::shared_ptr<BTOwnerInfo>& value)
{
    m_Owner = value;
    m_OwnerIsSet = true;
}

bool BTGlobalTreeNodeInfo::ownerIsSet() const
{
    return m_OwnerIsSet;
}

void BTGlobalTreeNodeInfo::unsetOwner()
{
    m_OwnerIsSet = false;
}
utility::string_t BTGlobalTreeNodeInfo::getProjectId() const
{
    return m_ProjectId;
}

void BTGlobalTreeNodeInfo::setProjectId(const utility::string_t& value)
{
    m_ProjectId = value;
    m_ProjectIdIsSet = true;
}

bool BTGlobalTreeNodeInfo::projectIdIsSet() const
{
    return m_ProjectIdIsSet;
}

void BTGlobalTreeNodeInfo::unsetProjectId()
{
    m_ProjectIdIsSet = false;
}
utility::string_t BTGlobalTreeNodeInfo::getResourceType() const
{
    return m_ResourceType;
}

void BTGlobalTreeNodeInfo::setResourceType(const utility::string_t& value)
{
    m_ResourceType = value;
    m_ResourceTypeIsSet = true;
}

bool BTGlobalTreeNodeInfo::resourceTypeIsSet() const
{
    return m_ResourceTypeIsSet;
}

void BTGlobalTreeNodeInfo::unsetResourceType()
{
    m_ResourceTypeIsSet = false;
}
utility::string_t BTGlobalTreeNodeInfo::getTreeHref() const
{
    return m_TreeHref;
}

void BTGlobalTreeNodeInfo::setTreeHref(const utility::string_t& value)
{
    m_TreeHref = value;
    m_TreeHrefIsSet = true;
}

bool BTGlobalTreeNodeInfo::treeHrefIsSet() const
{
    return m_TreeHrefIsSet;
}

void BTGlobalTreeNodeInfo::unsetTreeHref()
{
    m_TreeHrefIsSet = false;
}
utility::string_t BTGlobalTreeNodeInfo::getViewRef() const
{
    return m_ViewRef;
}

void BTGlobalTreeNodeInfo::setViewRef(const utility::string_t& value)
{
    m_ViewRef = value;
    m_ViewRefIsSet = true;
}

bool BTGlobalTreeNodeInfo::viewRefIsSet() const
{
    return m_ViewRefIsSet;
}

void BTGlobalTreeNodeInfo::unsetViewRef()
{
    m_ViewRefIsSet = false;
}
}
}
}
}


