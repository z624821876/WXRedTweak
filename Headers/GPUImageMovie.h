//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageOutput.h"

#import "AVPlayerItemOutputPullDelegate.h"

@class AVAsset, AVAssetReader, AVPlayerItem, AVPlayerItemVideoOutput, CADisplayLink, GLProgram, GPUImageMovieWriter, NSString, NSURL;

@interface GPUImageMovie : GPUImageOutput <AVPlayerItemOutputPullDelegate>
{
    _Bool audioEncodingIsFinished;
    _Bool videoEncodingIsFinished;
    GPUImageMovieWriter *synchronizedMovieWriter;
    AVAssetReader *reader;
    AVPlayerItemVideoOutput *playerItemOutput;
    CADisplayLink *displayLink;
    CDStruct_1b6d18a9 previousFrameTime;
    CDStruct_1b6d18a9 processingFrameTime;
    double previousActualFrameTime;
    _Bool keepLooping;
    unsigned int luminanceTexture;
    unsigned int chrominanceTexture;
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
    _Bool _runBenchmark;
    _Bool _playAtActualSpeed;
    _Bool _shouldRepeat;
    NSURL *_url;
    AVAsset *_asset;
    id <GPUImageMovieDelegate> _delegate;
    AVPlayerItem *_playerItem;
}

- (void).cxx_destruct;
@property(retain) AVAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) AVAssetReader *assetReader;
@property(readonly, nonatomic) _Bool audioEncodingIsFinished;
- (void)cancelProcessing;
- (void)convertYUVToRGBOutput;
- (id)createAssetReader;
- (void)dealloc;
@property(nonatomic) id <GPUImageMovieDelegate> delegate; // @synthesize delegate=_delegate;
- (void)displayLinkCallback:(id)arg1;
- (void)enableSynchronizedEncodingUsingMovieWriter:(id)arg1;
- (void)endProcessing;
- (id)initWithAsset:(id)arg1;
- (id)initWithPlayerItem:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)outputMediaDataWillChange:(id)arg1;
@property(nonatomic) _Bool playAtActualSpeed; // @synthesize playAtActualSpeed=_playAtActualSpeed;
@property(retain) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
- (void)processAsset;
- (void)processMovieFrame:(struct opaqueCMSampleBuffer *)arg1;
- (void)processMovieFrame:(struct __CVBuffer *)arg1 withSampleTime:(CDStruct_1b6d18a9)arg2;
- (void)processPixelBufferAtTime:(CDStruct_1b6d18a9)arg1;
- (void)processPlayerItem;
@property(readonly, nonatomic) float progress;
- (_Bool)readNextAudioSampleFromOutput:(id)arg1;
- (_Bool)readNextVideoFrameFromOutput:(id)arg1;
@property(nonatomic) _Bool runBenchmark; // @synthesize runBenchmark=_runBenchmark;
@property(nonatomic) _Bool shouldRepeat; // @synthesize shouldRepeat=_shouldRepeat;
@property(retain) NSURL *url; // @synthesize url=_url;
- (void)startProcessing;
@property(readonly, nonatomic) _Bool videoEncodingIsFinished;
- (void)yuvConversionSetup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
