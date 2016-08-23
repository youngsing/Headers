//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSColor, NSView, QTCaptureConnection, QTCaptureSession, QTCaptureVideoPreviewOutput;
@protocol QTImageConsumerVendor;

__attribute__((visibility("hidden")))
@interface QTCaptureViewInternal : NSObject
{
    QTCaptureSession *captureSession;
    QTCaptureVideoPreviewOutput *videoPreviewOutput;
    NSArray *availableVideoPreviewConnections;
    QTCaptureConnection *videoPreviewConnection;
    NSView<QTImageConsumerVendor> *rendererView;
    NSColor *fillColor;
    BOOL preservesAspectRatio;
    struct CGSize latestImageDimensionsFromDelegate;
    BOOL useDelegateImageAspectRatio;
    int delegateImageDimensionsLock;
    id delegate;
    int delegateLock;
}

@end
