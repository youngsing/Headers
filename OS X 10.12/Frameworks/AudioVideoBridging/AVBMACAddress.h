//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioVideoBridging/NSCopying-Protocol.h>

@class NSData, NSString;

@interface AVBMACAddress : NSObject <NSCopying>
{
    unsigned char _bytes[6];
}

+ (id)keyPathsForValuesAffectingMulticast;
+ (id)keyPathsForValuesAffectingStringRepresentation;
+ (id)keyPathsForValuesAffectingDataRepresentation;
+ (id)maapRandomAssign;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(getter=isMulticast) BOOL multicast; // @dynamic multicast;
@property(copy) NSString *stringRepresentation; // @dynamic stringRepresentation;
@property(copy) NSData *dataRepresentation; // @dynamic dataRepresentation;
@property(readonly) const char *bytes; // @dynamic bytes;
- (void)_didUpdateBytes;
- (void)_willUpdateBytes;
- (void)getAddress:(char *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithBytes:(const char *)arg1;

@end
