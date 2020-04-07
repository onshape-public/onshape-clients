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



#include "BTInheritedAclInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTInheritedAclInfo::BTInheritedAclInfo()
{
    m_EntriesIsSet = false;
    m_Href = utility::conversions::to_string_t("");
    m_HrefIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_ObjectId = utility::conversions::to_string_t("");
    m_ObjectIdIsSet = false;
    m_ObjectName = utility::conversions::to_string_t("");
    m_ObjectNameIsSet = false;
    m_ObjectType = 0L;
    m_ObjectTypeIsSet = false;
    m_OwnerIsSet = false;
    m_r_public = false;
    m_r_publicIsSet = false;
    m_SharedWithSupport = false;
    m_SharedWithSupportIsSet = false;
    m_ViewRef = utility::conversions::to_string_t("");
    m_ViewRefIsSet = false;
    m_Visibility = utility::conversions::to_string_t("");
    m_VisibilityIsSet = false;
}

BTInheritedAclInfo::~BTInheritedAclInfo()
{
}

void BTInheritedAclInfo::validate()
{
    // TODO: implement validation
}

web::json::value BTInheritedAclInfo::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_EntriesIsSet)
    {
        val[utility::conversions::to_string_t("entries")] = ModelBase::toJson(m_Entries);
    }
    if(m_HrefIsSet)
    {
        val[utility::conversions::to_string_t("href")] = ModelBase::toJson(m_Href);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_ObjectIdIsSet)
    {
        val[utility::conversions::to_string_t("objectId")] = ModelBase::toJson(m_ObjectId);
    }
    if(m_ObjectNameIsSet)
    {
        val[utility::conversions::to_string_t("objectName")] = ModelBase::toJson(m_ObjectName);
    }
    if(m_ObjectTypeIsSet)
    {
        val[utility::conversions::to_string_t("objectType")] = ModelBase::toJson(m_ObjectType);
    }
    if(m_OwnerIsSet)
    {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(m_Owner);
    }
    if(m_r_publicIsSet)
    {
        val[utility::conversions::to_string_t("public")] = ModelBase::toJson(m_r_public);
    }
    if(m_SharedWithSupportIsSet)
    {
        val[utility::conversions::to_string_t("sharedWithSupport")] = ModelBase::toJson(m_SharedWithSupport);
    }
    if(m_ViewRefIsSet)
    {
        val[utility::conversions::to_string_t("viewRef")] = ModelBase::toJson(m_ViewRef);
    }
    if(m_VisibilityIsSet)
    {
        val[utility::conversions::to_string_t("visibility")] = ModelBase::toJson(m_Visibility);
    }

    return val;
}

bool BTInheritedAclInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("entries")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entries"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<BTAclEntryInfo>> refVal_entries;
            ok &= ModelBase::fromJson(fieldValue, refVal_entries);
            setEntries(refVal_entries);
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
    if(val.has_field(utility::conversions::to_string_t("objectId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objectId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_objectId;
            ok &= ModelBase::fromJson(fieldValue, refVal_objectId);
            setObjectId(refVal_objectId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("objectName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objectName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_objectName;
            ok &= ModelBase::fromJson(fieldValue, refVal_objectName);
            setObjectName(refVal_objectName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("objectType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objectType"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_objectType;
            ok &= ModelBase::fromJson(fieldValue, refVal_objectType);
            setObjectType(refVal_objectType);
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
    if(val.has_field(utility::conversions::to_string_t("public")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public"));
        if(!fieldValue.is_null())
        {
            bool refVal_public;
            ok &= ModelBase::fromJson(fieldValue, refVal_public);
            setRPublic(refVal_public);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sharedWithSupport")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sharedWithSupport"));
        if(!fieldValue.is_null())
        {
            bool refVal_sharedWithSupport;
            ok &= ModelBase::fromJson(fieldValue, refVal_sharedWithSupport);
            setSharedWithSupport(refVal_sharedWithSupport);
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
    if(val.has_field(utility::conversions::to_string_t("visibility")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("visibility"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_visibility;
            ok &= ModelBase::fromJson(fieldValue, refVal_visibility);
            setVisibility(refVal_visibility);
        }
    }
    return ok;
}

void BTInheritedAclInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_EntriesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("entries"), m_Entries));
    }
    if(m_HrefIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("href"), m_Href));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_ObjectIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("objectId"), m_ObjectId));
    }
    if(m_ObjectNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("objectName"), m_ObjectName));
    }
    if(m_ObjectTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("objectType"), m_ObjectType));
    }
    if(m_OwnerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("owner"), m_Owner));
    }
    if(m_r_publicIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("public"), m_r_public));
    }
    if(m_SharedWithSupportIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sharedWithSupport"), m_SharedWithSupport));
    }
    if(m_ViewRefIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("viewRef"), m_ViewRef));
    }
    if(m_VisibilityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("visibility"), m_Visibility));
    }
}

