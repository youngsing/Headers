//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSFilePresenter-Protocol.h>

@class NSOperationQueue, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface NSApplicationBundlePresenter : NSObject <NSFilePresenter>
{
}

- (void)relinquishPresentedItemToWriter:(CDUnknownBlockType)arg1;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

