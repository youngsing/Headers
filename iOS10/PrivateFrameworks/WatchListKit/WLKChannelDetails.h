//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL, WLKArtworkVariantListing;

@interface WLKChannelDetails : NSObject
{
    _Bool _subscribed;
    _Bool _itunes;
    _Bool _watchListEnabled;
    _Bool _appInstalled;
    NSString *_channelID;
    NSString *_name;
    NSArray *_appAdamIDs;
    NSArray *_appBundleIDs;
    NSString *_appName;
    NSURL *_appStoreURL;
    WLKArtworkVariantListing *_images;
}

@property(readonly, nonatomic, getter=isAppInstalled) _Bool appInstalled; // @synthesize appInstalled=_appInstalled;
@property(readonly, nonatomic, getter=isWatchListEnabled) _Bool watchListEnabled; // @synthesize watchListEnabled=_watchListEnabled;
@property(readonly, nonatomic, getter=isiTunes) _Bool itunes; // @synthesize itunes=_itunes;
@property(readonly, nonatomic, getter=isSubscribed) _Bool subscribed; // @synthesize subscribed=_subscribed;
@property(readonly, nonatomic) WLKArtworkVariantListing *images; // @synthesize images=_images;
@property(readonly, copy, nonatomic) NSURL *appStoreURL; // @synthesize appStoreURL=_appStoreURL;
@property(readonly, copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(readonly, copy, nonatomic) NSArray *appBundleIDs; // @synthesize appBundleIDs=_appBundleIDs;
@property(readonly, copy, nonatomic) NSArray *appAdamIDs; // @synthesize appAdamIDs=_appAdamIDs;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end

