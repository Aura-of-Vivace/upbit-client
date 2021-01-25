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



#include "Bid.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Bid::Bid()
{
    m_Currency = utility::conversions::to_string_t("");
    m_CurrencyIsSet = false;
    m_Price_unit = utility::conversions::to_string_t("");
    m_Price_unitIsSet = false;
    m_Min_total = 0.0;
    m_Min_totalIsSet = false;
}

Bid::~Bid()
{
}

void Bid::validate()
{
    // TODO: implement validation
}

web::json::value Bid::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_CurrencyIsSet)
    {
        val[utility::conversions::to_string_t("currency")] = ModelBase::toJson(m_Currency);
    }
    if(m_Price_unitIsSet)
    {
        val[utility::conversions::to_string_t("price_unit")] = ModelBase::toJson(m_Price_unit);
    }
    if(m_Min_totalIsSet)
    {
        val[utility::conversions::to_string_t("min_total")] = ModelBase::toJson(m_Min_total);
    }

    return val;
}

void Bid::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("currency")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("currency")];
        if(!fieldValue.is_null())
        {
            setCurrency(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("price_unit")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("price_unit")];
        if(!fieldValue.is_null())
        {
            setPriceUnit(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_total")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("min_total")];
        if(!fieldValue.is_null())
        {
            setMinTotal(ModelBase::doubleFromJson(fieldValue));
        }
    }
}

void Bid::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_CurrencyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("currency"), m_Currency));
        
    }
    if(m_Price_unitIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("price_unit"), m_Price_unit));
        
    }
    if(m_Min_totalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("min_total"), m_Min_total));
    }
}

void Bid::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("currency")))
    {
        setCurrency(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("currency"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("price_unit")))
    {
        setPriceUnit(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("price_unit"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("min_total")))
    {
        setMinTotal(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("min_total"))));
    }
}

utility::string_t Bid::getCurrency() const
{
    return m_Currency;
}


void Bid::setCurrency(utility::string_t value)
{
    m_Currency = value;
    m_CurrencyIsSet = true;
}
bool Bid::currencyIsSet() const
{
    return m_CurrencyIsSet;
}

void Bid::unsetCurrency()
{
    m_CurrencyIsSet = false;
}

utility::string_t Bid::getPriceUnit() const
{
    return m_Price_unit;
}


void Bid::setPriceUnit(utility::string_t value)
{
    m_Price_unit = value;
    m_Price_unitIsSet = true;
}
bool Bid::priceUnitIsSet() const
{
    return m_Price_unitIsSet;
}

void Bid::unsetPrice_unit()
{
    m_Price_unitIsSet = false;
}

double Bid::getMinTotal() const
{
    return m_Min_total;
}


void Bid::setMinTotal(double value)
{
    m_Min_total = value;
    m_Min_totalIsSet = true;
}
bool Bid::minTotalIsSet() const
{
    return m_Min_totalIsSet;
}

void Bid::unsetMin_total()
{
    m_Min_totalIsSet = false;
}

}
}
}
}

