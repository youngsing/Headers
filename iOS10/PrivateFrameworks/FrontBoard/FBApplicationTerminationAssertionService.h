//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBApplicationTerminationAssertionServiceServer, NSMutableDictionary;
@protocol FBApplicationTerminationAssertionServiceDelegate, OS_dispatch_queue;

@interface FBApplicationTerminationAssertionService : NSObject
{
    NSMutableDictionary *_terminationAssertionsByBundleID;
    NSObject<OS_dispatch_queue> *_queue;
    FBApplicationTerminationAssertionServiceServer *_server;
    id <FBApplicationTerminationAssertionServiceDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) id <FBApplicationTerminationAssertionServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)removeTerminationAssertion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addTerminationAssertion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)canAcquireTerminationAssertion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)terminationAssertionsForBundleID:(id)arg1 withReason:(id)arg2;
- (id)terminationAssertionsForBundleID:(id)arg1;
- (void)_queue_continueAcquisition:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_queue_removeTerminationAssertion:(id)arg1;
- (void)_queue_addTerminationAssertion:(id)arg1;
- (id)_requestPluginHoldForAppInfo:(id)arg1;
- (void)dealloc;
- (id)init;

@end

