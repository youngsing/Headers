//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreWLAN/NSCopying-Protocol.h>
#import <CoreWLAN/NSSecureCoding-Protocol.h>

@class CWNetwork, NSDate, NSDictionary;

@interface CWANQPElement : NSObject <NSSecureCoding, NSCopying>
{
    NSDate *_timestamp;
    CWNetwork *_network;
    unsigned long long _type;
    NSDictionary *_anqpResult;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *anqpResult; // @synthesize anqpResult=_anqpResult;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) CWNetwork *network; // @synthesize network=_network;
@property(copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualtoANQPElement:(id)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)description;
- (id)typeString;
- (void)dealloc;
- (id)initWithNetwork:(id)arg1 timestamp:(id)arg2 type:(unsigned long long)arg3 anqpResult:(id)arg4;

@end

