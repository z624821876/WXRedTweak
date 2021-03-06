//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITraitEnvironment.h"

@class NSString, UITraitCollection;

@interface MMMainViewController : MMUIViewController <UITraitEnvironment>
{
    id <AppUserInterfaceSizeDelegate> _interfaceSizeDelegate;
}

- (void).cxx_destruct;
- (_Bool)canBecomeFirstResponder;
- (void)closeCurChat:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (double)getContentViewY;
@property(nonatomic) __weak id <AppUserInterfaceSizeDelegate> interfaceSizeDelegate; // @synthesize interfaceSizeDelegate=_interfaceSizeDelegate;
- (id)keyCommands;
- (void)newChat:(id)arg1;
- (void)onLastChat:(id)arg1;
- (void)onNextChat:(id)arg1;
- (void)onNextUnreadChat:(id)arg1;
- (void)onSearch:(id)arg1;
- (void)selectTab:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UITraitCollection *traitCollection;

@end

