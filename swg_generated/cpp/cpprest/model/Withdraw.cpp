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



#include "Withdraw.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Withdraw::Withdraw()
{
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
    m_Uuid = utility::conversions::to_string_t("");
    m_UuidIsSet = false;
    m_Currency = utility::conversions::to_string_t("");
    m_CurrencyIsSet = false;
    m_Txid = utility::conversions::to_string_t("");
    m_TxidIsSet = false;
    m_State = utility::conversions::to_string_t("");
    m_StateIsSet = false;
    m_Created_at = utility::conversions::to_string_t("");
    m_Created_atIsSet = false;
    m_Done_at = utility::conversions::to_string_t("");
    m_Done_atIsSet = false;
    m_Amount = utility::conversions::to_string_t("");
    m_AmountIsSet = false;
    m_Fee = utility::conversions::to_string_t("");
    m_FeeIsSet = false;
    m_Transaction_type = utility::conversions::to_string_t("");
    m_Transaction_typeIsSet = false;
}

Withdraw::~Withdraw()
{
}

void Withdraw::validate()
{
    // TODO: implement validation
}

web::json::value Withdraw::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    }
    if(m_UuidIsSet)
    {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(m_Uuid);
    }
    if(m_CurrencyIsSet)
    {
        val[utility::conversions::to_string_t("currency")] = ModelBase::toJson(m_Currency);
    }
    if(m_TxidIsSet)
    {
        val[utility::conversions::to_string_t("txid")] = ModelBase::toJson(m_Txid);
    }
    if(m_StateIsSet)
    {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(m_State);
    }
    if(m_Created_atIsSet)
    {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(m_Created_at);
    }
    if(m_Done_atIsSet)
    {
        val[utility::conversions::to_string_t("done_at")] = ModelBase::toJson(m_Done_at);
    }
    if(m_AmountIsSet)
    {
        val[utility::conversions::to_string_t("amount")] = ModelBase::toJson(m_Amount);
    }
    if(m_FeeIsSet)
    {
        val[utility::conversions::to_string_t("fee")] = ModelBase::toJson(m_Fee);
    }
    if(m_Transaction_typeIsSet)
    {
        val[utility::conversions::to_string_t("transaction_type")] = ModelBase::toJson(m_Transaction_type);
    }

    return val;
}

void Withdraw::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("type")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("type")];
        if(!fieldValue.is_null())
        {
            setType(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uuid")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("uuid")];
        if(!fieldValue.is_null())
        {
            setUuid(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("currency")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("currency")];
        if(!fieldValue.is_null())
        {
            setCurrency(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("txid")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("txid")];
        if(!fieldValue.is_null())
        {
            setTxid(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("state")];
        if(!fieldValue.is_null())
        {
            setState(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("created_at")];
        if(!fieldValue.is_null())
        {
            setCreatedAt(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("done_at")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("done_at")];
        if(!fieldValue.is_null())
        {
            setDoneAt(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("amount")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("amount")];
        if(!fieldValue.is_null())
        {
            setAmount(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fee")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("fee")];
        if(!fieldValue.is_null())
        {
            setFee(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transaction_type")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("transaction_type")];
        if(!fieldValue.is_null())
        {
            setTransactionType(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void Withdraw::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
        
    }
    if(m_UuidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("uuid"), m_Uuid));
        
    }
    if(m_CurrencyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("currency"), m_Currency));
        
    }
    if(m_TxidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("txid"), m_Txid));
        
    }
    if(m_StateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("state"), m_State));
        
    }
    if(m_Created_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("created_at"), m_Created_at));
        
    }
    if(m_Done_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("done_at"), m_Done_at));
        
    }
    if(m_AmountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("amount"), m_Amount));
        
    }
    if(m_FeeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fee"), m_Fee));
        
    }
    if(m_Transaction_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("transaction_type"), m_Transaction_type));
        
    }
}

