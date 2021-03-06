//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMConfigMgrExt.h"

@class NSMutableArray, NSString;

@interface MCSBrandContactMgr : NSObject <MMConfigMgrExt>
{
    NSMutableArray *_arrMCSItems;
    unsigned int _lastUpdateTime;
    _Bool _bNeedSave;
}

- (void).cxx_destruct;
- (void)addScore:(id)arg1;
- (void)cleanData;
- (void)dealloc;
- (id)getMCSArray;
- (id)getMCSInfo;
- (id)init;
- (void)initData;
- (void)loadLocalData;
- (void)onAppTerminate;
- (void)onClearData;
- (void)onEnterBackGround;
- (void)onMMDynamicConfigUpdated;
- (void)onReloadData;
- (void)onSelectContact:(id)arg1;
- (id)pathForMCSFile;
- (void)removeItem:(id)arg1;
- (void)setDeclineFactor;
- (void)trySaveData;
- (void)tryUpdateData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

