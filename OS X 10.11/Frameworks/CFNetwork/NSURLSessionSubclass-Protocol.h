//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSObject-Protocol.h>

@class NSData, NSString, NSURL, NSURLRequest, NSURLSessionDataTask, NSURLSessionDownloadTask, NSURLSessionUploadTask;

@protocol NSURLSessionSubclass <NSObject>
- (void)_onqueue_getTasksWithCompletionHandler:(void (^)(NSArray *))arg1;
- (void)_onqueue_resetStorageWithCompletionHandler:(void (^)(void))arg1;
- (void)_onqueue_completeInvalidation:(BOOL)arg1;
- (void)_onqueue_flushWithCompletionHandler:(void (^)(void))arg1;
- (NSURLSessionDownloadTask *)downloadTaskForRequest:(NSURLRequest *)arg1 downloadFilePath:(NSString *)arg2 resumeData:(NSData *)arg3 completion:(void (^)(NSURL *, NSURLResponse *, NSError *))arg4;
- (NSURLSessionUploadTask *)uploadTaskForRequest:(NSURLRequest *)arg1 uploadFile:(NSURL *)arg2 bodyData:(NSData *)arg3 completion:(void (^)(NSData *, NSURLResponse *, NSError *))arg4;
- (NSURLSessionDataTask *)dataTaskForRequest:(NSURLRequest *)arg1 completion:(void (^)(NSData *, NSURLResponse *, NSError *))arg2;
@end

