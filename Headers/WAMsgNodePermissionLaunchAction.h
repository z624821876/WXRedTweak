//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface WAMsgNodePermissionLaunchAction : NSObject <PBCoding>
{
    unsigned int actionCode;
    NSString *alertMsg;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) unsigned int actionCode; // @synthesize actionCode;
@property(retain, nonatomic) NSString *alertMsg; // @synthesize alertMsg;
@property(readonly, copy) NSString *description;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

