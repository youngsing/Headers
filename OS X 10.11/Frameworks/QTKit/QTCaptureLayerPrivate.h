//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, QTCALayerRenderer, QTCaptureConnection, QTCaptureSession, QTCaptureVideoPreviewOutput;

__attribute__((visibility("hidden")))
@interface QTCaptureLayerPrivate : NSObject
{
    QTCaptureSession *_session;
    QTCaptureVideoPreviewOutput *_videoPreviewOutput;
    NSArray *_availableVideoPreviewConnections;
    QTCaptureConnection *_videoPreviewConnection;
    QTCALayerRenderer *_renderer;
}

@end

