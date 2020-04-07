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
 * BTPTopLevelNode_286_allOf.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTPTopLevelNode_286_allOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTPTopLevelNode_286_allOf_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "BTPIdentifier_8.h"
#include "BTPSpace_10.h"
#include <vector>
#include "BTPAnnotation_231.h"
#include "BTPArgumentDeclaration_232.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTPTopLevelNode_286_allOf
    : public ModelBase
{
public:
    BTPTopLevelNode_286_allOf();
    virtual ~BTPTopLevelNode_286_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTPTopLevelNode_286_allOf members

    /// <summary>
    /// 
    /// </summary>
    bool isDeprecated() const;
    bool deprecatedIsSet() const;
    void unsetDeprecated();

    void setDeprecated(bool value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPIdentifier_8> getSymbolName() const;
    bool symbolNameIsSet() const;
    void unsetSymbolName();

    void setSymbolName(const std::shared_ptr<BTPIdentifier_8>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTPArgumentDeclaration_232>>& getArgumentsToDocument();
    bool argumentsToDocumentIsSet() const;
    void unsetArgumentsToDocument();

    void setArgumentsToDocument(const std::vector<std::shared_ptr<BTPArgumentDeclaration_232>>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDeprecatedExplanation() const;
    bool deprecatedExplanationIsSet() const;
    void unsetDeprecatedExplanation();

    void setDeprecatedExplanation(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isForExport() const;
    bool forExportIsSet() const;
    void unsetForExport();

    void setForExport(bool value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPSpace_10> getSpaceAfterExport() const;
    bool spaceAfterExportIsSet() const;
    void unsetSpaceAfterExport();

    void setSpaceAfterExport(const std::shared_ptr<BTPSpace_10>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPAnnotation_231> getAnnotation() const;
    bool annotationIsSet() const;
    void unsetAnnotation();

    void setAnnotation(const std::shared_ptr<BTPAnnotation_231>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBtType() const;
    bool btTypeIsSet() const;
    void unsetBtType();

    void setBtType(const utility::string_t& value);


protected:
    bool m_Deprecated;
    bool m_DeprecatedIsSet;
    std::shared_ptr<BTPIdentifier_8> m_SymbolName;
    bool m_SymbolNameIsSet;
    std::vector<std::shared_ptr<BTPArgumentDeclaration_232>> m_ArgumentsToDocument;
    bool m_ArgumentsToDocumentIsSet;
    utility::string_t m_DeprecatedExplanation;
    bool m_DeprecatedExplanationIsSet;
    bool m_ForExport;
    bool m_ForExportIsSet;
    std::shared_ptr<BTPSpace_10> m_SpaceAfterExport;
    bool m_SpaceAfterExportIsSet;
    std::shared_ptr<BTPAnnotation_231> m_Annotation;
    bool m_AnnotationIsSet;
    utility::string_t m_BtType;
    bool m_BtTypeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTPTopLevelNode_286_allOf_H_ */
