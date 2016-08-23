//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PubSub/PSMessageQueueDelegate-Protocol.h>

@class NSArray, NSError, NSString;

__attribute__((visibility("hidden")))
@interface PSTempDelegate : NSObject <PSMessageQueueDelegate>
{
    NSArray *_messages;
    NSError *_error;
}

@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSArray *messages; // @synthesize messages=_messages;
- (void)dealloc;
- (void)messageQueue:(id)arg1 failedToSendMessages:(id)arg2 error:(id)arg3;
- (void)messageQueue:(id)arg1 sentMessages:(id)arg2;
- (void)messageQueue:(id)arg1 fetchFailedWithError:(id)arg2;
- (void)messageQueue:(id)arg1 fetchedNewMessages:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

