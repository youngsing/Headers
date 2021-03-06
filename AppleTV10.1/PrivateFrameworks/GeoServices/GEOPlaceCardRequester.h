//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOPlaceDataProxy-Protocol.h>

@class NSString;
@protocol GEOPlaceDataProxy;

@interface GEOPlaceCardRequester : NSObject <GEOPlaceDataProxy>
{
    id <GEOPlaceDataProxy> _proxy;
}

+ (id)sharedRequester;
+ (void)useRemoteProxy;
+ (void)useLocalProxy;
- (void)clearCache;
- (void)shrinkBySize:(unsigned long long)arg1 finished:(CDUnknownBlockType)arg2;
- (void)calculateFreeableSpaceWithHandler:(CDUnknownBlockType)arg1;
- (void)applyRAPUpdatedMapItems:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)performPlaceDataRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 networkActivity:(CDUnknownBlockType)arg5 requesterHandler:(CDUnknownBlockType)arg6;
- (void)trackPlaceData:(id)arg1;
- (void)requestPhoneNumbers:(id)arg1 allowCellularDataForLookup:(_Bool)arg2 traits:(id)arg3 auditToken:(id)arg4 networkActivity:(CDUnknownBlockType)arg5 requesterHandler:(CDUnknownBlockType)arg6;
- (void)requestMUIDs:(id)arg1 resultProviderID:(int)arg2 includeETA:(_Bool)arg3 traits:(id)arg4 options:(unsigned long long)arg5 auditToken:(id)arg6 networkActivity:(CDUnknownBlockType)arg7 requesterHandler:(CDUnknownBlockType)arg8;
- (void)fetchAllCacheEntriesWithRequesterHandler:(CDUnknownBlockType)arg1;
- (void)requestPhoneNumbers:(id)arg1 allowCellularDataForLookup:(_Bool)arg2 traits:(id)arg3 auditToken:(id)arg4 requesterHandler:(CDUnknownBlockType)arg5;
- (void)requestComponentsFromNetwork:(id)arg1 muid:(unsigned long long)arg2 resultProviderID:(int)arg3 traits:(id)arg4 auditToken:(id)arg5 requesterHandler:(CDUnknownBlockType)arg6;
- (void)requestMUIDs:(id)arg1 resultProviderID:(int)arg2 includeETA:(_Bool)arg3 traits:(id)arg4 options:(unsigned long long)arg5 auditToken:(id)arg6 requesterHandler:(CDUnknownBlockType)arg7;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

