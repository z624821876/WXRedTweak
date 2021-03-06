//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AccountErrorInfo, BindOpMobileResponse, NSDictionary, NSString;

@protocol WCAccountBindPhoneForRegCGIDelegate <NSObject>

@optional
- (NSString *)getRegSessionID;
- (void)onCheckLoginPhoneNumberStatus:(AccountErrorInfo *)arg1 StyleKeyValue:(NSDictionary *)arg2 Response:(BindOpMobileResponse *)arg3;
- (void)onCheckLoginVerifyCode:(AccountErrorInfo *)arg1 StyleKeyValue:(NSDictionary *)arg2 Response:(BindOpMobileResponse *)arg3;
- (void)onCheckRegPhoneNumberStatus:(AccountErrorInfo *)arg1 StyleKeyValue:(NSDictionary *)arg2 Response:(BindOpMobileResponse *)arg3;
- (void)onCheckRegVerifyCode:(AccountErrorInfo *)arg1 StyleKeyValue:(NSDictionary *)arg2 Response:(BindOpMobileResponse *)arg3;
- (void)onCheckSafeDeviceVerifyCode:(AccountErrorInfo *)arg1 Response:(BindOpMobileResponse *)arg2;
- (void)onGetLoginVerifyCode:(AccountErrorInfo *)arg1 StyleKeyValue:(NSDictionary *)arg2 Response:(BindOpMobileResponse *)arg3;
- (void)onGetLoginVoiceVerifyCode:(AccountErrorInfo *)arg1 StyleKeyValue:(NSDictionary *)arg2 Response:(BindOpMobileResponse *)arg3;
- (void)onGetRegVerifyCode:(AccountErrorInfo *)arg1 StyleKeyValue:(NSDictionary *)arg2 Response:(BindOpMobileResponse *)arg3;
- (void)onGetRegVoiceVerifyCode:(AccountErrorInfo *)arg1 StyleKeyValue:(NSDictionary *)arg2 Response:(BindOpMobileResponse *)arg3;
- (void)onGetSafeDeviceVerifyCode:(AccountErrorInfo *)arg1 authTicket:(NSString *)arg2 StyleKeyValue:(NSDictionary *)arg3 Response:(BindOpMobileResponse *)arg4;
- (void)onGetSafeDeviceVoiceVerifyCode:(AccountErrorInfo *)arg1 authTicket:(NSString *)arg2 StyleKeyValue:(NSDictionary *)arg3 Response:(BindOpMobileResponse *)arg4;
@end

