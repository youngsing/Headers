//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMAAFStreamFormat.h>

@interface AVB17221AEMAAFPCMStreamFormat : AVB17221AEMAAFStreamFormat
{
}

+ (id)keyPathsForValuesAffectingSamplesPerFrame;
+ (id)keyPathsForValuesAffectingChannelsPerFrame;
+ (id)keyPathsForValuesAffectingBitDepth;
- (id)streamFormatCompatibleWithTalkerFormat:(id)arg1;
- (BOOL)isPotentiallyCompatibleAsListenerForFormat:(id)arg1;
- (BOOL)isCompatibleAsListenerForFormat:(id)arg1;
- (unsigned short)maximumIntervalFrames;
- (unsigned int)maximumPayloadSize;
- (unsigned int)maximumPDUSize;
- (BOOL)isSupportedAudioFormat;
- (unsigned short)numberOfAudioChannels;
@property unsigned short samplesPerFrame; // @dynamic samplesPerFrame;
@property unsigned short channelsPerFrame; // @dynamic channelsPerFrame;
@property unsigned char bitDepth; // @dynamic bitDepth;

@end
