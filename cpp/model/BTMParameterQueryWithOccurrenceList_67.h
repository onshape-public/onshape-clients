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
 * BTMParameterQueryWithOccurrenceList_67.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTMParameterQueryWithOccurrenceList_67_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTMParameterQueryWithOccurrenceList_67_H_


#include "BTMParameter_1.h"
#include "BTMParameterQueryWithOccurrenceList_67_allOf.h"
#include "BTMIndividualQueryWithOccurrenceBase_904.h"
#include "BTOccurrence_74.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTMParameterQueryWithOccurrenceList_67
    : public BTMParameter_1
{
public:
    BTMParameterQueryWithOccurrenceList_67();
    virtual ~BTMParameterQueryWithOccurrenceList_67();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTMParameterQueryWithOccurrenceList_67 members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTOccurrence_74>>& getOccurrences();
    bool occurrencesIsSet() const;
    void unsetOccurrences();

    void setOccurrences(const std::vector<std::shared_ptr<BTOccurrence_74>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTMIndividualQueryWithOccurrenceBase_904>>& getQueries();
    bool queriesIsSet() const;
    void unsetQueries();

    void setQueries(const std::vector<std::shared_ptr<BTMIndividualQueryWithOccurrenceBase_904>>& value);


protected:
    std::vector<std::shared_ptr<BTOccurrence_74>> m_Occurrences;
    bool m_OccurrencesIsSet;
    std::vector<std::shared_ptr<BTMIndividualQueryWithOccurrenceBase_904>> m_Queries;
    bool m_QueriesIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTMParameterQueryWithOccurrenceList_67_H_ */
