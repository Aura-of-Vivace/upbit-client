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
#include "SwaggerMemberLevel.h"

#include "SwaggerModule.h"
#include "SwaggerHelpers.h"

#include "Templates/SharedPointer.h"

namespace Swagger 
{

void SwaggerMemberLevel::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (SecurityLevel.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("security_level")); WriteJsonValue(Writer, SecurityLevel.GetValue());	
	}
	if (FeeLevel.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("fee_level")); WriteJsonValue(Writer, FeeLevel.GetValue());	
	}
	if (EmailVerified.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("email_verified")); WriteJsonValue(Writer, EmailVerified.GetValue());	
	}
	if (IdentityAuthVerified.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("identity_auth_verified")); WriteJsonValue(Writer, IdentityAuthVerified.GetValue());	
	}
	if (BankAccountVerified.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("bank_account_verified")); WriteJsonValue(Writer, BankAccountVerified.GetValue());	
	}
	if (KakaoPayAuthVerified.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("kakao_pay_auth_verified")); WriteJsonValue(Writer, KakaoPayAuthVerified.GetValue());	
	}
	if (Locked.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("locked")); WriteJsonValue(Writer, Locked.GetValue());	
	}
	if (WalletLocked.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("wallet_locked")); WriteJsonValue(Writer, WalletLocked.GetValue());	
	}
	Writer->WriteObjectEnd();
}

bool SwaggerMemberLevel::FromJson(const TSharedPtr<FJsonObject>& JsonObject)
{
	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(JsonObject, TEXT("security_level"), SecurityLevel);
	ParseSuccess &= TryGetJsonValue(JsonObject, TEXT("fee_level"), FeeLevel);
	ParseSuccess &= TryGetJsonValue(JsonObject, TEXT("email_verified"), EmailVerified);
	ParseSuccess &= TryGetJsonValue(JsonObject, TEXT("identity_auth_verified"), IdentityAuthVerified);
	ParseSuccess &= TryGetJsonValue(JsonObject, TEXT("bank_account_verified"), BankAccountVerified);
	ParseSuccess &= TryGetJsonValue(JsonObject, TEXT("kakao_pay_auth_verified"), KakaoPayAuthVerified);
	ParseSuccess &= TryGetJsonValue(JsonObject, TEXT("locked"), Locked);
	ParseSuccess &= TryGetJsonValue(JsonObject, TEXT("wallet_locked"), WalletLocked);

	return ParseSuccess;
}
}
