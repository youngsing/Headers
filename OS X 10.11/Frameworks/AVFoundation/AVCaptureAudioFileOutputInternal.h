//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCaptureFileOutputRecordingOperationDescriptor, AVCaptureOperationDescriptorQueue, MediaIOGraphNodeDescription, NSArray, NSError, NSLock, NSMutableArray, NSString, NSTimer, NSURL;

@interface AVCaptureAudioFileOutputInternal : NSObject
{
    struct __CFDictionary *splitterUnits;
    struct __CFDictionary *mixerUnits;
    struct __CFDictionary *compressorUnits;
    struct __CFDictionary *compressorRenderCallbackContextTokens;
    struct __CFDictionary *fileControlCallbackContextTokens;
    MediaIOGraphNodeDescription *fileWriterOutputUnit;
    unsigned int activeConnectionCount;
    AVCaptureOperationDescriptorQueue *operationDescriptorQueue;
    NSLock *operationDescriptorQueueLock;
    AVCaptureFileOutputRecordingOperationDescriptor *runningRecordingOperationDescriptor;
    int runningRecordingOperationDescriptorLock;
    CDStruct_1b6d18a9 syncTime;
    void *syncTimeConnection;
    int syncTimeLock;
    unsigned long long curAudioBuffer;
    CDStruct_1b6d18a9 timeWritten;
    long long sizeWritten;
    int statsLock;
    int metadataLock;
    BOOL wasForcedToPause;
    NSString *fileUTI;
    unsigned int fileType;
    NSError *stopError;
    int stopErrorLock;
    NSMutableArray *activeConnections;
    NSArray *noDataConnections;
    int connectionsLock;
    BOOL fileControlCallbackRanSinceLastCheck;
    BOOL fileControlCallbackTimedOut;
    int fileControlCallbackTimeoutLock;
    NSTimer *fileControlCallbackTimeoutTimer;
    NSURL *outputFileURL;
    BOOL recordingPaused;
    int recordingStateLock;
    NSArray *metadata;
}

@end

