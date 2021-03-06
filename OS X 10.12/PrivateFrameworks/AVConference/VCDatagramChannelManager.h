//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSService, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCDatagramChannelManager : NSObject
{
    struct _opaque_pthread_mutex_t _stateLock;
    unsigned int _nextToken;
    CDUnknownBlockType _readHandler;
    NSMutableDictionary *_datagramChannels;
    NSMutableDictionary *_destinations;
    NSMutableDictionary *_VFDs;
    IDSService *_service;
}

+ (id)sharedInstance;
@property(copy) CDUnknownBlockType readHandler; // @synthesize readHandler=_readHandler;
- (void)removeDatagramChannelWithToken:(unsigned int)arg1;
- (void)closeDatagramChannelWithToken:(unsigned int)arg1;
- (void)closeVFDWithToken:(unsigned int)arg1;
- (id)datagramChannelWithToken:(unsigned int)arg1;
- (int)setupVTPForDatagramChannel:(id)arg1 withToken:(unsigned int)arg2;
- (int)setupDatagramChannel:(id)arg1 withToken:(unsigned int *)arg2 eventHandler:(CDUnknownBlockType)arg3;
- (id)addDatagramChannelWithDestination:(id)arg1 eventHandler:(CDUnknownBlockType)arg2 token:(unsigned int *)arg3 error:(id *)arg4;
- (id)addDatagramChannelWithDescriptor:(int)arg1 eventHandler:(CDUnknownBlockType)arg2 token:(unsigned int *)arg3 error:(id *)arg4;
- (void)dealloc;
- (id)init;

@end

