//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageOutput.h"

#import "AVCaptureAudioDataOutputSampleBufferDelegate.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVCaptureAudioDataOutput, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, GLProgram, NSDate, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString;

@interface GPUImageVideoCamera : GPUImageOutput <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate>
{
    unsigned long long numberOfFramesCaptured;
    double totalFrameTimeDuringCapture;
    AVCaptureSession *_captureSession;
    AVCaptureDevice *_inputCamera;
    AVCaptureDevice *_microphone;
    AVCaptureDeviceInput *videoInput;
    AVCaptureVideoDataOutput *videoOutput;
    _Bool capturePaused;
    unsigned long long outputRotation;
    unsigned long long internalRotation;
    NSObject<OS_dispatch_semaphore> *frameRenderingSemaphore;
    _Bool captureAsYUV;
    unsigned int luminanceTexture;
    unsigned int chrominanceTexture;
    id <GPUImageVideoCameraDelegate> _delegate;
    AVCaptureDeviceInput *audioInput;
    AVCaptureAudioDataOutput *audioOutput;
    NSDate *startingCaptureTime;
    NSObject<OS_dispatch_queue> *cameraProcessingQueue;
    NSObject<OS_dispatch_queue> *audioProcessingQueue;
    GLProgram *yuvConversionProgram;
    int yuvConversionPositionAttribute;
    int yuvConversionTextureCoordinateAttribute;
    int yuvConversionLuminanceTextureUniform;
    int yuvConversionChrominanceTextureUniform;
    int yuvConversionMatrixUniform;
    const float *_preferredConversion;
    _Bool isFullYUVRange;
    int imageBufferWidth;
    int imageBufferHeight;
    _Bool addedAudioInputsDueToEncodingTarget;
    _Bool _runBenchmark;
    _Bool _horizontallyMirrorFrontFacingCamera;
    _Bool _horizontallyMirrorRearFacingCamera;
    int _frameRate;
    int _exposureTime;
    float _cameraISO;
    NSString *_captureSessionPreset;
    long long _outputImageOrientation;
    long long _preferredVideoStabilizationMode;
    struct CGPoint _focusPoint;
    struct CGPoint _exposurePoint;
}

+ (_Bool)isBackFacingCameraPresent;
+ (_Bool)isFrontFacingCameraPresent;
- (void).cxx_destruct;
- (_Bool)addAudioInputsAndOutputs;
- (void)addTarget:(id)arg1 atTextureLocation:(long long)arg2;
- (double)averageFrameDurationDuringCapture;
@property(nonatomic) float cameraISO; // @synthesize cameraISO=_cameraISO;
- (long long)cameraPosition;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
@property(readonly, retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(copy, nonatomic) NSString *captureSessionPreset; // @synthesize captureSessionPreset=_captureSessionPreset;
- (void)convertYUVToRGBOutput;
- (void)dealloc;
@property(nonatomic) id <GPUImageVideoCameraDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGPoint exposurePoint; // @synthesize exposurePoint=_exposurePoint;
@property(nonatomic) int exposureTime; // @synthesize exposureTime=_exposureTime;
@property(nonatomic) struct CGPoint focusPoint; // @synthesize focusPoint=_focusPoint;
@property int frameRate; // @synthesize frameRate=_frameRate;
- (id)framebufferForOutput;
@property(nonatomic) _Bool horizontallyMirrorFrontFacingCamera; // @synthesize horizontallyMirrorFrontFacingCamera=_horizontallyMirrorFrontFacingCamera;
@property(nonatomic) _Bool horizontallyMirrorRearFacingCamera; // @synthesize horizontallyMirrorRearFacingCamera=_horizontallyMirrorRearFacingCamera;
- (id)init;
- (id)initWithSessionPreset:(id)arg1 cameraPosition:(long long)arg2;
@property(readonly) AVCaptureDevice *inputCamera; // @synthesize inputCamera=_inputCamera;
@property(readonly, getter=isBackFacingCameraPresent) _Bool backFacingCameraPresent;
@property(readonly, getter=isFrontFacingCameraPresent) _Bool frontFacingCameraPresent;
@property(readonly, nonatomic) _Bool isRunning;
@property(nonatomic) long long outputImageOrientation; // @synthesize outputImageOrientation=_outputImageOrientation;
- (void)pauseCameraCapture;
@property(nonatomic) long long preferredVideoStabilizationMode; // @synthesize preferredVideoStabilizationMode=_preferredVideoStabilizationMode;
- (void)processAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)processVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)removeAudioInputsAndOutputs;
- (void)removeInputsAndOutputs;
- (void)resetBenchmarkAverage;
- (void)resumeCameraCapture;
- (void)rotateCamera;
@property(nonatomic) _Bool runBenchmark; // @synthesize runBenchmark=_runBenchmark;
- (void)setAudioEncodingTarget:(id)arg1;
@property(nonatomic) float zoomScale;
- (void)startCameraCapture;
- (void)stopCameraCapture;
- (_Bool)tryToSetConnectionPreferredVideoStabilizationMode:(long long)arg1;
- (void)updateOrientationSendToTargets;
- (void)updateTargetsForVideoCameraUsingCacheTextureAtWidth:(int)arg1 height:(int)arg2 time:(CDStruct_1b6d18a9)arg3;
- (id)videoCaptureConnection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