bool BTInheritedAclInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("entries")))
    {
        std::vector<std::shared_ptr<BTAclEntryInfo>> refVal_entries;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("entries")), refVal_entries );
        setEntries(refVal_entries);
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
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("objectId")))
    {
        utility::string_t refVal_objectId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("objectId")), refVal_objectId );
        setObjectId(refVal_objectId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("objectName")))
    {
        utility::string_t refVal_objectName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("objectName")), refVal_objectName );
        setObjectName(refVal_objectName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("objectType")))
    {
        int64_t refVal_objectType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("objectType")), refVal_objectType );
        setObjectType(refVal_objectType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("owner")))
    {
        std::shared_ptr<BTOwnerInfo> refVal_owner;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("owner")), refVal_owner );
        setOwner(refVal_owner);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("public")))
    {
        bool refVal_public;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("public")), refVal_public );
        setRPublic(refVal_public);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sharedWithSupport")))
    {
        bool refVal_sharedWithSupport;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sharedWithSupport")), refVal_sharedWithSupport );
        setSharedWithSupport(refVal_sharedWithSupport);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("viewRef")))
    {
        utility::string_t refVal_viewRef;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("viewRef")), refVal_viewRef );
        setViewRef(refVal_viewRef);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("visibility")))
    {
        utility::string_t refVal_visibility;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("visibility")), refVal_visibility );
        setVisibility(refVal_visibility);
    }
    return ok;
}

std::vector<std::shared_ptr<BTAclEntryInfo>>& BTInheritedAclInfo::getEntries()
{
    return m_Entries;
}

void BTInheritedAclInfo::setEntries(const std::vector<std::shared_ptr<BTAclEntryInfo>>& value)
{
    m_Entries = value;
    m_EntriesIsSet = true;
}

bool BTInheritedAclInfo::entriesIsSet() const
{
    return m_EntriesIsSet;
}

void BTInheritedAclInfo::unsetEntries()
{
    m_EntriesIsSet = false;
}
utility::string_t BTInheritedAclInfo::getHref() const
{
    return m_Href;
}

void BTInheritedAclInfo::setHref(const utility::string_t& value)
{
    m_Href = value;
    m_HrefIsSet = true;
}

bool BTInheritedAclInfo::hrefIsSet() const
{
    return m_HrefIsSet;
}

void BTInheritedAclInfo::unsetHref()
{
    m_HrefIsSet = false;
}
utility::string_t BTInheritedAclInfo::getId() const
{
    return m_Id;
}

void BTInheritedAclInfo::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool BTInheritedAclInfo::idIsSet() const
{
    return m_IdIsSet;
}

void BTInheritedAclInfo::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t BTInheritedAclInfo::getName() const
{
    return m_Name;
}

void BTInheritedAclInfo::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool BTInheritedAclInfo::nameIsSet() const
{
    return m_NameIsSet;
}

