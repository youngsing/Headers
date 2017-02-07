//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, NSObject, PHAssetResourceRequestOptions, PHInternalAssetResource;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PHAssetResourceRequest : NSOperation
{
    int _cloudResourceRequestID;
    PHInternalAssetResource *_assetResource;
    PHAssetResourceRequestOptions *_options;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_cloudResourceDownloadWaitSemaphore;
    CDUnknownBlockType _dataHandler;
    int _requestID;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) PHAssetResourceRequestOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) int requestID; // @synthesize requestID=_requestID;
- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (_Bool)_downloadResourceForAssetWithLocalIdentifier:(id)arg1 progress:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (long long)_streamDataAtURL:(id)arg1 progress:(CDUnknownBlockType)arg2 dataHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (void)_onQueueSync:(CDUnknownBlockType)arg1;
- (id)initWithRequestID:(int)arg1 assetResource:(id)arg2 options:(id)arg3 dataHandler:(CDUnknownBlockType)arg4;

@end
