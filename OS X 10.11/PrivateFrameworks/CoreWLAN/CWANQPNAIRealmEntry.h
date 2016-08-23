//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreWLAN/NSCopying-Protocol.h>
#import <CoreWLAN/NSSecureCoding-Protocol.h>

@class NSString;

@interface CWANQPNAIRealmEntry : NSObject <NSSecureCoding, NSCopying>
{
    long long _encodingType;
    NSString *_realmName;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *realmName; // @synthesize realmName=_realmName;
@property(nonatomic) long long encodingType; // @synthesize encodingType=_encodingType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithEncodingType:(long long)arg1 realmName:(id)arg2;

@end

