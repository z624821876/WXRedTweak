//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

@class JSEvent;

@interface WebviewJSEventHandler_closeWindowAndGoNext : WebviewJSEventHandlerBase
{
    JSEvent *_cbEvent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JSEvent *cbEvent; // @synthesize cbEvent=_cbEvent;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end
