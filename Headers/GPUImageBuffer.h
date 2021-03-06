//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilter.h"

@class NSMutableArray;

@interface GPUImageBuffer : GPUImageFilter
{
    NSMutableArray *bufferedFramebuffers;
    unsigned long long _bufferSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long bufferSize; // @synthesize bufferSize=_bufferSize;
- (void)dealloc;
- (id)init;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;

@end

