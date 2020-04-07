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



#include "BTMSketch_151.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTMSketch_151::BTMSketch_151()
{
    m_EntitiesIsSet = false;
    m_ConstraintsIsSet = false;
}

BTMSketch_151::~BTMSketch_151()
{
}

void BTMSketch_151::validate()
{
    // TODO: implement validation
}

web::json::value BTMSketch_151::toJson() const
{
    web::json::value val = this->BTMFeature_134::toJson();
    
    if(m_EntitiesIsSet)
    {
        val[utility::conversions::to_string_t("entities")] = ModelBase::toJson(m_Entities);
    }
    if(m_ConstraintsIsSet)
    {
        val[utility::conversions::to_string_t("constraints")] = ModelBase::toJson(m_Constraints);
    }

    return val;
}

bool BTMSketch_151::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTMFeature_134::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t("entities")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entities"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<BTMSketchGeomEntity_5>> refVal_entities;
            ok &= ModelBase::fromJson(fieldValue, refVal_entities);
            setEntities(refVal_entities);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("constraints")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("constraints"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<BTMSketchConstraint_2>> refVal_constraints;
            ok &= ModelBase::fromJson(fieldValue, refVal_constraints);
            setConstraints(refVal_constraints);
        }
    }
    return ok;
}

void BTMSketch_151::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_FeatureIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("featureId"), m_FeatureId));
    }
    if(m_FeatureTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("featureType"), m_FeatureType));
    }
    if(m_ImportMicroversionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("importMicroversion"), m_ImportMicroversion));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_r_namespaceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("namespace"), m_r_namespace));
    }
    if(m_NodeIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nodeId"), m_NodeId));
    }
    if(m_ParametersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parameters"), m_Parameters));
    }
    if(m_ReturnAfterSubfeaturesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("returnAfterSubfeatures"), m_ReturnAfterSubfeatures));
    }
    if(m_SubFeaturesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("subFeatures"), m_SubFeatures));
    }
    if(m_SuppressedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("suppressed"), m_Suppressed));
    }
    if(m_EntitiesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("entities"), m_Entities));
    }
    if(m_ConstraintsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("constraints"), m_Constraints));
    }
}

bool BTMSketch_151::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("featureId")))
    {
        utility::string_t refVal_featureId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("featureId")), refVal_featureId );
        setFeatureId(refVal_featureId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("featureType")))
    {
        utility::string_t refVal_featureType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("featureType")), refVal_featureType );
        setFeatureType(refVal_featureType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("importMicroversion")))
    {
        utility::string_t refVal_importMicroversion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("importMicroversion")), refVal_importMicroversion );
        setImportMicroversion(refVal_importMicroversion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("namespace")))
    {
        utility::string_t refVal_namespace;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("namespace")), refVal_namespace );
        setRNamespace(refVal_namespace);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("nodeId")))
    {
        utility::string_t refVal_nodeId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("nodeId")), refVal_nodeId );
        setNodeId(refVal_nodeId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parameters")))
    {
        std::vector<std::shared_ptr<BTMParameter_1>> refVal_parameters;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parameters")), refVal_parameters );
        setParameters(refVal_parameters);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("returnAfterSubfeatures")))
    {
        bool refVal_returnAfterSubfeatures;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("returnAfterSubfeatures")), refVal_returnAfterSubfeatures );
        setReturnAfterSubfeatures(refVal_returnAfterSubfeatures);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("subFeatures")))
    {
        std::vector<std::shared_ptr<BTMFeature_134>> refVal_subFeatures;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("subFeatures")), refVal_subFeatures );
        setSubFeatures(refVal_subFeatures);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("suppressed")))
    {
        bool refVal_suppressed;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("suppressed")), refVal_suppressed );
        setSuppressed(refVal_suppressed);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("entities")))
    {
        std::vector<std::shared_ptr<BTMSketchGeomEntity_5>> refVal_entities;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("entities")), refVal_entities );
        setEntities(refVal_entities);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("constraints")))
    {
        std::vector<std::shared_ptr<BTMSketchConstraint_2>> refVal_constraints;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("constraints")), refVal_constraints );
        setConstraints(refVal_constraints);
    }
    return ok;
}

std::vector<std::shared_ptr<BTMSketchGeomEntity_5>>& BTMSketch_151::getEntities()
{
    return m_Entities;
}

void BTMSketch_151::setEntities(const std::vector<std::shared_ptr<BTMSketchGeomEntity_5>>& value)
{
    m_Entities = value;
    m_EntitiesIsSet = true;
}

bool BTMSketch_151::entitiesIsSet() const
{
    return m_EntitiesIsSet;
}

void BTMSketch_151::unsetEntities()
{
    m_EntitiesIsSet = false;
}
std::vector<std::shared_ptr<BTMSketchConstraint_2>>& BTMSketch_151::getConstraints()
{
    return m_Constraints;
}

void BTMSketch_151::setConstraints(const std::vector<std::shared_ptr<BTMSketchConstraint_2>>& value)
{
    m_Constraints = value;
    m_ConstraintsIsSet = true;
}

bool BTMSketch_151::constraintsIsSet() const
{
    return m_ConstraintsIsSet;
}

void BTMSketch_151::unsetConstraints()
{
    m_ConstraintsIsSet = false;
}
}
}
}
}


