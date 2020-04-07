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



#include "BTCopyDocumentParams.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTCopyDocumentParams::BTCopyDocumentParams()
{
    m_BetaCapabilityIdsIsSet = false;
    m_IsPublic = false;
    m_IsPublicIsSet = false;
    m_NewName = utility::conversions::to_string_t("");
    m_NewNameIsSet = false;
    m_OwnerId = utility::conversions::to_string_t("");
    m_OwnerIdIsSet = false;
    m_OwnerTypeIndex = 0;
    m_OwnerTypeIndexIsSet = false;
    m_ParentId = utility::conversions::to_string_t("");
    m_ParentIdIsSet = false;
    m_ProjectId = utility::conversions::to_string_t("");
    m_ProjectIdIsSet = false;
}

BTCopyDocumentParams::~BTCopyDocumentParams()
{
}

void BTCopyDocumentParams::validate()
{
    // TODO: implement validation
}

web::json::value BTCopyDocumentParams::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_BetaCapabilityIdsIsSet)
    {
        val[utility::conversions::to_string_t("betaCapabilityIds")] = ModelBase::toJson(m_BetaCapabilityIds);
    }
    if(m_IsPublicIsSet)
    {
        val[utility::conversions::to_string_t("isPublic")] = ModelBase::toJson(m_IsPublic);
    }
    if(m_NewNameIsSet)
    {
        val[utility::conversions::to_string_t("newName")] = ModelBase::toJson(m_NewName);
    }
    if(m_OwnerIdIsSet)
    {
        val[utility::conversions::to_string_t("ownerId")] = ModelBase::toJson(m_OwnerId);
    }
    if(m_OwnerTypeIndexIsSet)
    {
        val[utility::conversions::to_string_t("ownerTypeIndex")] = ModelBase::toJson(m_OwnerTypeIndex);
    }
    if(m_ParentIdIsSet)
    {
        val[utility::conversions::to_string_t("parentId")] = ModelBase::toJson(m_ParentId);
    }
    if(m_ProjectIdIsSet)
    {
        val[utility::conversions::to_string_t("projectId")] = ModelBase::toJson(m_ProjectId);
    }

    return val;
}

bool BTCopyDocumentParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("betaCapabilityIds")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("betaCapabilityIds"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_betaCapabilityIds;
            ok &= ModelBase::fromJson(fieldValue, refVal_betaCapabilityIds);
            setBetaCapabilityIds(refVal_betaCapabilityIds);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isPublic")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isPublic"));
        if(!fieldValue.is_null())
        {
            bool refVal_isPublic;
            ok &= ModelBase::fromJson(fieldValue, refVal_isPublic);
            setIsPublic(refVal_isPublic);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("newName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("newName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_newName;
            ok &= ModelBase::fromJson(fieldValue, refVal_newName);
            setNewName(refVal_newName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ownerId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ownerId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_ownerId;
            ok &= ModelBase::fromJson(fieldValue, refVal_ownerId);
            setOwnerId(refVal_ownerId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ownerTypeIndex")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ownerTypeIndex"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_ownerTypeIndex;
            ok &= ModelBase::fromJson(fieldValue, refVal_ownerTypeIndex);
            setOwnerTypeIndex(refVal_ownerTypeIndex);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parentId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parentId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_parentId;
            ok &= ModelBase::fromJson(fieldValue, refVal_parentId);
            setParentId(refVal_parentId);
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
    return ok;
}

void BTCopyDocumentParams::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_BetaCapabilityIdsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("betaCapabilityIds"), m_BetaCapabilityIds));
    }
    if(m_IsPublicIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isPublic"), m_IsPublic));
    }
    if(m_NewNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("newName"), m_NewName));
    }
    if(m_OwnerIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ownerId"), m_OwnerId));
    }
    if(m_OwnerTypeIndexIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ownerTypeIndex"), m_OwnerTypeIndex));
    }
    if(m_ParentIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parentId"), m_ParentId));
    }
    if(m_ProjectIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("projectId"), m_ProjectId));
    }
}

