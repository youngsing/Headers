//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMObject.h>

#import <AudioVideoBridging/NSCopying-Protocol.h>

@interface AVB17221AEMVideoSize : AVB17221AEMObject <NSCopying>
{
    unsigned int videoSize;
}

+ (id)_IIDCStandardSizes100M;
+ (id)_IIDCStandardSizes1G;
+ (id)keyPathsForValuesAffectingFrameHeight;
+ (id)keyPathsForValuesAffectingFrameWidth;
@property unsigned int videoSize; // @synthesize videoSize;
- (unsigned long long)iidcBytesPerPDUWithColorSpace:(unsigned short)arg1;
- (unsigned long long)bytesPerFrameWithColorSpace:(unsigned short)arg1;
- (unsigned long long)pixelsPerFrame;
- (unsigned short)iidcVideoFormatWithColorSpace:(unsigned short)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugLogStringWithIndentation:(id)arg1;
- (BOOL)updateWithXML:(id)arg1;
- (id)xmlRepresentation;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)arg1;
@property unsigned short frameHeight; // @dynamic frameHeight;
@property unsigned short frameWidth; // @dynamic frameWidth;

@end

