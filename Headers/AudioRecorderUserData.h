//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AudioRecorderUserData : NSObject
{
    unsigned int createtime;
    unsigned int audioid;
    NSString *fromusr;
    NSString *tousr;
    NSString *chatname;
    NSString *msgSource;
}

- (void).cxx_destruct;
@property unsigned int audioid; // @synthesize audioid;
@property(retain) NSString *chatname; // @synthesize chatname;
@property unsigned int createtime; // @synthesize createtime;
@property(retain) NSString *fromusr; // @synthesize fromusr;
@property(copy) NSString *msgSource; // @synthesize msgSource;
@property(retain) NSString *tousr; // @synthesize tousr;

@end

