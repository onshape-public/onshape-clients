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
 * BTOccurrence_74.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTOccurrence_74_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTOccurrence_74_H_


#include "../ModelBase.h"

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
class  BTOccurrence_74
    : public ModelBase
{
public:
    BTOccurrence_74();
    virtual ~BTOccurrence_74();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTOccurrence_74 members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBtType() const;
    bool btTypeIsSet() const;
    void unsetBtType();

    void setBtType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFullPathAsString() const;
    bool fullPathAsStringIsSet() const;
    void unsetFullPathAsString();

    void setFullPathAsString(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getHeadInstanceId() const;
    bool headInstanceIdIsSet() const;
    void unsetHeadInstanceId();

    void setHeadInstanceId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTOccurrence_74> getOccurrenceWithoutHead() const;
    bool occurrenceWithoutHeadIsSet() const;
    void unsetOccurrenceWithoutHead();

    void setOccurrenceWithoutHead(const std::shared_ptr<BTOccurrence_74>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTOccurrence_74> getOccurrenceWithoutTail() const;
    bool occurrenceWithoutTailIsSet() const;
    void unsetOccurrenceWithoutTail();

    void setOccurrenceWithoutTail(const std::shared_ptr<BTOccurrence_74>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTOccurrence_74> getParent() const;
    bool parentIsSet() const;
    void unsetParent();

    void setParent(const std::shared_ptr<BTOccurrence_74>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getPath();
    bool pathIsSet() const;
    void unsetPath();

    void setPath(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    bool isPatternDescendant() const;
    bool patternDescendantIsSet() const;
    void unsetPatternDescendant();

    void setPatternDescendant(bool value);

    /// <summary>
    /// 
    /// </summary>
    bool isRootOccurrence() const;
    bool rootOccurrenceIsSet() const;
    void unsetRootOccurrence();

    void setRootOccurrence(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTailInstanceId() const;
    bool tailInstanceIdIsSet() const;
    void unsetTailInstanceId();

    void setTailInstanceId(const utility::string_t& value);


protected:
    utility::string_t m_BtType;
    bool m_BtTypeIsSet;
    utility::string_t m_FullPathAsString;
    bool m_FullPathAsStringIsSet;
    utility::string_t m_HeadInstanceId;
    bool m_HeadInstanceIdIsSet;
    std::shared_ptr<BTOccurrence_74> m_OccurrenceWithoutHead;
    bool m_OccurrenceWithoutHeadIsSet;
    std::shared_ptr<BTOccurrence_74> m_OccurrenceWithoutTail;
    bool m_OccurrenceWithoutTailIsSet;
    std::shared_ptr<BTOccurrence_74> m_Parent;
    bool m_ParentIsSet;
    std::vector<utility::string_t> m_Path;
    bool m_PathIsSet;
    bool m_PatternDescendant;
    bool m_PatternDescendantIsSet;
    bool m_RootOccurrence;
    bool m_RootOccurrenceIsSet;
    utility::string_t m_TailInstanceId;
    bool m_TailInstanceIdIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTOccurrence_74_H_ */
