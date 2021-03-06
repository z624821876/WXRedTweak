//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSData, NSObject<OS_dispatch_queue>, NSString;

@interface QBWupBrowserInfo : NSObject <NSCoding>
{
    char *_hexGuid;
    char *_guid;
    NSString *_QGUID;
    NSString *_QUA;
    NSString *_QUA2;
    NSString *_UUID;
    NSString *_qAuth;
    NSString *_userAgent;
    long long _timestamp;
    NSString *_contentMd5;
    NSData *_innerGuidData;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)filePath;
+ (id)sharedBrowserInfo;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *QGUID; // @synthesize QGUID=_QGUID;
@property(retain, nonatomic) NSString *QUA; // @synthesize QUA=_QUA;
@property(retain, nonatomic) NSString *QUA2; // @synthesize QUA2=_QUA2;
@property(retain) NSString *UUID; // @synthesize UUID=_UUID;
@property(retain) NSString *contentMd5; // @synthesize contentMd5=_contentMd5;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) char *guid; // @synthesize guid=_guid;
@property(readonly, nonatomic) NSData *guidData;
@property(readonly, nonatomic) char *hexGuid; // @synthesize hexGuid=_hexGuid;
@property(readonly, nonatomic) NSString *hexGuidString;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSData *innerGuidData; // @synthesize innerGuidData=_innerGuidData;
- (void)invalidateServerUrl:(id)arg1;
@property(readonly, nonatomic) _Bool isGuidValid;
@property(retain, nonatomic) NSString *qAuth; // @synthesize qAuth=_qAuth;
- (void)resetGuid;
- (void)saveToFile;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (id)serverUrl;
@property long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;

@end

