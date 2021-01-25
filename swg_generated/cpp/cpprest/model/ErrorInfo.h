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
 * ErrorInfo.h
 *
 * Error 상세 정보
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_ErrorInfo_H_
#define IO_SWAGGER_CLIENT_MODEL_ErrorInfo_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Error 상세 정보
/// </summary>
class  ErrorInfo
    : public ModelBase
{
public:
    ErrorInfo();
    virtual ~ErrorInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ErrorInfo members

    /// <summary>
    /// Error 메시지
    /// </summary>
    utility::string_t getMessage() const;
    bool messageIsSet() const;
    void unsetMessage();
    void setMessage(utility::string_t value);
    /// <summary>
    /// Error 명칭
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();
    void setName(utility::string_t value);

protected:
    utility::string_t m_Message;
    bool m_MessageIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_ErrorInfo_H_ */
