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

/*
 * BTMAssemblyFeature_887.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTMAssemblyFeature_887_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTMAssemblyFeature_887_H_


#include "BTMAssemblyFeature_887_allOf.h"
#include "BTMParameter_1.h"
#include "BTMIndividualQueryWithOccurrenceBase_904.h"
#include <cpprest/details/basic_types.h>
#include "BTMFeature_134.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTMAssemblyFeature_887
    : public BTMFeature_134
{
public:
    BTMAssemblyFeature_887();
    virtual ~BTMAssemblyFeature_887();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTMAssemblyFeature_887 members

    /// <summary>
    /// 
    /// </summary>
    bool isAuxiliaryAssemblyFeature() const;
    bool auxiliaryAssemblyFeatureIsSet() const;
    void unsetAuxiliaryAssemblyFeature();

    void setAuxiliaryAssemblyFeature(bool value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getFeatureListFieldIndex() const;
    bool featureListFieldIndexIsSet() const;
    void unsetFeatureListFieldIndex();

    void setFeatureListFieldIndex(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTMIndividualQueryWithOccurrenceBase_904>>& getOccurrenceQueriesFromAllConfigurations();
    bool occurrenceQueriesFromAllConfigurationsIsSet() const;
    void unsetOccurrenceQueriesFromAllConfigurations();

    void setOccurrenceQueriesFromAllConfigurations(const std::vector<std::shared_ptr<BTMIndividualQueryWithOccurrenceBase_904>>& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getVersion() const;
    bool versionIsSet() const;
    void unsetVersion();

    void setVersion(int32_t value);


protected:
    bool m_AuxiliaryAssemblyFeature;
    bool m_AuxiliaryAssemblyFeatureIsSet;
    int32_t m_FeatureListFieldIndex;
    bool m_FeatureListFieldIndexIsSet;
    std::vector<std::shared_ptr<BTMIndividualQueryWithOccurrenceBase_904>> m_OccurrenceQueriesFromAllConfigurations;
    bool m_OccurrenceQueriesFromAllConfigurationsIsSet;
    int32_t m_Version;
    bool m_VersionIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTMAssemblyFeature_887_H_ */
