//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallHistory/CHSynchronizableProtocol-Protocol.h>

@protocol OS_dispatch_queue;

@interface CHSynchronizable : NSObject <CHSynchronizableProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (_Bool)executeSyncWithBOOL:(CDUnknownBlockType)arg1;
- (id)executeSyncWithResult:(CDUnknownBlockType)arg1;
- (void)executeSync:(CDUnknownBlockType)arg1;
- (void)execute:(CDUnknownBlockType)arg1;
- (id)initWithQueue:(id)arg1;
- (id)initWithName:(const char *)arg1;

@end

