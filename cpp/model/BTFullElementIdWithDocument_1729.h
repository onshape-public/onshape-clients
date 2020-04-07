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
 * BTFullElementIdWithDocument_1729.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTFullElementIdWithDocument_1729_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTFullElementIdWithDocument_1729_H_


#include "BTMicroversionId_366.h"
#include "BTMicroversionIdAndConfiguration_2338.h"
#include "BTFullElementIdWithDocument_1729_allOf.h"
#include "BTFullElementId_756.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTFullElementIdWithDocument_1729
    : public BTFullElementId_756
{
public:
    BTFullElementIdWithDocument_1729();
    virtual ~BTFullElementIdWithDocument_1729();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTFullElementIdWithDocument_1729 members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDocumentId() const;
    bool documentIdIsSet() const;
    void unsetDocumentId();

    void setDocumentId(const utility::string_t& value);


protected:
    utility::string_t m_DocumentId;
    bool m_DocumentIdIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTFullElementIdWithDocument_1729_H_ */
