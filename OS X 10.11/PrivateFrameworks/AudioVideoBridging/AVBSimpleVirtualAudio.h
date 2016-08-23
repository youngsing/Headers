//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol ADDDeviceService;

@interface AVBSimpleVirtualAudio : NSObject
{
    NSXPCConnection *_daemonConnection;
    id <ADDDeviceService> _daemonObject;
}

+ (id)simpleVirtualAudio;
- (void)dealloc;
- (void)getSimpleVirtualAudioInterfaceList:(CDUnknownBlockType)arg1;
- (void)removeSimpleVirtualAudioOnInterface:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addSimpleVirtualAudioOnInterface:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end
