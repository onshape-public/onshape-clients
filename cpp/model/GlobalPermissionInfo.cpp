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



#include "GlobalPermissionInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




GlobalPermissionInfo::GlobalPermissionInfo()
{
    m_AccessReports = false;
    m_AccessReportsIsSet = false;
    m_AdminEnterprise = false;
    m_AdminEnterpriseIsSet = false;
    m_AllowAppStoreAccess = false;
    m_AllowAppStoreAccessIsSet = false;
    m_ApproveReleases = false;
    m_ApproveReleasesIsSet = false;
    m_CreateProject = false;
    m_CreateProjectIsSet = false;
    m_CreateReleases = false;
    m_CreateReleasesIsSet = false;
    m_DeletePermanently = false;
    m_DeletePermanentlyIsSet = false;
    m_ManageGuestUsers = false;
    m_ManageGuestUsersIsSet = false;
    m_ManageRbac = false;
    m_ManageRbacIsSet = false;
    m_ManageUsers = false;
    m_ManageUsersIsSet = false;
    m_ShareForAnonymousAccess = false;
    m_ShareForAnonymousAccessIsSet = false;
}

GlobalPermissionInfo::~GlobalPermissionInfo()
{
}

void GlobalPermissionInfo::validate()
{
    // TODO: implement validation
}

web::json::value GlobalPermissionInfo::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AccessReportsIsSet)
    {
        val[utility::conversions::to_string_t("accessReports")] = ModelBase::toJson(m_AccessReports);
    }
    if(m_AdminEnterpriseIsSet)
    {
        val[utility::conversions::to_string_t("adminEnterprise")] = ModelBase::toJson(m_AdminEnterprise);
    }
    if(m_AllowAppStoreAccessIsSet)
    {
        val[utility::conversions::to_string_t("allowAppStoreAccess")] = ModelBase::toJson(m_AllowAppStoreAccess);
    }
    if(m_ApproveReleasesIsSet)
    {
        val[utility::conversions::to_string_t("approveReleases")] = ModelBase::toJson(m_ApproveReleases);
    }
    if(m_CreateProjectIsSet)
    {
        val[utility::conversions::to_string_t("createProject")] = ModelBase::toJson(m_CreateProject);
    }
    if(m_CreateReleasesIsSet)
    {
        val[utility::conversions::to_string_t("createReleases")] = ModelBase::toJson(m_CreateReleases);
    }
    if(m_DeletePermanentlyIsSet)
    {
        val[utility::conversions::to_string_t("deletePermanently")] = ModelBase::toJson(m_DeletePermanently);
    }
    if(m_ManageGuestUsersIsSet)
    {
        val[utility::conversions::to_string_t("manageGuestUsers")] = ModelBase::toJson(m_ManageGuestUsers);
    }
    if(m_ManageRbacIsSet)
    {
        val[utility::conversions::to_string_t("manageRbac")] = ModelBase::toJson(m_ManageRbac);
    }
    if(m_ManageUsersIsSet)
    {
        val[utility::conversions::to_string_t("manageUsers")] = ModelBase::toJson(m_ManageUsers);
    }
    if(m_ShareForAnonymousAccessIsSet)
    {
        val[utility::conversions::to_string_t("shareForAnonymousAccess")] = ModelBase::toJson(m_ShareForAnonymousAccess);
    }

    return val;
}

bool GlobalPermissionInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("accessReports")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accessReports"));
        if(!fieldValue.is_null())
        {
            bool refVal_accessReports;
            ok &= ModelBase::fromJson(fieldValue, refVal_accessReports);
            setAccessReports(refVal_accessReports);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("adminEnterprise")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("adminEnterprise"));
        if(!fieldValue.is_null())
        {
            bool refVal_adminEnterprise;
            ok &= ModelBase::fromJson(fieldValue, refVal_adminEnterprise);
            setAdminEnterprise(refVal_adminEnterprise);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allowAppStoreAccess")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowAppStoreAccess"));
        if(!fieldValue.is_null())
        {
            bool refVal_allowAppStoreAccess;
            ok &= ModelBase::fromJson(fieldValue, refVal_allowAppStoreAccess);
            setAllowAppStoreAccess(refVal_allowAppStoreAccess);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("approveReleases")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approveReleases"));
        if(!fieldValue.is_null())
        {
            bool refVal_approveReleases;
            ok &= ModelBase::fromJson(fieldValue, refVal_approveReleases);
            setApproveReleases(refVal_approveReleases);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createProject")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createProject"));
        if(!fieldValue.is_null())
        {
            bool refVal_createProject;
            ok &= ModelBase::fromJson(fieldValue, refVal_createProject);
            setCreateProject(refVal_createProject);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createReleases")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createReleases"));
        if(!fieldValue.is_null())
        {
            bool refVal_createReleases;
            ok &= ModelBase::fromJson(fieldValue, refVal_createReleases);
            setCreateReleases(refVal_createReleases);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deletePermanently")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deletePermanently"));
        if(!fieldValue.is_null())
        {
            bool refVal_deletePermanently;
            ok &= ModelBase::fromJson(fieldValue, refVal_deletePermanently);
            setDeletePermanently(refVal_deletePermanently);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("manageGuestUsers")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manageGuestUsers"));
        if(!fieldValue.is_null())
        {
            bool refVal_manageGuestUsers;
            ok &= ModelBase::fromJson(fieldValue, refVal_manageGuestUsers);
            setManageGuestUsers(refVal_manageGuestUsers);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("manageRbac")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manageRbac"));
        if(!fieldValue.is_null())
        {
            bool refVal_manageRbac;
            ok &= ModelBase::fromJson(fieldValue, refVal_manageRbac);
            setManageRbac(refVal_manageRbac);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("manageUsers")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manageUsers"));
        if(!fieldValue.is_null())
        {
            bool refVal_manageUsers;
            ok &= ModelBase::fromJson(fieldValue, refVal_manageUsers);
            setManageUsers(refVal_manageUsers);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shareForAnonymousAccess")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shareForAnonymousAccess"));
        if(!fieldValue.is_null())
        {
            bool refVal_shareForAnonymousAccess;
            ok &= ModelBase::fromJson(fieldValue, refVal_shareForAnonymousAccess);
            setShareForAnonymousAccess(refVal_shareForAnonymousAccess);
        }
    }
    return ok;
}

void GlobalPermissionInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_AccessReportsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("accessReports"), m_AccessReports));
    }
    if(m_AdminEnterpriseIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("adminEnterprise"), m_AdminEnterprise));
    }
    if(m_AllowAppStoreAccessIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("allowAppStoreAccess"), m_AllowAppStoreAccess));
    }
    if(m_ApproveReleasesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("approveReleases"), m_ApproveReleases));
    }
    if(m_CreateProjectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createProject"), m_CreateProject));
    }
    if(m_CreateReleasesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createReleases"), m_CreateReleases));
    }
    if(m_DeletePermanentlyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("deletePermanently"), m_DeletePermanently));
    }
    if(m_ManageGuestUsersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("manageGuestUsers"), m_ManageGuestUsers));
    }
    if(m_ManageRbacIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("manageRbac"), m_ManageRbac));
    }
    if(m_ManageUsersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("manageUsers"), m_ManageUsers));
    }
    if(m_ShareForAnonymousAccessIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("shareForAnonymousAccess"), m_ShareForAnonymousAccess));
    }
}

bool GlobalPermissionInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("accessReports")))
    {
        bool refVal_accessReports;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("accessReports")), refVal_accessReports );
        setAccessReports(refVal_accessReports);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("adminEnterprise")))
    {
        bool refVal_adminEnterprise;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("adminEnterprise")), refVal_adminEnterprise );
        setAdminEnterprise(refVal_adminEnterprise);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("allowAppStoreAccess")))
    {
        bool refVal_allowAppStoreAccess;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("allowAppStoreAccess")), refVal_allowAppStoreAccess );
        setAllowAppStoreAccess(refVal_allowAppStoreAccess);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("approveReleases")))
    {
        bool refVal_approveReleases;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("approveReleases")), refVal_approveReleases );
        setApproveReleases(refVal_approveReleases);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("createProject")))
    {
        bool refVal_createProject;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createProject")), refVal_createProject );
        setCreateProject(refVal_createProject);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("createReleases")))
    {
        bool refVal_createReleases;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createReleases")), refVal_createReleases );
        setCreateReleases(refVal_createReleases);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("deletePermanently")))
    {
        bool refVal_deletePermanently;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("deletePermanently")), refVal_deletePermanently );
        setDeletePermanently(refVal_deletePermanently);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("manageGuestUsers")))
    {
        bool refVal_manageGuestUsers;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("manageGuestUsers")), refVal_manageGuestUsers );
        setManageGuestUsers(refVal_manageGuestUsers);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("manageRbac")))
    {
        bool refVal_manageRbac;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("manageRbac")), refVal_manageRbac );
        setManageRbac(refVal_manageRbac);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("manageUsers")))
    {
        bool refVal_manageUsers;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("manageUsers")), refVal_manageUsers );
        setManageUsers(refVal_manageUsers);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("shareForAnonymousAccess")))
    {
        bool refVal_shareForAnonymousAccess;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("shareForAnonymousAccess")), refVal_shareForAnonymousAccess );
        setShareForAnonymousAccess(refVal_shareForAnonymousAccess);
    }
    return ok;
}

bool GlobalPermissionInfo::isAccessReports() const
{
    return m_AccessReports;
}

void GlobalPermissionInfo::setAccessReports(bool value)
{
    m_AccessReports = value;
    m_AccessReportsIsSet = true;
}

bool GlobalPermissionInfo::accessReportsIsSet() const
{
    return m_AccessReportsIsSet;
}

void GlobalPermissionInfo::unsetAccessReports()
{
    m_AccessReportsIsSet = false;
}
bool GlobalPermissionInfo::isAdminEnterprise() const
{
    return m_AdminEnterprise;
}

