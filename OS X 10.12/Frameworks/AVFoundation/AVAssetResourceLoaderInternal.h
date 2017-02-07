//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAssetClientURLRequestHelper, AVAssetResourceLoaderURLSessionDataDelegate, AVWeakReference, NSMutableDictionary, NSOperation, NSOperationQueue, NSURLSession;
@protocol NSURLSessionDataDelegate, OS_dispatch_queue;

@interface AVAssetResourceLoaderInternal : NSObject
{
    AVAssetClientURLRequestHelper *URLRequestHelper;
    AVWeakReference *weakReferenceToAsset;
    NSObject<OS_dispatch_queue> *stateQueue;
    AVWeakReference *weakReferenceToDelegate;
    NSObject<OS_dispatch_queue> *delegateQueue;
    int loadingCancelled;
    NSMutableDictionary *pendingRequests;
    NSObject<OS_dispatch_queue> *contentInformationCachingQueue;
    NSMutableDictionary *contentInformationCache;
    BOOL preloadsEligibleContentKeys;
    long long makeResourceLoaderURLSessionSupportStuffOnlyOnce;
    NSURLSession *URLSession;
    NSOperation *waitForAssetURLSessionStuffOperation;
    NSOperationQueue *URLSessionOperationQueue;
    id <NSURLSessionDataDelegate> URLSessionDataDelegate;
    AVAssetResourceLoaderURLSessionDataDelegate *shimURLSessionDataDelegate;
}

@end
