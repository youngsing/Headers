//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVMLKit/ISURLOperationDelegate-Protocol.h>
#import <TVMLKit/TVImageLoader-Protocol.h>

@class ISOperationQueue, NSString;

@interface TVURLImageLoader : NSObject <ISURLOperationDelegate, TVImageLoader>
{
    ISOperationQueue *imageLoadQueue;
    _Bool _imageRotationEnabled;
}

+ (id)sharedInstance;
@property(nonatomic, getter=isImageRotationEnabled) _Bool imageRotationEnabled; // @synthesize imageRotationEnabled=_imageRotationEnabled;
- (void).cxx_destruct;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)cancelLoad:(id)arg1;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)imageKeyForObject:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
