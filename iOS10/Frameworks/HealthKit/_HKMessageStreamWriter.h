//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSStreamDelegate-Protocol.h>

@class NSData, NSError, NSInputStream, NSMutableArray, NSOutputStream, NSString;
@protocol OS_dispatch_queue;

@interface _HKMessageStreamWriter : NSObject <NSStreamDelegate>
{
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSObject<OS_dispatch_queue> *_streamQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSMutableArray *_pendingStreamOperationBlocks;
    NSData *_currentStreamData;
    unsigned long long _currentStreamDataOffset;
    NSError *_streamError;
    CDUnknownBlockType _currentCompletion;
    _Bool _hasWrittenStreamVersion;
    _Bool _willFinish;
    _Bool _finished;
    unsigned long long _bufferSize;
}

@property(readonly) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(readonly) unsigned long long bufferSize; // @synthesize bufferSize=_bufferSize;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (_Bool)_streamQueue_closeStream;
- (void)_streamQueue_finishCurrentMessageWithError:(id)arg1;
- (void)_streamQueue_handlePendingOperations;
- (void)_streamQueue_setCurrentMessageData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)finish;
- (void)writeMessageData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithOutputStream:(id)arg1;
- (id)initWithBufferSize:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

