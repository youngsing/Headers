//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AudioVideoBridging/AVBCAObject.h>

@class NSMutableArray;

@interface AVBCACoreAudio : AVBCAObject
{
    unsigned int _cadPort;
    struct dispatch_source_s *_deathSource;
    struct dispatch_queue_s *_deathQueue;
    NSMutableArray *_clients;
    NSMutableArray *_plugins;
}

+ (id)coreAudio;
+ (id)sharedCoreAudioObject;
- (void)dealloc;
- (id)deviceObjectIDs;
- (unsigned int)pluginWithBundleID:(id)arg1;
- (unsigned int)transportManagerWithBundleID:(id)arg1;
- (unsigned int)defaultOutputAudioDevice;
- (unsigned int)defaultInputAudioDevice;
- (unsigned int)deviceWithUID:(id)arg1;
- (unsigned int)boxWithUID:(id)arg1;
- (void)removePlugin:(id)arg1;
- (void)addPlugin:(id)arg1;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (void)_teardownDeathSource;
- (void)_setupDeathSource;
- (id)initWithAudioObjectID:(unsigned int)arg1;

@end
