//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreInterest/NSCopying-Protocol.h>
#import <CoreInterest/NSSecureCoding-Protocol.h>

@class NSString;

@interface IFFeatureMatch : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_type;
    NSString *_term;
    NSString *_client;
}

+ (_Bool)supportsSecureCoding;
+ (id)featureMatchWithValuesFromFeature:(id)arg1;
+ (id)featureMatchWithType:(id)arg1 term:(id)arg2 client:(id)arg3;
+ (double)scaleValueForFeature:(id)arg1 scaling:(id)arg2;
@property(copy) NSString *client; // @synthesize client=_client;
@property(copy) NSString *term; // @synthesize term=_term;
@property(copy) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqualToFeatureMatch:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)matches:(id)arg1;
- (id)initWithType:(id)arg1 term:(id)arg2 client:(id)arg3;

@end

