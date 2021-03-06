//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "AMRAudioPlayerDelegate.h"
#import "DownloadVoiceDelegate.h"
#import "INewSyncExt.h"
#import "MMService.h"
#import "SPXAudioPlayerDelegate.h"
#import "SilkAudioPlayerDelegate.h"

@class AMRAudioPlayer, CDownloadVoiceMgr, CMainControll, NSString, SPXAudioPlayer, SilkAudioPlayer;

@interface AudioReceiver : MMService <AMRAudioPlayerDelegate, SPXAudioPlayerDelegate, SilkAudioPlayerDelegate, DownloadVoiceDelegate, INewSyncExt, MMService>
{
    AMRAudioPlayer *m_amrplayer;
    SPXAudioPlayer *m_spxplayer;
    SilkAudioPlayer *m_silkPlayer;
    CMainControll *m_mainController;
    CDownloadVoiceMgr *m_download;
}

- (void).cxx_destruct;
- (void)OnAMRBeginPlaying:(id)arg1 ErrNo:(int)arg2;
- (void)OnAMREarTip;
- (_Bool)OnAMREndDontNotifyOtherApp;
- (void)OnAMREndPlaying:(id)arg1 isForceStop:(_Bool)arg2;
- (void)OnAMRLevelMeter:(id)arg1 Peak:(float)arg2;
- (void)OnRecvData:(id)arg1 MesLocalID:(unsigned int)arg2 n64MesSvrID:(long long)arg3 CreateTime:(unsigned int)arg4 VoiceTime:(unsigned int)arg5 Offset:(unsigned int)arg6 Len:(unsigned int)arg7 Data:(id)arg8 EndFlag:(unsigned int)arg9 ErrNo:(unsigned int)arg10;
- (void)OnSPXEarTip;
- (_Bool)OnSPXEndDontNotifyOtherApp;
- (void)OnSPXEndPlaying:(id)arg1 isForceStop:(_Bool)arg2;
- (void)OnSPXLevelMeter:(id)arg1 Peak:(float)arg2;
- (_Bool)StartPlay:(id)arg1 MesLocalID:(unsigned int)arg2;
- (_Bool)StartPlay:(id)arg1 MesLocalID:(unsigned int)arg2 Path:(id)arg3;
- (_Bool)StartPlay:(id)arg1 MesLocalID:(unsigned int)arg2 Path:(id)arg3 forceEarpieceMode:(_Bool)arg4 forceAutoMode:(_Bool)arg5;
- (_Bool)StartPlayTmpAudio:(unsigned int)arg1;
- (_Bool)StartPlayTmpAudio:(unsigned int)arg1 forceEarpieceMode:(_Bool)arg2 forceAutoMode:(_Bool)arg3;
- (_Bool)StartPlayTmpAudioWithAutoMode:(unsigned int)arg1;
- (_Bool)StartPlayTmpAudioWithEarpieceMode:(unsigned int)arg1;
- (_Bool)StartPlayWithAutoMode:(id)arg1 MesLocalID:(unsigned int)arg2;
- (_Bool)StartPlayWithEarpieceMode:(id)arg1 MesLocalID:(unsigned int)arg2;
- (_Bool)StopPlay:(id)arg1 MesLocalID:(unsigned int)arg2;
- (_Bool)StopPlayTmpAudio:(unsigned int)arg1;
- (void)dealloc;
- (void)downloadVoiceMessage:(id)arg1;
- (id)getAudioFileName:(id)arg1 LocalID:(unsigned int)arg2;
- (id)getChatName:(id)arg1;
- (_Bool)getMessageFromDB:(id)arg1;
- (id)init;
- (_Bool)initFacade:(id)arg1;
- (_Bool)isPlaying;
- (void)onNewSyncAddMessage:(id)arg1;
- (void)onSilkBeginPlaying:(id)arg1 ErrNo:(int)arg2;
- (void)onSilkEarTip;
- (_Bool)onSilkEndDontNotifyOtherApp;
- (void)onSilkEndPlaying:(id)arg1 isForceStop:(_Bool)arg2;
- (void)onSilkLevelMeter:(id)arg1 Peak:(float)arg2;
- (_Bool)updateMessageToDB:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

