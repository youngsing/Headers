//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreWLAN/CWANQPElement.h>

#import <CoreWLAN/NSCopying-Protocol.h>
#import <CoreWLAN/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CWANQPNAIRealm : CWANQPElement <NSSecureCoding, NSCopying>
{
    NSArray *_realmList;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *realmList; // @synthesize realmList=_realmList;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithNetwork:(id)arg1 timestamp:(id)arg2 anqpResult:(id)arg3;

@end

