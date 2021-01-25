/**
 * Upbit Open API
 * ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 *
 * OpenAPI spec version: 1.0.0
 * Contact: ujhin942@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SWGCurrency.h
 *
 * 화폐 정보
 */

#ifndef SWGCurrency_H_
#define SWGCurrency_H_

#include <QJsonObject>


#include <QList>
#include <QString>

#include "SWGObject.h"

namespace Swagger {

class SWGCurrency: public SWGObject {
public:
    SWGCurrency();
    SWGCurrency(QString json);
    ~SWGCurrency();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    SWGCurrency* fromJson(QString jsonString) override;

    QString* getCode();
    void setCode(QString* code);

    QString* getWithdrawFee();
    void setWithdrawFee(QString* withdraw_fee);

    bool isIsCoin();
    void setIsCoin(bool is_coin);

    QString* getWalletState();
    void setWalletState(QString* wallet_state);

    QList<QString*>* getWalletSupport();
    void setWalletSupport(QList<QString*>* wallet_support);


    virtual bool isSet() override;

private:
    QString* code;
    bool m_code_isSet;

    QString* withdraw_fee;
    bool m_withdraw_fee_isSet;

    bool is_coin;
    bool m_is_coin_isSet;

    QString* wallet_state;
    bool m_wallet_state_isSet;

    QList<QString*>* wallet_support;
    bool m_wallet_support_isSet;

};

}

#endif /* SWGCurrency_H_ */
