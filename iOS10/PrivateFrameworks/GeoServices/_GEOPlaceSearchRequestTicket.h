//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/_GEOPlaceRequestTicket.h>

#import <GeoServices/GEOMapServiceSearchTicket-Protocol.h>

@class GEOMapRegion, GEOMapServiceTraits, GEORelatedSearchSuggestion, NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _GEOPlaceSearchRequestTicket : _GEOPlaceRequestTicket <GEOMapServiceSearchTicket>
{
}

@property(readonly, nonatomic) NSString *searchQuery;

// Remaining properties
@property(readonly, nonatomic, getter=isChainResultSet) _Bool chainResultSet;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *relatedSearchSuggestions;
@property(readonly, nonatomic) NSDictionary *responseUserInfo;
@property(readonly, nonatomic) GEOMapRegion *resultBoundingRegion;
@property(readonly, nonatomic) NSString *resultDisplayHeader;
@property(readonly, nonatomic) NSString *resultSectionHeader;
@property(readonly, nonatomic) int searchResultType;
@property(readonly, nonatomic) _Bool shouldEnableRedoSearch;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;

@end