void BTInheritedAclInfo::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t BTInheritedAclInfo::getObjectId() const
{
    return m_ObjectId;
}

void BTInheritedAclInfo::setObjectId(const utility::string_t& value)
{
    m_ObjectId = value;
    m_ObjectIdIsSet = true;
}

bool BTInheritedAclInfo::objectIdIsSet() const
{
    return m_ObjectIdIsSet;
}

void BTInheritedAclInfo::unsetObjectId()
{
    m_ObjectIdIsSet = false;
}
utility::string_t BTInheritedAclInfo::getObjectName() const
{
    return m_ObjectName;
}

void BTInheritedAclInfo::setObjectName(const utility::string_t& value)
{
    m_ObjectName = value;
    m_ObjectNameIsSet = true;
}

bool BTInheritedAclInfo::objectNameIsSet() const
{
    return m_ObjectNameIsSet;
}

void BTInheritedAclInfo::unsetObjectName()
{
    m_ObjectNameIsSet = false;
}
int64_t BTInheritedAclInfo::getObjectType() const
{
    return m_ObjectType;
}

void BTInheritedAclInfo::setObjectType(int64_t value)
{
    m_ObjectType = value;
    m_ObjectTypeIsSet = true;
}

bool BTInheritedAclInfo::objectTypeIsSet() const
{
    return m_ObjectTypeIsSet;
}

void BTInheritedAclInfo::unsetObjectType()
{
    m_ObjectTypeIsSet = false;
}
std::shared_ptr<BTOwnerInfo> BTInheritedAclInfo::getOwner() const
{
    return m_Owner;
}

void BTInheritedAclInfo::setOwner(const std::shared_ptr<BTOwnerInfo>& value)
{
    m_Owner = value;
    m_OwnerIsSet = true;
}

bool BTInheritedAclInfo::ownerIsSet() const
{
    return m_OwnerIsSet;
}

void BTInheritedAclInfo::unsetOwner()
{
    m_OwnerIsSet = false;
}
bool BTInheritedAclInfo::isRPublic() const
{
    return m_r_public;
}

void BTInheritedAclInfo::setRPublic(bool value)
{
    m_r_public = value;
    m_r_publicIsSet = true;
}

bool BTInheritedAclInfo::rPublicIsSet() const
{
    return m_r_publicIsSet;
}

void BTInheritedAclInfo::unsetr_public()
{
    m_r_publicIsSet = false;
}
bool BTInheritedAclInfo::isSharedWithSupport() const
{
    return m_SharedWithSupport;
}

void BTInheritedAclInfo::setSharedWithSupport(bool value)
{
    m_SharedWithSupport = value;
    m_SharedWithSupportIsSet = true;
}

bool BTInheritedAclInfo::sharedWithSupportIsSet() const
{
    return m_SharedWithSupportIsSet;
}

void BTInheritedAclInfo::unsetSharedWithSupport()
{
    m_SharedWithSupportIsSet = false;
}
utility::string_t BTInheritedAclInfo::getViewRef() const
{
    return m_ViewRef;
}

void BTInheritedAclInfo::setViewRef(const utility::string_t& value)
{
    m_ViewRef = value;
    m_ViewRefIsSet = true;
}

bool BTInheritedAclInfo::viewRefIsSet() const
{
    return m_ViewRefIsSet;
}

void BTInheritedAclInfo::unsetViewRef()
{
    m_ViewRefIsSet = false;
}
utility::string_t BTInheritedAclInfo::getVisibility() const
{
    return m_Visibility;
}

void BTInheritedAclInfo::setVisibility(const utility::string_t& value)
{
    m_Visibility = value;
    m_VisibilityIsSet = true;
}

bool BTInheritedAclInfo::visibilityIsSet() const
{
    return m_VisibilityIsSet;
}

void BTInheritedAclInfo::unsetVisibility()
{
    m_VisibilityIsSet = false;
}
}
}
}
}


