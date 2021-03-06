//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MMovieCompressorDelegate.h"
#import "SightCaptureLogic.h"
#import "WCCameraWriterDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, WCCameraCapture, WCCameraFilerLogic, WCCameraWriterLogic;

@interface WCCameraLogic : MMObject <WCCameraWriterDelegate, SightCaptureLogic, MMovieCompressorDelegate>
{
    id <SightCaptureDelegate> m_delegate;
    _Bool m_shouldStart;
    _Bool m_shouldNotifyPreviewReady;
    unsigned int m_currID;
    int m_zoomState;
    WCCameraCapture *m_movieCapture;
    NSMutableDictionary *m_recorderDict;
    WCCameraWriterLogic *m_writerLogic;
    WCCameraFilerLogic *m_filterLogic;
    NSMutableArray *m_compressorAry;
    NSObject<OS_dispatch_queue> *m_logicQueue;
}

- (void).cxx_destruct;
- (long long)cameraPosition;
- (void)cancelAllRecorder;
- (void)cancelRecord:(unsigned int)arg1;
- (void)capturePreviewImage:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (long long)flashMode;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (id)genPreviewView:(struct CGRect)arg1;
- (int)getCaptureFrameRate;
- (id)getCodecSettingsWithBitrate:(int)arg1 withSize:(struct CGSize)arg2;
- (id)getKeyFrameInterval;
- (id)getPreset;
- (id)getVideoProfileLevel;
- (id)init;
- (_Bool)isCameraOn;
- (_Bool)isLightBoostOn;
- (_Bool)isSupportSwitchCamera;
- (_Bool)isSupportZoom;
- (_Bool)isSupportZoomWithFactor:(double)arg1;
- (_Bool)isUsingHighExposureISO;
- (double)maxZoomFactor;
@property(readonly, nonatomic) WCCameraCapture *movieCapture; // @synthesize movieCapture=m_movieCapture;
- (void)movieWriter:(id)arg1 onMovieWriteFailed:(unsigned int)arg2;
- (void)movieWriter:(id)arg1 onMovieWriteFinished:(id)arg2 ret:(unsigned int)arg3;
- (void)onMovieWriterInvalidate:(id)arg1;
- (void)onPictureRetake;
- (_Bool)pauseCamera;
- (void)pauseCameraImmediately;
- (unsigned int)prepareHighQualityRecord:(struct CGSize)arg1 maxVideoDuration:(float)arg2;
- (unsigned int)prepareRecord:(struct CGSize)arg1 bitRate:(int)arg2 maxVideoDuration:(float)arg3;
- (unsigned int)prepareRecordF4:(struct CGSize)arg1 bitRate:(int)arg2 needCompress:(_Bool)arg3 maxVideoDuration:(float)arg4;
- (void)realStartRecord;
- (void)resetExposureISO;
- (void)setDelegate:(id)arg1;
- (void)setFlashlightMode:(long long)arg1;
- (void)setTorchMode:(long long)arg1;
- (void)setZoomFactor:(double)arg1;
- (void)setZoomState:(int)arg1;
- (void)startCameraWithAudio:(_Bool)arg1;
- (void)startDeviceAudio;
- (unsigned int)startHighQualityRecord:(struct CGSize)arg1 maxVideoDuration:(float)arg2 orientation:(long long)arg3 compressAudio:(_Bool)arg4 audioBitrate:(float)arg5;
- (void)startQRCodeWatcher;
- (unsigned int)startRecord:(struct CGSize)arg1 bitRate:(int)arg2 maxVideoDuration:(float)arg3 orientation:(long long)arg4 compressAudio:(_Bool)arg5 audioBitrate:(float)arg6;
- (unsigned int)startRecordF4:(struct CGSize)arg1 bitRate:(int)arg2 needCompress:(_Bool)arg3 maxVideoDuration:(float)arg4 orientation:(long long)arg5 compressAudio:(_Bool)arg6 audioBitrate:(float)arg7;
- (void)stopCameraCapture;
- (void)stopQRCodeWatcher;
- (void)stopRecord:(unsigned int)arg1;
- (_Bool)supportFlashlightMode;
- (_Bool)supportTorchMode;
- (_Bool)switchCamera;
- (void)takePicturWithCompletion:(CDUnknownBlockType)arg1;
- (long long)torchMode;
- (void)turnOffLightBoost;
- (void)turnOnExposureHighISO;
- (void)turnOnLightBoost;
- (void)unregistPreviewView:(id)arg1;
- (double)zoomFactor;
- (int)zoomState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

