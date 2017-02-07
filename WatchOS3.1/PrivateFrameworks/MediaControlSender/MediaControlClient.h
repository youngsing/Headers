//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface MediaControlClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    struct MediaControlClientImp *_client;
    NSObject<OS_dispatch_queue> *_eventHandlerQueue;
    CDUnknownBlockType _eventHandlerBlock;
}

- (void)setSlideshowInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getSlideshowInfoWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getSlideshowFeaturesWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)getProperty:(id)arg1 qualifier:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)sendPhotoData:(id)arg1 options:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)sendPhotoData:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)startPresentation:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setEventHandlerQueue:(id)arg1 eventHandlerBlock:(CDUnknownBlockType)arg2;
- (void)performRemoteAction:(id)arg1 withParams:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)ensureDisconnected;
- (void)ensureConnected;
- (void)setPassword:(id)arg1;
- (void)setHost:(id)arg1;
- (void)checkAuthentication;
- (void)invalidate;
- (void)dealloc;
- (id)init;
- (struct MediaControlClientImp *)internalClient;

@end
