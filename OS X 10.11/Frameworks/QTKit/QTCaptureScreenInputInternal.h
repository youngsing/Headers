//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, QTCaptureConnection, QTMediaIOGraphUnitDescription;

__attribute__((visibility("hidden")))
@interface QTCaptureScreenInputInternal : NSObject
{
    QTMediaIOGraphUnitDescription *inputUnitNodeDescription;
    QTCaptureConnection *videoConnection;
    double minimumVideoFrameInterval;
    unsigned int displayID;
    struct CGRect cropRect;
    BOOL usesMouseClickEffect;
    int captureTimeScale;
    NSDictionary *pixelBufferAttributesFromSession;
    double minimumVideoFrameIntervalFromSession;
}

@end