void Withdraw::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("type")))
    {
        setType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("type"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("uuid")))
    {
        setUuid(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("uuid"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("currency")))
    {
        setCurrency(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("currency"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("txid")))
    {
        setTxid(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("txid"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("state")))
    {
        setState(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("state"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("created_at")))
    {
        setCreatedAt(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("created_at"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("done_at")))
    {
        setDoneAt(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("done_at"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("amount")))
    {
        setAmount(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("amount"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fee")))
    {
        setFee(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("fee"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("transaction_type")))
    {
        setTransactionType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("transaction_type"))));
    }
}

utility::string_t Withdraw::getType() const
{
    return m_Type;
}


void Withdraw::setType(utility::string_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool Withdraw::typeIsSet() const
{
    return m_TypeIsSet;
}

void Withdraw::unsetType()
{
    m_TypeIsSet = false;
}

utility::string_t Withdraw::getUuid() const
{
    return m_Uuid;
}


void Withdraw::setUuid(utility::string_t value)
{
    m_Uuid = value;
    m_UuidIsSet = true;
}
bool Withdraw::uuidIsSet() const
{
    return m_UuidIsSet;
}

void Withdraw::unsetUuid()
{
    m_UuidIsSet = false;
}

utility::string_t Withdraw::getCurrency() const
{
    return m_Currency;
}


void Withdraw::setCurrency(utility::string_t value)
{
    m_Currency = value;
    m_CurrencyIsSet = true;
}
bool Withdraw::currencyIsSet() const
{
    return m_CurrencyIsSet;
}

void Withdraw::unsetCurrency()
{
    m_CurrencyIsSet = false;
}

utility::string_t Withdraw::getTxid() const
{
    return m_Txid;
}


void Withdraw::setTxid(utility::string_t value)
{
    m_Txid = value;
    m_TxidIsSet = true;
}
bool Withdraw::txidIsSet() const
{
    return m_TxidIsSet;
}

void Withdraw::unsetTxid()
{
    m_TxidIsSet = false;
}

utility::string_t Withdraw::getState() const
{
    return m_State;
}


void Withdraw::setState(utility::string_t value)
{
    m_State = value;
    m_StateIsSet = true;
}
bool Withdraw::stateIsSet() const
{
    return m_StateIsSet;
}

void Withdraw::unsetState()
{
    m_StateIsSet = false;
}

utility::string_t Withdraw::getCreatedAt() const
{
    return m_Created_at;
}


void Withdraw::setCreatedAt(utility::string_t value)
{
    m_Created_at = value;
    m_Created_atIsSet = true;
}
bool Withdraw::createdAtIsSet() const
{
    return m_Created_atIsSet;
}

void Withdraw::unsetCreated_at()
{
    m_Created_atIsSet = false;
}

utility::string_t Withdraw::getDoneAt() const
{
    return m_Done_at;
}


void Withdraw::setDoneAt(utility::string_t value)
{
    m_Done_at = value;
    m_Done_atIsSet = true;
}
bool Withdraw::doneAtIsSet() const
{
    return m_Done_atIsSet;
}

void Withdraw::unsetDone_at()
{
    m_Done_atIsSet = false;
}

utility::string_t Withdraw::getAmount() const
{
    return m_Amount;
}


void Withdraw::setAmount(utility::string_t value)
{
    m_Amount = value;
    m_AmountIsSet = true;
}
bool Withdraw::amountIsSet() const
{
    return m_AmountIsSet;
}

void Withdraw::unsetAmount()
{
    m_AmountIsSet = false;
}

utility::string_t Withdraw::getFee() const
{
    return m_Fee;
}


void Withdraw::setFee(utility::string_t value)
{
    m_Fee = value;
    m_FeeIsSet = true;
}
bool Withdraw::feeIsSet() const
{
    return m_FeeIsSet;
}

void Withdraw::unsetFee()
{
    m_FeeIsSet = false;
}

utility::string_t Withdraw::getTransactionType() const
{
    return m_Transaction_type;
}


void Withdraw::setTransactionType(utility::string_t value)
{
    m_Transaction_type = value;
    m_Transaction_typeIsSet = true;
}
bool Withdraw::transactionTypeIsSet() const
{
    return m_Transaction_typeIsSet;
}

void Withdraw::unsetTransaction_type()
{
    m_Transaction_typeIsSet = false;
}

}
}
}
}

