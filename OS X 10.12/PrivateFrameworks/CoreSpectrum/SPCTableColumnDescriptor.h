//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpectrum/NSCopying-Protocol.h>
#import <CoreSpectrum/NSSecureCoding-Protocol.h>

@class NSString, SPCValueDescriptor;

@interface SPCTableColumnDescriptor : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_key;
    SPCValueDescriptor *_valueDescriptor;
}

+ (BOOL)supportsSecureCoding;
+ (id)descriptorWithKey:(id)arg1 valueDescriptor:(id)arg2;
@property(readonly, copy, nonatomic) SPCValueDescriptor *valueDescriptor; // @synthesize valueDescriptor=_valueDescriptor;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithKey:(id)arg1 valueDescriptor:(id)arg2;

@end
