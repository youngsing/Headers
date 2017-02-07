//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSOperationQueue, NSString, SSLookupRequest, VSFailable;

__attribute__((visibility("hidden")))
@interface VSAppDescriptionFetchOperation : VSAsyncOperation
{
    NSString *_appAdamID;
    VSFailable *_result;
    SSLookupRequest *_lookupRequest;
    NSOperationQueue *_privateQueue;
    struct CGSize _preferredArtworkSize;
}

@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(retain, nonatomic) SSLookupRequest *lookupRequest; // @synthesize lookupRequest=_lookupRequest;
@property(retain, nonatomic) VSFailable *result; // @synthesize result=_result;
@property(nonatomic) struct CGSize preferredArtworkSize; // @synthesize preferredArtworkSize=_preferredArtworkSize;
@property(copy, nonatomic) NSString *appAdamID; // @synthesize appAdamID=_appAdamID;
- (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;
- (id)_appDescriptionFromLookupResponse:(id)arg1 artworkImage:(id)arg2;
- (void)_handleLookupResponse:(id)arg1;
- (id)initWithAppAdamID:(id)arg1 preferredArtworkSize:(struct CGSize)arg2;
- (id)init;

@end
