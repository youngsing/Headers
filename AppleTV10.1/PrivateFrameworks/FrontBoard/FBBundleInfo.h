//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BSCFBundle, LSApplicationProxy, NSDictionary, NSString, NSURL, NSUUID;

@interface FBBundleInfo : NSObject
{
    LSApplicationProxy *_proxy;
    BSCFBundle *_bundle;
    NSString *_displayName;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSString *_bundleType;
    NSURL *_bundleURL;
    NSDictionary *_extendedInfo;
    unsigned long long _sequenceNumber;
    NSUUID *_cacheGUID;
}

@property(retain, nonatomic) NSUUID *cacheGUID; // @synthesize cacheGUID=_cacheGUID;
@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(copy, nonatomic) NSDictionary *extendedInfo; // @synthesize extendedInfo=_extendedInfo;
@property(retain, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(copy, nonatomic) NSString *bundleType; // @synthesize bundleType=_bundleType;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, retain, nonatomic, getter=_proxy) LSApplicationProxy *proxy; // @synthesize proxy=_proxy;
- (void)_purgeBundle;
@property(readonly, retain, nonatomic, getter=_bundle) BSCFBundle *bundle;
- (id)extendedInfoValueForKey:(id)arg1;
- (void)dealloc;
- (id)_initWithApplicationProxy:(id)arg1;
- (id)_initWithBundleURL:(id)arg1;

@end
