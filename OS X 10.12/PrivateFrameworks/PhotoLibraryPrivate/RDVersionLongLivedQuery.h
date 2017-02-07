//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDAlbumVersionsQuery.h>

@class LiRidList, NSDate, PFCoalescer, PFDispatchQueue, RDAdaptiveTimeCoalescer;
@protocol RDVersionLongLivedQueryDelegate;

@interface RDVersionLongLivedQuery : RDAlbumVersionsQuery
{
    PFCoalescer *_queryCoalescer;
    double _coalesceTime;
    NSDate *_coalesceDate;
    RDAdaptiveTimeCoalescer *_timeCoalescer;
    PFDispatchQueue *_sendResultsQueue;
    id <RDVersionLongLivedQueryDelegate> _delegate;
    LiRidList *_versionsIdsToReload;
}

@property(retain, nonatomic) LiRidList *versionsIdsToReload; // @synthesize versionsIdsToReload=_versionsIdsToReload;
@property(nonatomic) __weak id <RDVersionLongLivedQueryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadFilteredVersions;
- (id)posterVersionUuidFromVersions:(id)arg1 persist:(BOOL)arg2;
- (id)posterVersionUuidFromVersions:(id)arg1;
- (void)sendResultsToObserver;
- (void)invalidateIfChangedByNotification:(id)arg1 forKeyPaths:(id)arg2 withChangeType:(unsigned char)arg3;
- (void)internalInit;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAlbum:(id)arg1 options:(id)arg2;

@end
