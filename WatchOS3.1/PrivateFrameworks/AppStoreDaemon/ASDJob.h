//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSError, NSString;

@interface ASDJob : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_bundleID;
    NSError *_failureError;
    double _percentComplete;
    long long _persistentID;
    long long _phase;
    long long _purchaseID;
    long long _storeItemID;
    long long _type;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long storeItemID; // @synthesize storeItemID=_storeItemID;
@property(nonatomic) long long purchaseID; // @synthesize purchaseID=_purchaseID;
@property(nonatomic) long long phase; // @synthesize phase=_phase;
@property(nonatomic) long long persistentID; // @synthesize persistentID=_persistentID;
@property(nonatomic) double percentComplete; // @synthesize percentComplete=_percentComplete;
@property(copy, nonatomic) NSError *failureError; // @synthesize failureError=_failureError;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithPersistentID:(long long)arg1;
- (id)init;

@end
