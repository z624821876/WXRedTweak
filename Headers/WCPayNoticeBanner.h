//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class MMUILabel, NSString;

@interface WCPayNoticeBanner : MMUIView
{
    id <WCPayNoticeBannerDelegate> _delegate;
    MMUILabel *_titleLabel;
    NSString *_title;
    NSString *_url;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <WCPayNoticeBannerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 url:(id)arg3 readonly:(_Bool)arg4 oneline:(_Bool)arg5;
- (void)onTap:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;

@end

