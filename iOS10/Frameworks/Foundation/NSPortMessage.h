//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSPort;

@interface NSPortMessage : NSObject
{
    NSPort *localPort;
    NSPort *remotePort;
    NSMutableArray *components;
    unsigned int msgid;
    void *reserved2;
    void *reserved;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)sendBeforeDate:(id)arg1;
@property(readonly, copy) NSArray *components;
@property unsigned int msgid;
@property(readonly, retain) NSPort *receivePort;
@property(readonly, retain) NSPort *sendPort;
- (void)dealloc;
- (id)initWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3;
- (id)initWithSendPort:(id)arg1 receivePort:(id)arg2 components:(id)arg3;

@end

