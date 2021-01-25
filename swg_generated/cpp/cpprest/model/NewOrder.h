/**
 * Upbit Open API
 * ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 *
 * OpenAPI spec version: 1.0.0
 * Contact: ujhin942@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.18.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * NewOrder.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_NewOrder_H_
#define IO_SWAGGER_CLIENT_MODEL_NewOrder_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  NewOrder
    : public ModelBase
{
public:
    NewOrder();
    virtual ~NewOrder();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// NewOrder members

    /// <summary>
    /// 주문의 고유 아이디
    /// </summary>
    utility::string_t getUuid() const;
    bool uuidIsSet() const;
    void unsetUuid();
    void setUuid(utility::string_t value);
    /// <summary>
    /// 주문 종류
    /// </summary>
    utility::string_t getSide() const;
    bool sideIsSet() const;
    void unsetSide();
    void setSide(utility::string_t value);
    /// <summary>
    /// 주문 방식
    /// </summary>
    utility::string_t getOrdType() const;
    bool ordTypeIsSet() const;
    void unsetOrd_type();
    void setOrdType(utility::string_t value);
    /// <summary>
    /// 주문 당시 화폐 가격
    /// </summary>
    utility::string_t getPrice() const;
    bool priceIsSet() const;
    void unsetPrice();
    void setPrice(utility::string_t value);
    /// <summary>
    /// 체결 가격의 평균가
    /// </summary>
    utility::string_t getAvgPrice() const;
    bool avgPriceIsSet() const;
    void unsetAvg_price();
    void setAvgPrice(utility::string_t value);
    /// <summary>
    /// 주문 상태
    /// </summary>
    utility::string_t getState() const;
    bool stateIsSet() const;
    void unsetState();
    void setState(utility::string_t value);
    /// <summary>
    /// 마켓의 유일키
    /// </summary>
    utility::string_t getMarket() const;
    bool marketIsSet() const;
    void unsetMarket();
    void setMarket(utility::string_t value);
    /// <summary>
    /// 주문 생성 시간
    /// </summary>
    utility::string_t getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreated_at();
    void setCreatedAt(utility::string_t value);
    /// <summary>
    /// 사용자가 입력한 주문 양
    /// </summary>
    utility::string_t getVolume() const;
    bool volumeIsSet() const;
    void unsetVolume();
    void setVolume(utility::string_t value);
    /// <summary>
    /// 체결 후 남은 주문 양
    /// </summary>
    utility::string_t getRemainingVolume() const;
    bool remainingVolumeIsSet() const;
    void unsetRemaining_volume();
    void setRemainingVolume(utility::string_t value);
    /// <summary>
    /// 수수료로 예약된 비용
    /// </summary>
    utility::string_t getReservedFee() const;
    bool reservedFeeIsSet() const;
    void unsetReserved_fee();
    void setReservedFee(utility::string_t value);
    /// <summary>
    /// 남은 수수료
    /// </summary>
    utility::string_t getRemainingFee() const;
    bool remainingFeeIsSet() const;
    void unsetRemaining_fee();
    void setRemainingFee(utility::string_t value);
    /// <summary>
    /// 사용된 수수료
    /// </summary>
    utility::string_t getPaidFee() const;
    bool paidFeeIsSet() const;
    void unsetPaid_fee();
    void setPaidFee(utility::string_t value);
    /// <summary>
    /// 거래에 사용중인 비용
    /// </summary>
    utility::string_t getLocked() const;
    bool lockedIsSet() const;
    void unsetLocked();
    void setLocked(utility::string_t value);
    /// <summary>
    /// 체결된 양
    /// </summary>
    utility::string_t getExecutedVolume() const;
    bool executedVolumeIsSet() const;
    void unsetExecuted_volume();
    void setExecutedVolume(utility::string_t value);
    /// <summary>
    /// 해당 주문에 걸린 체결 수
    /// </summary>
    double getTradesCount() const;
    bool tradesCountIsSet() const;
    void unsetTrades_count();
    void setTradesCount(double value);

protected:
    utility::string_t m_Uuid;
    bool m_UuidIsSet;
    utility::string_t m_Side;
    bool m_SideIsSet;
    utility::string_t m_Ord_type;
    bool m_Ord_typeIsSet;
    utility::string_t m_Price;
    bool m_PriceIsSet;
    utility::string_t m_Avg_price;
    bool m_Avg_priceIsSet;
    utility::string_t m_State;
    bool m_StateIsSet;
    utility::string_t m_Market;
    bool m_MarketIsSet;
    utility::string_t m_Created_at;
    bool m_Created_atIsSet;
    utility::string_t m_Volume;
    bool m_VolumeIsSet;
    utility::string_t m_Remaining_volume;
    bool m_Remaining_volumeIsSet;
    utility::string_t m_Reserved_fee;
    bool m_Reserved_feeIsSet;
    utility::string_t m_Remaining_fee;
    bool m_Remaining_feeIsSet;
    utility::string_t m_Paid_fee;
    bool m_Paid_feeIsSet;
    utility::string_t m_Locked;
    bool m_LockedIsSet;
    utility::string_t m_Executed_volume;
    bool m_Executed_volumeIsSet;
    double m_Trades_count;
    bool m_Trades_countIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_NewOrder_H_ */
