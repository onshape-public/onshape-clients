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



#include "BTCacheDataPath_191.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTCacheDataPath_191::BTCacheDataPath_191()
{
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
    m_DocumentId = utility::conversions::to_string_t("");
    m_DocumentIdIsSet = false;
    m_ElementId = utility::conversions::to_string_t("");
    m_ElementIdIsSet = false;
    m_ExpireSecs = utility::conversions::to_string_t("");
    m_ExpireSecsIsSet = false;
    m_FullFilePath = utility::conversions::to_string_t("");
    m_FullFilePathIsSet = false;
    m_IsPersisted = false;
    m_IsPersistedIsSet = false;
    m_Key = utility::conversions::to_string_t("");
    m_KeyIsSet = false;
    m_UrlPath = utility::conversions::to_string_t("");
    m_UrlPathIsSet = false;
    m_UseLocalFileCache = false;
    m_UseLocalFileCacheIsSet = false;
}

BTCacheDataPath_191::~BTCacheDataPath_191()
{
}

void BTCacheDataPath_191::validate()
{
    // TODO: implement validation
}

web::json::value BTCacheDataPath_191::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }
    if(m_DocumentIdIsSet)
    {
        val[utility::conversions::to_string_t("documentId")] = ModelBase::toJson(m_DocumentId);
    }
    if(m_ElementIdIsSet)
    {
        val[utility::conversions::to_string_t("elementId")] = ModelBase::toJson(m_ElementId);
    }
    if(m_ExpireSecsIsSet)
    {
        val[utility::conversions::to_string_t("expireSecs")] = ModelBase::toJson(m_ExpireSecs);
    }
    if(m_FullFilePathIsSet)
    {
        val[utility::conversions::to_string_t("fullFilePath")] = ModelBase::toJson(m_FullFilePath);
    }
    if(m_IsPersistedIsSet)
    {
        val[utility::conversions::to_string_t("isPersisted")] = ModelBase::toJson(m_IsPersisted);
    }
    if(m_KeyIsSet)
    {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(m_Key);
    }
    if(m_UrlPathIsSet)
    {
        val[utility::conversions::to_string_t("urlPath")] = ModelBase::toJson(m_UrlPath);
    }
    if(m_UseLocalFileCacheIsSet)
    {
        val[utility::conversions::to_string_t("useLocalFileCache")] = ModelBase::toJson(m_UseLocalFileCache);
    }

    return val;
}

bool BTCacheDataPath_191::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("documentId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("documentId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_documentId;
            ok &= ModelBase::fromJson(fieldValue, refVal_documentId);
            setDocumentId(refVal_documentId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("elementId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elementId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_elementId;
            ok &= ModelBase::fromJson(fieldValue, refVal_elementId);
            setElementId(refVal_elementId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expireSecs")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expireSecs"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_expireSecs;
            ok &= ModelBase::fromJson(fieldValue, refVal_expireSecs);
            setExpireSecs(refVal_expireSecs);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fullFilePath")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fullFilePath"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_fullFilePath;
            ok &= ModelBase::fromJson(fieldValue, refVal_fullFilePath);
            setFullFilePath(refVal_fullFilePath);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isPersisted")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isPersisted"));
        if(!fieldValue.is_null())
        {
            bool refVal_isPersisted;
            ok &= ModelBase::fromJson(fieldValue, refVal_isPersisted);
            setIsPersisted(refVal_isPersisted);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_key;
            ok &= ModelBase::fromJson(fieldValue, refVal_key);
            setKey(refVal_key);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("urlPath")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("urlPath"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_urlPath;
            ok &= ModelBase::fromJson(fieldValue, refVal_urlPath);
            setUrlPath(refVal_urlPath);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("useLocalFileCache")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("useLocalFileCache"));
        if(!fieldValue.is_null())
        {
            bool refVal_useLocalFileCache;
            ok &= ModelBase::fromJson(fieldValue, refVal_useLocalFileCache);
            setUseLocalFileCache(refVal_useLocalFileCache);
        }
    }
    return ok;
}

void BTCacheDataPath_191::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
    if(m_DocumentIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("documentId"), m_DocumentId));
    }
    if(m_ElementIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("elementId"), m_ElementId));
    }
    if(m_ExpireSecsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("expireSecs"), m_ExpireSecs));
    }
    if(m_FullFilePathIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fullFilePath"), m_FullFilePath));
    }
    if(m_IsPersistedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isPersisted"), m_IsPersisted));
    }
    if(m_KeyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("key"), m_Key));
    }
    if(m_UrlPathIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("urlPath"), m_UrlPath));
    }
    if(m_UseLocalFileCacheIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("useLocalFileCache"), m_UseLocalFileCache));
    }
}

