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
 * BTMIndividualCoEdgeQuery_1332.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTMIndividualCoEdgeQuery_1332_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTMIndividualCoEdgeQuery_1332_H_


#include "BTMIndividualQuery_138.h"
#include <cpprest/details/basic_types.h>
#include "BTMIndividualCoEdgeQuery_1332_allOf.h"
#include <vector>
#include "BTMIndividualQueryBase_139.h"
#include "BTPStatement_269.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTMIndividualCoEdgeQuery_1332
    : public BTMIndividualQuery_138
{
public:
    BTMIndividualCoEdgeQuery_1332();
    virtual ~BTMIndividualCoEdgeQuery_1332();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTMIndividualCoEdgeQuery_1332 members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTMIndividualQuery_138> getFaceQuery() const;
    bool faceQueryIsSet() const;
    void unsetFaceQuery();

    void setFaceQuery(const std::shared_ptr<BTMIndividualQuery_138>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTMIndividualQuery_138> getEdgeQuery() const;
    bool edgeQueryIsSet() const;
    void unsetEdgeQuery();

    void setEdgeQuery(const std::shared_ptr<BTMIndividualQuery_138>& value);


protected:
    std::shared_ptr<BTMIndividualQuery_138> m_FaceQuery;
    bool m_FaceQueryIsSet;
    std::shared_ptr<BTMIndividualQuery_138> m_EdgeQuery;
    bool m_EdgeQueryIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTMIndividualCoEdgeQuery_1332_H_ */
