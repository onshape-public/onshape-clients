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
 * BTWorkspacePartParams.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTWorkspacePartParams_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTWorkspacePartParams_H_


#include "../ModelBase.h"

#include "BTMaterialParams.h"
#include "BTCustomPropertyDefinitionParams.h"
#include "BTNameValuePair.h"
#include "BTPartAppearanceParams.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTWorkspacePartParams
    : public ModelBase
{
public:
    BTWorkspacePartParams();
    virtual ~BTWorkspacePartParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTWorkspacePartParams members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPartAppearanceParams> getAppearance() const;
    bool appearanceIsSet() const;
    void unsetAppearance();

    void setAppearance(const std::shared_ptr<BTPartAppearanceParams>& value);

    /// <summary>
    /// 
    /// </summary>
    bool isApplyUpdateToAllConfigurations() const;
    bool applyUpdateToAllConfigurationsIsSet() const;
    void unsetApplyUpdateToAllConfigurations();

    void setApplyUpdateToAllConfigurations(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getConfiguration() const;
    bool configurationIsSet() const;
    void unsetConfiguration();

    void setConfiguration(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getConnectionId() const;
    bool connectionIdIsSet() const;
    void unsetConnectionId();

    void setConnectionId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTNameValuePair>>& getCustomProperties();
    bool customPropertiesIsSet() const;
    void unsetCustomProperties();

    void setCustomProperties(const std::vector<std::shared_ptr<BTNameValuePair>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTCustomPropertyDefinitionParams>>& getCustomPropertyDefinitions();
    bool customPropertyDefinitionsIsSet() const;
    void unsetCustomPropertyDefinitions();

    void setCustomPropertyDefinitions(const std::vector<std::shared_ptr<BTCustomPropertyDefinitionParams>>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();

    void setDescription(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getElementId() const;
    bool elementIdIsSet() const;
    void unsetElementId();

    void setElementId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTMaterialParams> getMaterial() const;
    bool materialIsSet() const;
    void unsetMaterial();

    void setMaterial(const std::shared_ptr<BTMaterialParams>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPartId() const;
    bool partIdIsSet() const;
    void unsetPartId();

    void setPartId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPartNumber() const;
    bool partNumberIsSet() const;
    void unsetPartNumber();

    void setPartNumber(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getProductLine() const;
    bool productLineIsSet() const;
    void unsetProductLine();

    void setProductLine(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getProject() const;
    bool projectIsSet() const;
    void unsetProject();

    void setProject(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRevision() const;
    bool revisionIsSet() const;
    void unsetRevision();

    void setRevision(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTitle1() const;
    bool title1IsSet() const;
    void unsetTitle1();

    void setTitle1(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTitle2() const;
    bool title2IsSet() const;
    void unsetTitle2();

    void setTitle2(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTitle3() const;
    bool title3IsSet() const;
    void unsetTitle3();

    void setTitle3(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getVendor() const;
    bool vendorIsSet() const;
    void unsetVendor();

    void setVendor(const utility::string_t& value);


protected:
    std::shared_ptr<BTPartAppearanceParams> m_Appearance;
    bool m_AppearanceIsSet;
    bool m_ApplyUpdateToAllConfigurations;
    bool m_ApplyUpdateToAllConfigurationsIsSet;
    utility::string_t m_Configuration;
    bool m_ConfigurationIsSet;
    utility::string_t m_ConnectionId;
    bool m_ConnectionIdIsSet;
    std::vector<std::shared_ptr<BTNameValuePair>> m_CustomProperties;
    bool m_CustomPropertiesIsSet;
    std::vector<std::shared_ptr<BTCustomPropertyDefinitionParams>> m_CustomPropertyDefinitions;
    bool m_CustomPropertyDefinitionsIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    utility::string_t m_ElementId;
    bool m_ElementIdIsSet;
    std::shared_ptr<BTMaterialParams> m_Material;
    bool m_MaterialIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_PartId;
    bool m_PartIdIsSet;
    utility::string_t m_PartNumber;
    bool m_PartNumberIsSet;
    utility::string_t m_ProductLine;
    bool m_ProductLineIsSet;
    utility::string_t m_Project;
    bool m_ProjectIsSet;
    utility::string_t m_Revision;
    bool m_RevisionIsSet;
    utility::string_t m_Title1;
    bool m_Title1IsSet;
    utility::string_t m_Title2;
    bool m_Title2IsSet;
    utility::string_t m_Title3;
    bool m_Title3IsSet;
    utility::string_t m_Vendor;
    bool m_VendorIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTWorkspacePartParams_H_ */
