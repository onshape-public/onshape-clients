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



#include "BTPName_261_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTPName_261_allOf::BTPName_261_allOf()
{
    m_ImportMicroversion = utility::conversions::to_string_t("");
    m_ImportMicroversionIsSet = false;
    m_ForExport = false;
    m_ForExportIsSet = false;
    m_IdentifierIsSet = false;
    m_GlobalNamespace = false;
    m_GlobalNamespaceIsSet = false;
    m_r_namespaceIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTPName_261_allOf::~BTPName_261_allOf()
{
}

void BTPName_261_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTPName_261_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ImportMicroversionIsSet)
    {
        val[utility::conversions::to_string_t("importMicroversion")] = ModelBase::toJson(m_ImportMicroversion);
    }
    if(m_ForExportIsSet)
    {
        val[utility::conversions::to_string_t("forExport")] = ModelBase::toJson(m_ForExport);
    }
    if(m_IdentifierIsSet)
    {
        val[utility::conversions::to_string_t("identifier")] = ModelBase::toJson(m_Identifier);
    }
    if(m_GlobalNamespaceIsSet)
    {
        val[utility::conversions::to_string_t("globalNamespace")] = ModelBase::toJson(m_GlobalNamespace);
    }
    if(m_r_namespaceIsSet)
    {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(m_r_namespace);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTPName_261_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("importMicroversion")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("importMicroversion"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_importMicroversion;
            ok &= ModelBase::fromJson(fieldValue, refVal_importMicroversion);
            setImportMicroversion(refVal_importMicroversion);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("forExport")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("forExport"));
        if(!fieldValue.is_null())
        {
            bool refVal_forExport;
            ok &= ModelBase::fromJson(fieldValue, refVal_forExport);
            setForExport(refVal_forExport);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("identifier")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identifier"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPIdentifier_8> refVal_identifier;
            ok &= ModelBase::fromJson(fieldValue, refVal_identifier);
            setIdentifier(refVal_identifier);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("globalNamespace")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("globalNamespace"));
        if(!fieldValue.is_null())
        {
            bool refVal_globalNamespace;
            ok &= ModelBase::fromJson(fieldValue, refVal_globalNamespace);
            setGlobalNamespace(refVal_globalNamespace);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("namespace")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<BTPIdentifier_8>> refVal_namespace;
            ok &= ModelBase::fromJson(fieldValue, refVal_namespace);
            setRNamespace(refVal_namespace);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("btType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("btType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_btType;
            ok &= ModelBase::fromJson(fieldValue, refVal_btType);
            setBtType(refVal_btType);
        }
    }
    return ok;
}

void BTPName_261_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ImportMicroversionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("importMicroversion"), m_ImportMicroversion));
    }
    if(m_ForExportIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("forExport"), m_ForExport));
    }
    if(m_IdentifierIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("identifier"), m_Identifier));
    }
    if(m_GlobalNamespaceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("globalNamespace"), m_GlobalNamespace));
    }
    if(m_r_namespaceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("namespace"), m_r_namespace));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTPName_261_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("importMicroversion")))
    {
        utility::string_t refVal_importMicroversion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("importMicroversion")), refVal_importMicroversion );
        setImportMicroversion(refVal_importMicroversion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("forExport")))
    {
        bool refVal_forExport;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("forExport")), refVal_forExport );
        setForExport(refVal_forExport);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("identifier")))
    {
        std::shared_ptr<BTPIdentifier_8> refVal_identifier;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("identifier")), refVal_identifier );
        setIdentifier(refVal_identifier);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("globalNamespace")))
    {
        bool refVal_globalNamespace;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("globalNamespace")), refVal_globalNamespace );
        setGlobalNamespace(refVal_globalNamespace);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("namespace")))
    {
        std::vector<std::shared_ptr<BTPIdentifier_8>> refVal_namespace;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("namespace")), refVal_namespace );
        setRNamespace(refVal_namespace);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

utility::string_t BTPName_261_allOf::getImportMicroversion() const
{
    return m_ImportMicroversion;
}

void BTPName_261_allOf::setImportMicroversion(const utility::string_t& value)
{
    m_ImportMicroversion = value;
    m_ImportMicroversionIsSet = true;
}

bool BTPName_261_allOf::importMicroversionIsSet() const
{
    return m_ImportMicroversionIsSet;
}

void BTPName_261_allOf::unsetImportMicroversion()
{
    m_ImportMicroversionIsSet = false;
}
bool BTPName_261_allOf::isForExport() const
{
    return m_ForExport;
}

void BTPName_261_allOf::setForExport(bool value)
{
    m_ForExport = value;
    m_ForExportIsSet = true;
}

bool BTPName_261_allOf::forExportIsSet() const
{
    return m_ForExportIsSet;
}

void BTPName_261_allOf::unsetForExport()
{
    m_ForExportIsSet = false;
}
std::shared_ptr<BTPIdentifier_8> BTPName_261_allOf::getIdentifier() const
{
    return m_Identifier;
}

void BTPName_261_allOf::setIdentifier(const std::shared_ptr<BTPIdentifier_8>& value)
{
    m_Identifier = value;
    m_IdentifierIsSet = true;
}

bool BTPName_261_allOf::identifierIsSet() const
{
    return m_IdentifierIsSet;
}

void BTPName_261_allOf::unsetIdentifier()
{
    m_IdentifierIsSet = false;
}
bool BTPName_261_allOf::isGlobalNamespace() const
{
    return m_GlobalNamespace;
}

void BTPName_261_allOf::setGlobalNamespace(bool value)
{
    m_GlobalNamespace = value;
    m_GlobalNamespaceIsSet = true;
}

bool BTPName_261_allOf::globalNamespaceIsSet() const
{
    return m_GlobalNamespaceIsSet;
}

void BTPName_261_allOf::unsetGlobalNamespace()
{
    m_GlobalNamespaceIsSet = false;
}
std::vector<std::shared_ptr<BTPIdentifier_8>>& BTPName_261_allOf::getRNamespace()
{
    return m_r_namespace;
}

void BTPName_261_allOf::setRNamespace(const std::vector<std::shared_ptr<BTPIdentifier_8>>& value)
{
    m_r_namespace = value;
    m_r_namespaceIsSet = true;
}

bool BTPName_261_allOf::rNamespaceIsSet() const
{
    return m_r_namespaceIsSet;
}

void BTPName_261_allOf::unsetr_namespace()
{
    m_r_namespaceIsSet = false;
}
utility::string_t BTPName_261_allOf::getBtType() const
{
    return m_BtType;
}

void BTPName_261_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTPName_261_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTPName_261_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}


