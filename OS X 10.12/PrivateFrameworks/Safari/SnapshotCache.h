//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/WBSSiteMetadataImageCacheDelegate-Protocol.h>
#import <Safari/WBSSiteMetadataProvider-Protocol.h>

@class NSMutableDictionary, NSString, NSURL, WBSSiteMetadataImageCache;
@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

__attribute__((visibility("hidden")))
@interface SnapshotCache : NSObject <WBSSiteMetadataImageCacheDelegate, WBSSiteMetadataProvider>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSSiteMetadataImageCache *_imageCache;
    NSMutableDictionary *_urlStringsToRequestSets;
    BOOL _forceUpdateSnapshotImages;
    id <WBSSiteMetadataProviderDelegate> _providerDelegate;
}

+ (id)_imageDirectoryURL;
+ (id)sharedCache;
@property(nonatomic) BOOL forceUpdateSnapshotImages; // @synthesize forceUpdateSnapshotImages=_forceUpdateSnapshotImages;
@property(nonatomic) __weak id <WBSSiteMetadataProviderDelegate> providerDelegate; // @synthesize providerDelegate=_providerDelegate;
- (void).cxx_destruct;
- (id)_scaleSnapshot:(id)arg1 scaleFactor:(double)arg2;
- (id)_lowFidelitySnapshotFromHighFidelitySnapshot:(id)arg1;
- (void)siteMetadataImageCacheDidEmptyCache:(id)arg1;
- (void)siteMetadataImageCache:(id)arg1 didFinishLoadingImage:(id)arg2 forKeyString:(id)arg3;
- (void)stopWatchingUpdatesForRequest:(id)arg1;
- (void)_registerRequest:(id)arg1;
- (id)operationForRequest:(id)arg1;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(char *)arg2;
- (BOOL)canHandleRequest:(id)arg1;
- (void)releaseSnapshotsForURLStrings:(id)arg1;
- (void)releaseSnapshotForURLString:(id)arg1;
- (void)retainSnapshotsForURLStrings:(id)arg1;
- (void)retainSnapshotForURLString:(id)arg1;
- (void)saveSnapshotToDisk:(id)arg1 forURLString:(id)arg2;
- (BOOL)isMissingSnapshotForURLString:(id)arg1;
- (id)snapshotForURLString:(id)arg1;
- (void)emptyCache;
- (void)savePendingChangesBeforeTermination;
- (void)purgeUnneededImages;
@property(readonly, nonatomic) NSURL *imageDirectoryURL;
- (id)initWithImageDirectoryURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

