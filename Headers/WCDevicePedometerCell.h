//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class MMDeviceHeadImageView, UILabel;

@interface WCDevicePedometerCell : MMTableViewCell
{
    MMDeviceHeadImageView *_headView;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMDeviceHeadImageView *headView; // @synthesize headView=_headView;
- (void)initCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)resetIcon;
- (void)setDeviceIconUrl:(id)arg1;
- (void)setTitle:(id)arg1;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end

