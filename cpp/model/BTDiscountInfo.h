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
 * BTDiscountInfo.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTDiscountInfo_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTDiscountInfo_H_


#include "../ModelBase.h"

#include "BTUserSummaryInfo.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTDiscountInfo
    : public ModelBase
{
public:
    BTDiscountInfo();
    virtual ~BTDiscountInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTDiscountInfo members

    /// <summary>
    /// 
    /// </summary>
    int32_t getAccountBalance() const;
    bool accountBalanceIsSet() const;
    void unsetAccountBalance();

    void setAccountBalance(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getAmountOff() const;
    bool amountOffIsSet() const;
    void unsetAmountOff();

    void setAmountOff(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getCouponType() const;
    bool couponTypeIsSet() const;
    void unsetCouponType();

    void setCouponType(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getCouponValidMonths() const;
    bool couponValidMonthsIsSet() const;
    void unsetCouponValidMonths();

    void setCouponValidMonths(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreatedAt();

    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTUserSummaryInfo> getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetCreatedBy();

    void setCreatedBy(const std::shared_ptr<BTUserSummaryInfo>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getExpiresAt() const;
    bool expiresAtIsSet() const;
    void unsetExpiresAt();

    void setExpiresAt(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getHref() const;
    bool hrefIsSet() const;
    void unsetHref();

    void setHref(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

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
    utility::string_t getOwnerId() const;
    bool ownerIdIsSet() const;
    void unsetOwnerId();

    void setOwnerId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getPercentOff() const;
    bool percentOffIsSet() const;
    void unsetPercentOff();

    void setPercentOff(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPlanId() const;
    bool planIdIsSet() const;
    void unsetPlanId();

    void setPlanId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTrialEndDate() const;
    bool trialEndDateIsSet() const;
    void unsetTrialEndDate();

    void setTrialEndDate(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getUsedAt() const;
    bool usedAtIsSet() const;
    void unsetUsedAt();

    void setUsedAt(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getViewRef() const;
    bool viewRefIsSet() const;
    void unsetViewRef();

    void setViewRef(const utility::string_t& value);


protected:
    int32_t m_AccountBalance;
    bool m_AccountBalanceIsSet;
    int32_t m_AmountOff;
    bool m_AmountOffIsSet;
    int32_t m_CouponType;
    bool m_CouponTypeIsSet;
    int32_t m_CouponValidMonths;
    bool m_CouponValidMonthsIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
    std::shared_ptr<BTUserSummaryInfo> m_CreatedBy;
    bool m_CreatedByIsSet;
    utility::datetime m_ExpiresAt;
    bool m_ExpiresAtIsSet;
    utility::string_t m_Href;
    bool m_HrefIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_OwnerId;
    bool m_OwnerIdIsSet;
    int32_t m_PercentOff;
    bool m_PercentOffIsSet;
    utility::string_t m_PlanId;
    bool m_PlanIdIsSet;
    utility::string_t m_TrialEndDate;
    bool m_TrialEndDateIsSet;
    utility::datetime m_UsedAt;
    bool m_UsedAtIsSet;
    utility::string_t m_ViewRef;
    bool m_ViewRefIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTDiscountInfo_H_ */
