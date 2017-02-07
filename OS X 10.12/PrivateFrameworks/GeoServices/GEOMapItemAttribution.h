//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOSearchAttributionInfo, NSArray, NSString;

@interface GEOMapItemAttribution : NSObject
{
    GEOSearchAttributionInfo *_info;
    NSArray *_attributionURLs;
    NSString *_yelpID;
    NSString *_poiID;
}

@property(readonly, nonatomic) NSArray *attributionURLs; // @synthesize attributionURLs=_attributionURLs;
- (id)_yelpHTTPURLForRequirement:(int)arg1 withUID:(id)arg2 writeAReview:(BOOL)arg3;
@property(readonly, nonatomic) BOOL requiresAttributionInCallout;
- (id)providerSnippetLogoPathForScale:(double)arg1;
- (id)providerLogoPathForScale:(double)arg1;
@property(readonly, nonatomic) NSString *webBaseActionURL;
@property(readonly, nonatomic) NSArray *attributionApps;
@property(readonly, nonatomic) NSString *providerID;
@property(readonly, nonatomic) NSString *providerName;
- (void)dealloc;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 yelpID:(id)arg3;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2;

@end
