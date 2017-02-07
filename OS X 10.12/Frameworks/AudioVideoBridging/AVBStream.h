//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AVBStream : NSObject
{
    unsigned int connection;
    struct IONotificationPort *notificationPort;
    NSObject<OS_dispatch_queue> *notificationsQueue;
    unsigned int notification;
    unsigned long long streamHeaderAddress;
    unsigned long long streamHeaderSize;
    unsigned long long streamPayloadAddress;
    unsigned long long streamPayloadSize;
    unsigned long long dclInfoAddress;
    unsigned long long dclInfoSize;
    unsigned long long _streamID;
}

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)IOClassName;
- (void)dealloc;
@property(readonly, nonatomic) CDStruct_8aa75d9a *dclInfoAddress; // @dynamic dclInfoAddress;
@property(readonly, nonatomic) unsigned long long streamPayloadSize; // @dynamic streamPayloadSize;
@property(readonly, nonatomic) void *streamPayloadAddress; // @dynamic streamPayloadAddress;
@property(readonly, nonatomic) void *streamHeaderAddress; // @dynamic streamHeaderAddress;
- (BOOL)updateDCLsWithInfoFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)setDCLAtIndex:(unsigned int)arg1 withStreamPayloadOffset:(unsigned long long)arg2 andLength:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)setDCLAtIndex:(unsigned int)arg1 withStreamHeaderOffset:(unsigned long long)arg2 andLength:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)setupDCLsWithCallbackPeriod:(unsigned int)arg1 error:(id *)arg2;
- (BOOL)stopStreamingWithError:(id *)arg1;
- (BOOL)startStreamingWithError:(id *)arg1;
- (BOOL)deregisterAsyncDCLCallbackWithError:(id *)arg1;
- (BOOL)registerAsyncDCLCallback:(CDUnknownFunctionPointerType)arg1 withRefcon:(void *)arg2 error:(id *)arg3;
- (id)initWithStreamID:(unsigned long long)arg1 onInterfaceNamed:(id)arg2;

@end
