//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportJSErrorItem : WAReportBaseItem
{
    NSString *_name;
    NSString *_desc;
    NSString *_stack;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)reportString;
@property(copy, nonatomic) NSString *stack; // @synthesize stack=_stack;

@end

