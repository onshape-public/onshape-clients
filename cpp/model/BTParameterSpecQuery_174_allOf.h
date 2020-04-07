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
 * BTParameterSpecQuery_174_allOf.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTParameterSpecQuery_174_allOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTParameterSpecQuery_174_allOf_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "BTQueryFilter_183.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTParameterSpecQuery_174_allOf
    : public ModelBase
{
public:
    BTParameterSpecQuery_174_allOf();
    virtual ~BTParameterSpecQuery_174_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTParameterSpecQuery_174_allOf members

    /// <summary>
    /// 
    /// </summary>
    int32_t getMaxNumberOfPicks() const;
    bool maxNumberOfPicksIsSet() const;
    void unsetMaxNumberOfPicks();

    void setMaxNumberOfPicks(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTQueryFilter_183> getAdditionalBoxSelectFilter() const;
    bool additionalBoxSelectFilterIsSet() const;
    void unsetAdditionalBoxSelectFilter();

    void setAdditionalBoxSelectFilter(const std::shared_ptr<BTQueryFilter_183>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTQueryFilter_183> getFilter() const;
    bool filterIsSet() const;
    void unsetFilter();

    void setFilter(const std::shared_ptr<BTQueryFilter_183>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBtType() const;
    bool btTypeIsSet() const;
    void unsetBtType();

    void setBtType(const utility::string_t& value);


protected:
    int32_t m_MaxNumberOfPicks;
    bool m_MaxNumberOfPicksIsSet;
    std::shared_ptr<BTQueryFilter_183> m_AdditionalBoxSelectFilter;
    bool m_AdditionalBoxSelectFilterIsSet;
    std::shared_ptr<BTQueryFilter_183> m_Filter;
    bool m_FilterIsSet;
    utility::string_t m_BtType;
    bool m_BtTypeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTParameterSpecQuery_174_allOf_H_ */
