//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class QTBackgroundQueue, QTCaptureConnection, QTCaptureDecompressedAudioOutput;

__attribute__((visibility("hidden")))
@interface QTCaptureDecompressedAudioOutputCallbackData : NSObject
{
    QTCaptureDecompressedAudioOutput *_output;
    QTCaptureConnection *_connection;
    QTBackgroundQueue *_backgroundQueue;
}

+ (id)callbackDataWithOutput:(id)arg1 connection:(id)arg2 backgroundQueue:(id)arg3;
- (id)backgroundQueue;
- (id)connection;
- (id)output;
- (void)dealloc;
- (id)initWithOutput:(id)arg1 connection:(id)arg2 backgroundQueue:(id)arg3;

@end

