//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVAssetResourceLoaderRequest-Protocol.h>

@class AVAssetResourceLoadingContentInformationRequest, AVAssetResourceLoadingDataRequest, AVAssetResourceLoadingRequestInternal, NSString, NSURLRequest, NSURLResponse;

@interface AVAssetResourceLoadingRequest : NSObject <AVAssetResourceLoaderRequest>
{
    AVAssetResourceLoadingRequestInternal *_loadingRequest;
}

+ (SEL)_selectorForInformingDelegateOfCancellationByFig;
- (void)_removeFigAssetListeners;
- (void)_addFigAssetListeners;
- (void)_removeFigAssetImageGeneratorListeners;
- (void)_addFigAssetImageGeneratorListeners;
- (void)_removeFigPlaybackItemListeners;
- (void)_addFigPlaybackItemListeners;
- (id)persistentContentKeyFromKeyVendorResponse:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)generateStreamingContentKeyRequestDataAsynchronouslyForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)streamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void)finishLoadingWithResponse:(id)arg1 data:(id)arg2 redirect:(id)arg3;
- (void)finishLoadingWithError:(id)arg1;
- (void)finishLoading;
- (void)_sendDataIncrementally:(id)arg1 data:(id)arg2;
- (void)_sendDictionaryForURLRequest:(id)arg1 context:(id)arg2;
- (id)serializableRepresentation;
@property(copy, nonatomic) NSURLRequest *redirect;
- (void)_appendToCachedData:(id)arg1;
- (id)_getAndClearCachedData;
@property(copy, nonatomic) NSURLResponse *response;
@property(readonly, nonatomic) AVAssetResourceLoadingDataRequest *dataRequest;
- (void)_setDataRequest:(id)arg1;
@property(readonly, nonatomic) AVAssetResourceLoadingContentInformationRequest *contentInformationRequest;
- (void)_setContentInformationRequest:(id)arg1;
- (void)_performCancellationByClient;
- (BOOL)_shouldInformDelegateOfFigCancellation;
@property(readonly, nonatomic, getter=isCancelled) BOOL cancelled;
- (BOOL)_tryToMarkAsCancelled;
- (BOOL)finished;
@property(readonly, nonatomic, getter=isFinished) BOOL finished;
@property(readonly, nonatomic) NSURLRequest *request;
- (id)_requestDictionary;
- (id)_resourceLoader;
- (id)_weakReference;
@property(readonly, copy) NSString *description;
- (void)finalize;
- (void)dealloc;
- (id)initWithResourceLoader:(id)arg1 requestDictionary:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

