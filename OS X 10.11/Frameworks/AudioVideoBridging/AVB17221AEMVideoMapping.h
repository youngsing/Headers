//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMObject.h>

#import <AudioVideoBridging/NSCopying-Protocol.h>

@interface AVB17221AEMVideoMapping : AVB17221AEMObject <NSCopying>
{
    unsigned short streamIndex;
    unsigned short programStream;
    unsigned short elementaryStream;
    unsigned short clusterOffset;
}

@property unsigned short clusterOffset; // @synthesize clusterOffset;
@property unsigned short elementaryStream; // @synthesize elementaryStream;
@property unsigned short programStream; // @synthesize programStream;
@property unsigned short streamIndex; // @synthesize streamIndex;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugLogStringWithIndentation:(id)arg1;
- (BOOL)updateWithXML:(id)arg1;
- (id)xmlRepresentation;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)arg1;

@end
