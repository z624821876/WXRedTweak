//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface TXSAudioPacket : NSObject
{
    long long _sampleRate;
    long long _channelsPerSample;
    long long _bitsPerChannel;
    long long _packetType;
    unsigned long long _timestamp;
    NSData *_audioData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *audioData; // @synthesize audioData=_audioData;
@property(nonatomic) long long bitsPerChannel; // @synthesize bitsPerChannel=_bitsPerChannel;
@property(nonatomic) long long channelsPerSample; // @synthesize channelsPerSample=_channelsPerSample;
- (id)init;
@property(nonatomic) long long packetType; // @synthesize packetType=_packetType;
@property(nonatomic) long long sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

@end