bool BTCacheDataPath_191::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("documentId")))
    {
        utility::string_t refVal_documentId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("documentId")), refVal_documentId );
        setDocumentId(refVal_documentId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("elementId")))
    {
        utility::string_t refVal_elementId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("elementId")), refVal_elementId );
        setElementId(refVal_elementId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("expireSecs")))
    {
        utility::string_t refVal_expireSecs;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("expireSecs")), refVal_expireSecs );
        setExpireSecs(refVal_expireSecs);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fullFilePath")))
    {
        utility::string_t refVal_fullFilePath;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fullFilePath")), refVal_fullFilePath );
        setFullFilePath(refVal_fullFilePath);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("isPersisted")))
    {
        bool refVal_isPersisted;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("isPersisted")), refVal_isPersisted );
        setIsPersisted(refVal_isPersisted);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("key")))
    {
        utility::string_t refVal_key;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("key")), refVal_key );
        setKey(refVal_key);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("urlPath")))
    {
        utility::string_t refVal_urlPath;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("urlPath")), refVal_urlPath );
        setUrlPath(refVal_urlPath);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("useLocalFileCache")))
    {
        bool refVal_useLocalFileCache;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("useLocalFileCache")), refVal_useLocalFileCache );
        setUseLocalFileCache(refVal_useLocalFileCache);
    }
    return ok;
}

utility::string_t BTCacheDataPath_191::getBtType() const
{
    return m_BtType;
}

void BTCacheDataPath_191::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTCacheDataPath_191::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTCacheDataPath_191::unsetBtType()
{
    m_BtTypeIsSet = false;
}
utility::string_t BTCacheDataPath_191::getDocumentId() const
{
    return m_DocumentId;
}

void BTCacheDataPath_191::setDocumentId(const utility::string_t& value)
{
    m_DocumentId = value;
    m_DocumentIdIsSet = true;
}

bool BTCacheDataPath_191::documentIdIsSet() const
{
    return m_DocumentIdIsSet;
}

void BTCacheDataPath_191::unsetDocumentId()
{
    m_DocumentIdIsSet = false;
}
utility::string_t BTCacheDataPath_191::getElementId() const
{
    return m_ElementId;
}

void BTCacheDataPath_191::setElementId(const utility::string_t& value)
{
    m_ElementId = value;
    m_ElementIdIsSet = true;
}

bool BTCacheDataPath_191::elementIdIsSet() const
{
    return m_ElementIdIsSet;
}

void BTCacheDataPath_191::unsetElementId()
{
    m_ElementIdIsSet = false;
}
utility::string_t BTCacheDataPath_191::getExpireSecs() const
{
    return m_ExpireSecs;
}

void BTCacheDataPath_191::setExpireSecs(const utility::string_t& value)
{
    m_ExpireSecs = value;
    m_ExpireSecsIsSet = true;
}

bool BTCacheDataPath_191::expireSecsIsSet() const
{
    return m_ExpireSecsIsSet;
}

void BTCacheDataPath_191::unsetExpireSecs()
{
    m_ExpireSecsIsSet = false;
}
utility::string_t BTCacheDataPath_191::getFullFilePath() const
{
    return m_FullFilePath;
}

void BTCacheDataPath_191::setFullFilePath(const utility::string_t& value)
{
    m_FullFilePath = value;
    m_FullFilePathIsSet = true;
}

bool BTCacheDataPath_191::fullFilePathIsSet() const
{
    return m_FullFilePathIsSet;
}

void BTCacheDataPath_191::unsetFullFilePath()
{
    m_FullFilePathIsSet = false;
}
bool BTCacheDataPath_191::isIsPersisted() const
{
    return m_IsPersisted;
}

void BTCacheDataPath_191::setIsPersisted(bool value)
{
    m_IsPersisted = value;
    m_IsPersistedIsSet = true;
}

bool BTCacheDataPath_191::isPersistedIsSet() const
{
    return m_IsPersistedIsSet;
}

void BTCacheDataPath_191::unsetIsPersisted()
{
    m_IsPersistedIsSet = false;
}
utility::string_t BTCacheDataPath_191::getKey() const
{
    return m_Key;
}

void BTCacheDataPath_191::setKey(const utility::string_t& value)
{
    m_Key = value;
    m_KeyIsSet = true;
}

bool BTCacheDataPath_191::keyIsSet() const
{
    return m_KeyIsSet;
}

void BTCacheDataPath_191::unsetKey()
{
    m_KeyIsSet = false;
}
utility::string_t BTCacheDataPath_191::getUrlPath() const
{
    return m_UrlPath;
}

void BTCacheDataPath_191::setUrlPath(const utility::string_t& value)
{
    m_UrlPath = value;
    m_UrlPathIsSet = true;
}

bool BTCacheDataPath_191::urlPathIsSet() const
{
    return m_UrlPathIsSet;
}

void BTCacheDataPath_191::unsetUrlPath()
{
    m_UrlPathIsSet = false;
}
bool BTCacheDataPath_191::isUseLocalFileCache() const
{
    return m_UseLocalFileCache;
}

void BTCacheDataPath_191::setUseLocalFileCache(bool value)
{
    m_UseLocalFileCache = value;
    m_UseLocalFileCacheIsSet = true;
}

bool BTCacheDataPath_191::useLocalFileCacheIsSet() const
{
    return m_UseLocalFileCacheIsSet;
}

void BTCacheDataPath_191::unsetUseLocalFileCache()
{
    m_UseLocalFileCacheIsSet = false;
}
}
}
}
}


