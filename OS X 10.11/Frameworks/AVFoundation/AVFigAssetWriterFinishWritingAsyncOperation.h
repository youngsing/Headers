//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVOperation.h>

#import <AVFoundation/AVAssetWriterFigAssetWriterNotificationHandlerDelegate-Protocol.h>

@class AVAssetWriterFigAssetWriterNotificationHandler, NSString;

@interface AVFigAssetWriterFinishWritingAsyncOperation : AVOperation <AVAssetWriterFigAssetWriterNotificationHandlerDelegate>
{
    struct OpaqueFigAssetWriter *_figAssetWriter;
    AVAssetWriterFigAssetWriterNotificationHandler *_notificationHandler;
}

- (void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)didEnterTerminalState;
- (void)cancel;
- (void)start;
- (BOOL)isAsynchronous;
- (void)finalize;
- (void)dealloc;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
