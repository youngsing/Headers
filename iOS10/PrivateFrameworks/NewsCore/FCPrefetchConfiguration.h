//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NTPBPrefetchConfig;

@interface FCPrefetchConfiguration : NSObject
{
    NTPBPrefetchConfig *_pbConfig;
    _Bool _backgroundFetchEnabled;
    _Bool _shouldPrefetchForYouFeed;
    double _minimumBackgroundFetchInterval;
    unsigned long long _maximumFavoritesFeedsToPrefetch;
}

@property(readonly, nonatomic) unsigned long long maximumFavoritesFeedsToPrefetch; // @synthesize maximumFavoritesFeedsToPrefetch=_maximumFavoritesFeedsToPrefetch;
@property(readonly, nonatomic) _Bool shouldPrefetchForYouFeed; // @synthesize shouldPrefetchForYouFeed=_shouldPrefetchForYouFeed;
@property(readonly, nonatomic) double minimumBackgroundFetchInterval; // @synthesize minimumBackgroundFetchInterval=_minimumBackgroundFetchInterval;
@property(readonly, nonatomic, getter=isBackgroundFetchEnabled) _Bool backgroundFetchEnabled; // @synthesize backgroundFetchEnabled=_backgroundFetchEnabled;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPBPrefetchConfig:(id)arg1;
- (id)initWithDefaults;

@end

