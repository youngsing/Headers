//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/__NSCFBackgroundSessionTask.h>

__attribute__((visibility("hidden")))
@interface __NSCFBackgroundDownloadTask : __NSCFBackgroundSessionTask
{
    BOOL _finished;
}

@property BOOL finished; // @synthesize finished=_finished;
- (void)cancelByProducingResumeData:(CDUnknownBlockType)arg1;
- (void)_onqueue_cancelByProducingResumeData:(CDUnknownBlockType)arg1;
- (void)_onqueue_didFinishDownloadingToURL:(id)arg1;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_onqueue_didResumeAtOffset:(long long)arg1 expectedTotalBytes:(long long)arg2;
- (void)_onqueue_didWriteData:(long long)arg1 totalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3;
- (void)_onqueue_didReceiveResponse:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;

@end