void GlobalPermissionInfo::setAdminEnterprise(bool value)
{
    m_AdminEnterprise = value;
    m_AdminEnterpriseIsSet = true;
}

bool GlobalPermissionInfo::adminEnterpriseIsSet() const
{
    return m_AdminEnterpriseIsSet;
}

void GlobalPermissionInfo::unsetAdminEnterprise()
{
    m_AdminEnterpriseIsSet = false;
}
bool GlobalPermissionInfo::isAllowAppStoreAccess() const
{
    return m_AllowAppStoreAccess;
}

void GlobalPermissionInfo::setAllowAppStoreAccess(bool value)
{
    m_AllowAppStoreAccess = value;
    m_AllowAppStoreAccessIsSet = true;
}

bool GlobalPermissionInfo::allowAppStoreAccessIsSet() const
{
    return m_AllowAppStoreAccessIsSet;
}

void GlobalPermissionInfo::unsetAllowAppStoreAccess()
{
    m_AllowAppStoreAccessIsSet = false;
}
bool GlobalPermissionInfo::isApproveReleases() const
{
    return m_ApproveReleases;
}

void GlobalPermissionInfo::setApproveReleases(bool value)
{
    m_ApproveReleases = value;
    m_ApproveReleasesIsSet = true;
}

bool GlobalPermissionInfo::approveReleasesIsSet() const
{
    return m_ApproveReleasesIsSet;
}

void GlobalPermissionInfo::unsetApproveReleases()
{
    m_ApproveReleasesIsSet = false;
}
bool GlobalPermissionInfo::isCreateProject() const
{
    return m_CreateProject;
}

void GlobalPermissionInfo::setCreateProject(bool value)
{
    m_CreateProject = value;
    m_CreateProjectIsSet = true;
}

bool GlobalPermissionInfo::createProjectIsSet() const
{
    return m_CreateProjectIsSet;
}

void GlobalPermissionInfo::unsetCreateProject()
{
    m_CreateProjectIsSet = false;
}
bool GlobalPermissionInfo::isCreateReleases() const
{
    return m_CreateReleases;
}

void GlobalPermissionInfo::setCreateReleases(bool value)
{
    m_CreateReleases = value;
    m_CreateReleasesIsSet = true;
}

bool GlobalPermissionInfo::createReleasesIsSet() const
{
    return m_CreateReleasesIsSet;
}

void GlobalPermissionInfo::unsetCreateReleases()
{
    m_CreateReleasesIsSet = false;
}
bool GlobalPermissionInfo::isDeletePermanently() const
{
    return m_DeletePermanently;
}

void GlobalPermissionInfo::setDeletePermanently(bool value)
{
    m_DeletePermanently = value;
    m_DeletePermanentlyIsSet = true;
}

bool GlobalPermissionInfo::deletePermanentlyIsSet() const
{
    return m_DeletePermanentlyIsSet;
}

void GlobalPermissionInfo::unsetDeletePermanently()
{
    m_DeletePermanentlyIsSet = false;
}
bool GlobalPermissionInfo::isManageGuestUsers() const
{
    return m_ManageGuestUsers;
}

void GlobalPermissionInfo::setManageGuestUsers(bool value)
{
    m_ManageGuestUsers = value;
    m_ManageGuestUsersIsSet = true;
}

bool GlobalPermissionInfo::manageGuestUsersIsSet() const
{
    return m_ManageGuestUsersIsSet;
}

void GlobalPermissionInfo::unsetManageGuestUsers()
{
    m_ManageGuestUsersIsSet = false;
}
bool GlobalPermissionInfo::isManageRbac() const
{
    return m_ManageRbac;
}

void GlobalPermissionInfo::setManageRbac(bool value)
{
    m_ManageRbac = value;
    m_ManageRbacIsSet = true;
}

bool GlobalPermissionInfo::manageRbacIsSet() const
{
    return m_ManageRbacIsSet;
}

void GlobalPermissionInfo::unsetManageRbac()
{
    m_ManageRbacIsSet = false;
}
bool GlobalPermissionInfo::isManageUsers() const
{
    return m_ManageUsers;
}

void GlobalPermissionInfo::setManageUsers(bool value)
{
    m_ManageUsers = value;
    m_ManageUsersIsSet = true;
}

bool GlobalPermissionInfo::manageUsersIsSet() const
{
    return m_ManageUsersIsSet;
}

void GlobalPermissionInfo::unsetManageUsers()
{
    m_ManageUsersIsSet = false;
}
bool GlobalPermissionInfo::isShareForAnonymousAccess() const
{
    return m_ShareForAnonymousAccess;
}

void GlobalPermissionInfo::setShareForAnonymousAccess(bool value)
{
    m_ShareForAnonymousAccess = value;
    m_ShareForAnonymousAccessIsSet = true;
}

bool GlobalPermissionInfo::shareForAnonymousAccessIsSet() const
{
    return m_ShareForAnonymousAccessIsSet;
}

void GlobalPermissionInfo::unsetShareForAnonymousAccess()
{
    m_ShareForAnonymousAccessIsSet = false;
}
}
}
}
}


