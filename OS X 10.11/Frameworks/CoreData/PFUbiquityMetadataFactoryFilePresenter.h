//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreData/NSFilePresenter-Protocol.h>

@class NSOperationQueue, NSString, NSURL, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityMetadataFactoryFilePresenter : NSObject <NSFilePresenter>
{
    NSURL *_presentedItemURL;
    PFUbiquityLocation *_presentedItemLocation;
}

+ (void)initialize;
@property(readonly, nonatomic) PFUbiquityLocation *presentedItemLocation; // @synthesize presentedItemLocation=_presentedItemLocation;
@property(readonly, copy) NSURL *presentedItemURL; // @synthesize presentedItemURL=_presentedItemURL;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)savePresentedItemChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)relinquishPresentedItemToWriter:(CDUnknownBlockType)arg1;
- (void)relinquishPresentedItemToReader:(CDUnknownBlockType)arg1;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
- (void)dealloc;
- (id)initWithMetadataStoreFileLocation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

