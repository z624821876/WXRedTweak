//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSString;

@protocol WebViewA8KeyLogicDelegate <NSObject>
- (void)onGetA8Key:(_Bool)arg1 ReqUrl:(NSString *)arg2 Reason:(int)arg3;
- (void)onGetA8KeyWithMediaAutoPlay;
- (void)onJumpToEmoticonDetailViewController:(NSString *)arg1;
- (void)onJumpToSafariWithUrl:(NSString *)arg1;
- (void)onJumpToViewController:(NSString *)arg1;
- (void)onUpdatedPermisson;
- (void)saveJSAPIAuthInfo:(NSArray *)arg1;
- (void)saveJSAPIPermissions:(NSData *)arg1 url:(NSString *)arg2;
- (void)saveJSAPIPermissionsInOfflineCache:(NSData *)arg1 url:(NSString *)arg2;

@optional
- (void)onShowAutoOAuthViewWithSchemeUrl:(NSString *)arg1 Success:(_Bool)arg2 Wording:(NSString *)arg3 HeadImgUrl:(NSString *)arg4;
- (void)onStartGetA8Key;
@end

