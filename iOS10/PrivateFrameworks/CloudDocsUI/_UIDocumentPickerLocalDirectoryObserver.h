//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIArrayController.h>

#import <CloudDocsUI/_UIDocumentPickerDirectoryObserver-Protocol.h>
#import <CloudDocsUI/_UIDocumentPickerVnodeDispatchSourceDelegate-Protocol.h>

@class NSArray, NSDate, NSMutableDictionary, NSObject, NSOperationQueue, NSOrderedSet, NSPredicate, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerLocalDirectoryObserver : _UIArrayController <_UIDocumentPickerVnodeDispatchSourceDelegate, _UIDocumentPickerDirectoryObserver>
{
    NSArray *_sortDescriptors;
    NSOrderedSet *_staticItems;
    NSPredicate *_queryPredicate;
    NSObject<OS_dispatch_queue> *_queryDispatchQueue;
    NSArray *_sources;
    NSMutableDictionary *_resultsForSources;
    _Bool _updateScheduled;
    _Bool _afterInitialUpdate;
    NSDate *_lastSnapshotDate;
    NSOperationQueue *_queryWorkerQueue;
}

@property(nonatomic) _Bool afterInitialUpdate; // @synthesize afterInitialUpdate=_afterInitialUpdate;
@property(retain, nonatomic) NSOperationQueue *queryWorkerQueue; // @synthesize queryWorkerQueue=_queryWorkerQueue;
@property(retain, nonatomic) NSDate *lastSnapshotDate; // @synthesize lastSnapshotDate=_lastSnapshotDate;
- (void).cxx_destruct;
- (void)dispatchSourceDidReceiveEvent:(id)arg1;
- (void)updateResultsForSource:(id)arg1;
- (void)initialUpdate;
- (id)gatherResults;
- (id)gatherResultsForSource:(id)arg1;
- (void)callUpdateHandler:(id)arg1 changeDictionary:(id)arg2;
- (id)isVisiblePredicate;
- (_Bool)objectAttributeModified:(id)arg1 newObject:(id)arg2;
@property(retain, nonatomic) NSOrderedSet *staticItems;
@property(retain, nonatomic) NSPredicate *queryPredicate;
- (void)invalidate;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)initWithScopes:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

