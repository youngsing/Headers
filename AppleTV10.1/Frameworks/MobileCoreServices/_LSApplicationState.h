//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MobileCoreServices/NSCopying-Protocol.h>
#import <MobileCoreServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface _LSApplicationState : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_bundleIdentifier;
    unsigned long long _stateFlags;
    int _ratingRank;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)addStateFlag:(unsigned long long)arg1;
- (id)initWithBundleIdentifier:(id)arg1 stateFlags:(unsigned long long)arg2 ratingRank:(int)arg3;
@property(readonly, nonatomic) _Bool isBlocked;
@property(readonly, nonatomic) _Bool isRemovedSystemApp;
@property(readonly, nonatomic) _Bool isAlwaysAvailable;
@property(readonly, nonatomic) _Bool isRestricted;
@property(readonly, nonatomic) _Bool isInstalled;
@property(readonly, nonatomic) _Bool isPlaceholder;
@property(readonly, nonatomic) _Bool isValid;
- (void)dealloc;

@end

