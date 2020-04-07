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



#include "BTExportTessellatedFacesBody_1321_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTExportTessellatedFacesBody_1321_allOf::BTExportTessellatedFacesBody_1321_allOf()
{
    m_FacesIsSet = false;
    m_BodyType = utility::conversions::to_string_t("");
    m_BodyTypeIsSet = false;
    m_AppearanceIsSet = false;
    m_FacetPointsIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTExportTessellatedFacesBody_1321_allOf::~BTExportTessellatedFacesBody_1321_allOf()
{
}

void BTExportTessellatedFacesBody_1321_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTExportTessellatedFacesBody_1321_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_FacesIsSet)
    {
        val[utility::conversions::to_string_t("faces")] = ModelBase::toJson(m_Faces);
    }
    if(m_BodyTypeIsSet)
    {
        val[utility::conversions::to_string_t("bodyType")] = ModelBase::toJson(m_BodyType);
    }
    if(m_AppearanceIsSet)
    {
        val[utility::conversions::to_string_t("appearance")] = ModelBase::toJson(m_Appearance);
    }
    if(m_FacetPointsIsSet)
    {
        val[utility::conversions::to_string_t("facetPoints")] = ModelBase::toJson(m_FacetPoints);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTExportTessellatedFacesBody_1321_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("faces")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("faces"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<BTExportTessellatedFacesFace_1192>> refVal_faces;
            ok &= ModelBase::fromJson(fieldValue, refVal_faces);
            setFaces(refVal_faces);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bodyType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bodyType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_bodyType;
            ok &= ModelBase::fromJson(fieldValue, refVal_bodyType);
            setBodyType(refVal_bodyType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("appearance")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("appearance"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTGraphicsAppearance_1152> refVal_appearance;
            ok &= ModelBase::fromJson(fieldValue, refVal_appearance);
            setAppearance(refVal_appearance);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("facetPoints")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("facetPoints"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<BTVector3d_389>> refVal_facetPoints;
            ok &= ModelBase::fromJson(fieldValue, refVal_facetPoints);
            setFacetPoints(refVal_facetPoints);
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

void BTExportTessellatedFacesBody_1321_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_FacesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("faces"), m_Faces));
    }
    if(m_BodyTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bodyType"), m_BodyType));
    }
    if(m_AppearanceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("appearance"), m_Appearance));
    }
    if(m_FacetPointsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("facetPoints"), m_FacetPoints));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTExportTessellatedFacesBody_1321_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("faces")))
    {
        std::vector<std::shared_ptr<BTExportTessellatedFacesFace_1192>> refVal_faces;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("faces")), refVal_faces );
        setFaces(refVal_faces);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("bodyType")))
    {
        utility::string_t refVal_bodyType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("bodyType")), refVal_bodyType );
        setBodyType(refVal_bodyType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("appearance")))
    {
        std::shared_ptr<BTGraphicsAppearance_1152> refVal_appearance;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("appearance")), refVal_appearance );
        setAppearance(refVal_appearance);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("facetPoints")))
    {
        std::vector<std::shared_ptr<BTVector3d_389>> refVal_facetPoints;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("facetPoints")), refVal_facetPoints );
        setFacetPoints(refVal_facetPoints);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

std::vector<std::shared_ptr<BTExportTessellatedFacesFace_1192>>& BTExportTessellatedFacesBody_1321_allOf::getFaces()
{
    return m_Faces;
}

void BTExportTessellatedFacesBody_1321_allOf::setFaces(const std::vector<std::shared_ptr<BTExportTessellatedFacesFace_1192>>& value)
{
    m_Faces = value;
    m_FacesIsSet = true;
}

bool BTExportTessellatedFacesBody_1321_allOf::facesIsSet() const
{
    return m_FacesIsSet;
}

void BTExportTessellatedFacesBody_1321_allOf::unsetFaces()
{
    m_FacesIsSet = false;
}
utility::string_t BTExportTessellatedFacesBody_1321_allOf::getBodyType() const
{
    return m_BodyType;
}

void BTExportTessellatedFacesBody_1321_allOf::setBodyType(const utility::string_t& value)
{
    m_BodyType = value;
    m_BodyTypeIsSet = true;
}

bool BTExportTessellatedFacesBody_1321_allOf::bodyTypeIsSet() const
{
    return m_BodyTypeIsSet;
}

void BTExportTessellatedFacesBody_1321_allOf::unsetBodyType()
{
    m_BodyTypeIsSet = false;
}
std::shared_ptr<BTGraphicsAppearance_1152> BTExportTessellatedFacesBody_1321_allOf::getAppearance() const
{
    return m_Appearance;
}

void BTExportTessellatedFacesBody_1321_allOf::setAppearance(const std::shared_ptr<BTGraphicsAppearance_1152>& value)
{
    m_Appearance = value;
    m_AppearanceIsSet = true;
}

bool BTExportTessellatedFacesBody_1321_allOf::appearanceIsSet() const
{
    return m_AppearanceIsSet;
}

void BTExportTessellatedFacesBody_1321_allOf::unsetAppearance()
{
    m_AppearanceIsSet = false;
}
std::vector<std::shared_ptr<BTVector3d_389>>& BTExportTessellatedFacesBody_1321_allOf::getFacetPoints()
{
    return m_FacetPoints;
}

void BTExportTessellatedFacesBody_1321_allOf::setFacetPoints(const std::vector<std::shared_ptr<BTVector3d_389>>& value)
{
    m_FacetPoints = value;
    m_FacetPointsIsSet = true;
}

bool BTExportTessellatedFacesBody_1321_allOf::facetPointsIsSet() const
{
    return m_FacetPointsIsSet;
}

void BTExportTessellatedFacesBody_1321_allOf::unsetFacetPoints()
{
    m_FacetPointsIsSet = false;
}
utility::string_t BTExportTessellatedFacesBody_1321_allOf::getBtType() const
{
    return m_BtType;
}

void BTExportTessellatedFacesBody_1321_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTExportTessellatedFacesBody_1321_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTExportTessellatedFacesBody_1321_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}


