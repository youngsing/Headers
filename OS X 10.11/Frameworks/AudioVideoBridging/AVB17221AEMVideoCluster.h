//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMCluster.h>

#import <AudioVideoBridging/NSCopying-Protocol.h>

@class AVB17221AEMSamplingRate, AVB17221AEMVideoAspectRatio, AVB17221AEMVideoFormatSpecific, AVB17221AEMVideoSize, NSArray;

@interface AVB17221AEMVideoCluster : AVB17221AEMCluster <NSCopying>
{
    unsigned char format;
    unsigned short currentColorSpace;
    AVB17221AEMVideoFormatSpecific *currentFormatSpecific;
    AVB17221AEMSamplingRate *currentSamplingRate;
    AVB17221AEMVideoAspectRatio *currentAspectRatio;
    AVB17221AEMVideoSize *currentVideoSize;
    NSArray *formatSpecifics;
    NSArray *samplingRates;
    NSArray *aspectRatios;
    NSArray *videoSizes;
    NSArray *colorSpaces;
}

@property(copy) NSArray *colorSpaces; // @synthesize colorSpaces;
@property(copy) NSArray *videoSizes; // @synthesize videoSizes;
@property(copy) NSArray *aspectRatios; // @synthesize aspectRatios;
@property(copy) NSArray *samplingRates; // @synthesize samplingRates;
@property(copy) NSArray *formatSpecifics; // @synthesize formatSpecifics;
@property unsigned char format; // @synthesize format;
@property unsigned short currentColorSpace; // @synthesize currentColorSpace;
@property(copy) AVB17221AEMVideoSize *currentVideoSize; // @synthesize currentVideoSize;
@property(copy) AVB17221AEMVideoAspectRatio *currentAspectRatio; // @synthesize currentAspectRatio;
@property(copy) AVB17221AEMSamplingRate *currentSamplingRate; // @synthesize currentSamplingRate;
@property(copy) AVB17221AEMVideoFormatSpecific *currentFormatSpecific; // @synthesize currentFormatSpecific;
- (id)objectLogName;
- (void)appendVariableDescriptorContentToString:(id)arg1 withIndent:(id)arg2;
- (void)appendFixedDescriptorContentToString:(id)arg1 withIndent:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isExpectedDescriptorType:(unsigned short)arg1;
- (id)xmlRepresentation;
- (BOOL)updateWithXML:(id)arg1;
- (id)xmlKey;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)arg1;
- (unsigned long long)setDescriptor:(CDUnion_abb5f99a *)arg1;
- (BOOL)updateWithDescriptor:(CDUnion_abb5f99a *)arg1 descriptorLength:(unsigned short)arg2;
- (id)init;

@end

