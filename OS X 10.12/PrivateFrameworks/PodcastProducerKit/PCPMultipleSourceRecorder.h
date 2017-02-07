//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PodcastProducerKit/PCPSourceRecorder.h>

#import <PodcastProducerKit/NSCoding-Protocol.h>

@class NSArray, NSDictionary, NSString, PCPSession;

@interface PCPMultipleSourceRecorder : PCPSourceRecorder <NSCoding>
{
    NSArray *_sourceRecorders;
    NSArray *_sourceRecorderSubmissionOrder;
    NSString *_workflowUUID;
    NSDictionary *_metadata;
    PCPSession *_session;
}

+ (id)recorderWithSourceRecorders:(id)arg1;
@property(retain) PCPSession *session; // @synthesize session=_session;
@property(retain) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain) NSString *workflowUUID; // @synthesize workflowUUID=_workflowUUID;
@property(retain) NSArray *sourceRecorderSubmissionOrder; // @synthesize sourceRecorderSubmissionOrder=_sourceRecorderSubmissionOrder;
@property(retain) NSArray *sourceRecorders; // @synthesize sourceRecorders=_sourceRecorders;
- (BOOL)isRemote;
- (void)recorderFailedToCancelRecording:(id)arg1 error:(id)arg2;
- (void)recorderDidCancelRecording:(id)arg1;
- (void)cancel;
- (void)recorderFailedToStopRecording:(id)arg1 error:(id)arg2;
- (void)recorderDidStopRecording:(id)arg1;
- (void)stop;
- (void)recorderFailedToResumeRecording:(id)arg1 error:(id)arg2;
- (void)recorderDidResumeRecording:(id)arg1;
- (void)resume;
- (void)recorderFailedToPauseRecording:(id)arg1 error:(id)arg2;
- (void)recorderDidPauseRecording:(id)arg1;
- (void)pause;
- (void)recorderFailedToStartRecording:(id)arg1 error:(id)arg2;
- (void)recorderDidStartRecording:(id)arg1;
- (void)startWithDelay:(double)arg1;
- (void)bootstrap;
- (BOOL)sourceRecordersHaveValue:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceRecorders:(id)arg1;
- (void)commonInit;

@end
