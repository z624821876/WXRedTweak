//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface DeviceRankLikeDetailInfo : MMObject
{
    unsigned int uiLikeTime;
    NSString *nsUserName;
    NSString *nsRankId;
    NSString *nsLikeTip;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nsLikeTip; // @synthesize nsLikeTip;
@property(retain, nonatomic) NSString *nsRankId; // @synthesize nsRankId;
@property(retain, nonatomic) NSString *nsUserName; // @synthesize nsUserName;
@property(nonatomic) unsigned int uiLikeTime; // @synthesize uiLikeTime;

@end

