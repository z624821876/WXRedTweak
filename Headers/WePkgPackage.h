//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableDictionary, WePkgMetaInfo, WePkgParser, WePkgRegularConfig;

@interface WePkgPackage : MMObject
{
    id _oUsingWebView;
    WePkgRegularConfig *_regularConfig;
    WePkgParser *_parser;
    NSMutableDictionary *_dicRid2BigPackageIdx;
    NSMutableDictionary *_dicRid2SingleFileInfo;
    NSMutableDictionary *_dicRid2DataItem;
    WePkgMetaInfo *_metaInfo;
}

+ (id)packageWithPkgId:(id)arg1;
- (void).cxx_destruct;
- (_Bool)checkIfInFileIndex:(id)arg1;
- (int)checkIfPkgFileModified;
- (int)checkOneFileModified:(id)arg1 ExpectFileSize:(unsigned int)arg2 ExpectFileMd5:(id)arg3;
@property(retain, nonatomic) NSMutableDictionary *dicRid2BigPackageIdx; // @synthesize dicRid2BigPackageIdx=_dicRid2BigPackageIdx;
@property(retain, nonatomic) NSMutableDictionary *dicRid2DataItem; // @synthesize dicRid2DataItem=_dicRid2DataItem;
@property(retain, nonatomic) NSMutableDictionary *dicRid2SingleFileInfo; // @synthesize dicRid2SingleFileInfo=_dicRid2SingleFileInfo;
- (id)genRidFromUrl:(id)arg1;
- (id)getCacheDataForUrl:(id)arg1;
- (id)getCurrentPkgKey;
- (id)initWithRegularConfig:(id)arg1;
- (_Bool)isValid;
@property(retain, nonatomic) WePkgMetaInfo *metaInfo; // @synthesize metaInfo=_metaInfo;
@property(nonatomic) __weak id oUsingWebView; // @synthesize oUsingWebView=_oUsingWebView;
- (void)parseBigPackageFile;
@property(retain, nonatomic) WePkgParser *parser; // @synthesize parser=_parser;
@property(retain, nonatomic) WePkgRegularConfig *regularConfig; // @synthesize regularConfig=_regularConfig;
- (void)setupRid2Index;
- (void)setupSingleFileIndex:(id)arg1;
- (void)updateLastUsedTime;

@end

