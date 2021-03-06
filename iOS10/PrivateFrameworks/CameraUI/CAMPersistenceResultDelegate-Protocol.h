//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMCaptureRequest, CAMPersistenceController, CAMStillImageCaptureResult, CAMStillImageLocalPersistenceResult, CAMVideoCaptureResult, CAMVideoLocalPersistenceResult;

@protocol CAMPersistenceResultDelegate <NSObject>

@optional
- (void)persistenceController:(CAMPersistenceController *)arg1 didCompleteAllLocalPersistenceForRequest:(CAMCaptureRequest *)arg2;
- (void)persistenceController:(CAMPersistenceController *)arg1 didGenerateVideoLocalPersistenceResult:(CAMVideoLocalPersistenceResult *)arg2 forCaptureResult:(CAMVideoCaptureResult *)arg3 fromRequest:(CAMCaptureRequest *)arg4;
- (void)persistenceController:(CAMPersistenceController *)arg1 didGenerateStillImageLocalPersistenceResult:(CAMStillImageLocalPersistenceResult *)arg2 forCaptureResult:(CAMStillImageCaptureResult *)arg3 fromRequest:(CAMCaptureRequest *)arg4;
@end