bool BTCopyDocumentParams::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("betaCapabilityIds")))
    {
        std::vector<utility::string_t> refVal_betaCapabilityIds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("betaCapabilityIds")), refVal_betaCapabilityIds );
        setBetaCapabilityIds(refVal_betaCapabilityIds);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("isPublic")))
    {
        bool refVal_isPublic;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("isPublic")), refVal_isPublic );
        setIsPublic(refVal_isPublic);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("newName")))
    {
        utility::string_t refVal_newName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("newName")), refVal_newName );
        setNewName(refVal_newName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ownerId")))
    {
        utility::string_t refVal_ownerId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("ownerId")), refVal_ownerId );
        setOwnerId(refVal_ownerId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ownerTypeIndex")))
    {
        int32_t refVal_ownerTypeIndex;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("ownerTypeIndex")), refVal_ownerTypeIndex );
        setOwnerTypeIndex(refVal_ownerTypeIndex);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parentId")))
    {
        utility::string_t refVal_parentId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parentId")), refVal_parentId );
        setParentId(refVal_parentId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("projectId")))
    {
        utility::string_t refVal_projectId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("projectId")), refVal_projectId );
        setProjectId(refVal_projectId);
    }
    return ok;
}

std::vector<utility::string_t>& BTCopyDocumentParams::getBetaCapabilityIds()
{
    return m_BetaCapabilityIds;
}

void BTCopyDocumentParams::setBetaCapabilityIds(const std::vector<utility::string_t>& value)
{
    m_BetaCapabilityIds = value;
    m_BetaCapabilityIdsIsSet = true;
}

bool BTCopyDocumentParams::betaCapabilityIdsIsSet() const
{
    return m_BetaCapabilityIdsIsSet;
}

void BTCopyDocumentParams::unsetBetaCapabilityIds()
{
    m_BetaCapabilityIdsIsSet = false;
}
bool BTCopyDocumentParams::isIsPublic() const
{
    return m_IsPublic;
}

void BTCopyDocumentParams::setIsPublic(bool value)
{
    m_IsPublic = value;
    m_IsPublicIsSet = true;
}

bool BTCopyDocumentParams::isPublicIsSet() const
{
    return m_IsPublicIsSet;
}

void BTCopyDocumentParams::unsetIsPublic()
{
    m_IsPublicIsSet = false;
}
utility::string_t BTCopyDocumentParams::getNewName() const
{
    return m_NewName;
}

void BTCopyDocumentParams::setNewName(const utility::string_t& value)
{
    m_NewName = value;
    m_NewNameIsSet = true;
}

bool BTCopyDocumentParams::newNameIsSet() const
{
    return m_NewNameIsSet;
}

void BTCopyDocumentParams::unsetNewName()
{
    m_NewNameIsSet = false;
}
utility::string_t BTCopyDocumentParams::getOwnerId() const
{
    return m_OwnerId;
}

void BTCopyDocumentParams::setOwnerId(const utility::string_t& value)
{
    m_OwnerId = value;
    m_OwnerIdIsSet = true;
}

bool BTCopyDocumentParams::ownerIdIsSet() const
{
    return m_OwnerIdIsSet;
}

void BTCopyDocumentParams::unsetOwnerId()
{
    m_OwnerIdIsSet = false;
}
int32_t BTCopyDocumentParams::getOwnerTypeIndex() const
{
    return m_OwnerTypeIndex;
}

void BTCopyDocumentParams::setOwnerTypeIndex(int32_t value)
{
    m_OwnerTypeIndex = value;
    m_OwnerTypeIndexIsSet = true;
}

bool BTCopyDocumentParams::ownerTypeIndexIsSet() const
{
    return m_OwnerTypeIndexIsSet;
}

void BTCopyDocumentParams::unsetOwnerTypeIndex()
{
    m_OwnerTypeIndexIsSet = false;
}
utility::string_t BTCopyDocumentParams::getParentId() const
{
    return m_ParentId;
}

void BTCopyDocumentParams::setParentId(const utility::string_t& value)
{
    m_ParentId = value;
    m_ParentIdIsSet = true;
}

bool BTCopyDocumentParams::parentIdIsSet() const
{
    return m_ParentIdIsSet;
}

void BTCopyDocumentParams::unsetParentId()
{
    m_ParentIdIsSet = false;
}
utility::string_t BTCopyDocumentParams::getProjectId() const
{
    return m_ProjectId;
}

void BTCopyDocumentParams::setProjectId(const utility::string_t& value)
{
    m_ProjectId = value;
    m_ProjectIdIsSet = true;
}

bool BTCopyDocumentParams::projectIdIsSet() const
{
    return m_ProjectIdIsSet;
}

void BTCopyDocumentParams::unsetProjectId()
{
    m_ProjectIdIsSet = false;
}
}
}
}
}


