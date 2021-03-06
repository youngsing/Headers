//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AudioVideoBridging/AVBAVDECCEntity.h>

@class AVB17221AEMEntity, NSDictionary;

@interface AVBBuiltInAVDECCEntity : AVBAVDECCEntity
{
    NSDictionary *_controllerMappings;
    BOOL _activated;
    AVB17221AEMEntity *_localModel;
}

+ (id)keyPathsForValuesAffectingRemoteModel;
@property(nonatomic, getter=isActivated) BOOL activated; // @synthesize activated=_activated;
@property(retain) AVB17221AEMEntity *localModel; // @synthesize localModel=_localModel;
- (void)dealloc;
@property(retain) AVB17221AEMEntity *remoteModel; // @dynamic remoteModel;
- (id)remoteObjectsForLocalObject:(id)arg1;
- (id)localObjectsForRemoteObject:(id)arg1;
- (BOOL)setRemoteConfiguration:(unsigned short)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)setLocalConfiguration:(unsigned short)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)startRemoteOperation:(unsigned short)arg1 onDescriptorOfType:(unsigned short)arg2 andIndex:(unsigned short)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (BOOL)startLocalOperation:(unsigned short)arg1 onDescriptorOfType:(unsigned short)arg2 andIndex:(unsigned short)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (BOOL)getRemoteControlWithIndex:(unsigned short)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)setRemoteControlWithIndex:(unsigned short)arg1 toValue:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)getLocalControlWithIndex:(unsigned short)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)setLocalControlWithIndex:(unsigned short)arg1 toValue:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)setRemoteOutputStreamWithIndex:(unsigned short)arg1 toStreamFormat:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)setRemoteInputStreamWithIndex:(unsigned short)arg1 toStreamFormat:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)setLocalOutputStreamWithIndex:(unsigned short)arg1 toStreamFormat:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)setLocalInputStreamWithIndex:(unsigned short)arg1 toStreamFormat:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)setRemoteIdentifyWithIndex:(unsigned short)arg1 toEnabled:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)setLocalIdentifyWithIndex:(unsigned short)arg1 toEnabled:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)setRemoteClockDomainWithIndex:(unsigned short)arg1 toRemoteClockSourceWithIndex:(unsigned short)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)setLocalClockDomainWithIndex:(unsigned short)arg1 toLocalClockSourceWithIndex:(unsigned short)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)setRemoteVideoClusterWithIndex:(unsigned short)arg1 toFrameRate:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)setLocalVideoClusterWithIndex:(unsigned short)arg1 toFrameRate:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)setRemoteVideoClusterWithIndex:(unsigned short)arg1 toFormatSpecific:(id)arg2 aspectRatio:(id)arg3 videoSize:(id)arg4 andColorSpace:(unsigned short)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;
- (BOOL)setLocalVideoClusterWithIndex:(unsigned short)arg1 toFormatSpecific:(id)arg2 aspectRatio:(id)arg3 videoSize:(id)arg4 andColorSpace:(unsigned short)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;
- (BOOL)setRemoteAudioUnitWithIndex:(unsigned short)arg1 toSamplingRate:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)setLocalAudioUnitWithIndex:(unsigned short)arg1 toSamplingRate:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)stopRemoteOutputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)stopRemoteInputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)stopLocalOutputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)stopLocalInputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)startRemoteOutputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)startRemoteInputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)startLocalOutputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)startLocalInputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)setRemoteObjectOfType:(unsigned short)arg1 withIndex:(unsigned short)arg2 inConfiguration:(unsigned short)arg3 toName:(id)arg4 atIndex:(unsigned short)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;
- (BOOL)setLocalObjectOfType:(unsigned short)arg1 withIndex:(unsigned short)arg2 inConfiguration:(unsigned short)arg3 toName:(id)arg4 atIndex:(unsigned short)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;
- (BOOL)clearAllConnections;
- (BOOL)disconnectAllStreams;
- (BOOL)connectAllStreams;
- (BOOL)disconnectLocalOutputStreamWithIndex:(unsigned short)arg1;
- (BOOL)disconnectRemoteInputStreamWithIndex:(unsigned short)arg1;
- (BOOL)_disconnectLocalOutputStreamWithIndex:(unsigned short)arg1;
- (BOOL)_disconnectRemoteInputStreamWithIndex:(unsigned short)arg1;
- (BOOL)_disconnectStreamWithRemoteInputIndex:(unsigned short)arg1 andLocalOutputIndex:(unsigned short)arg2;
- (BOOL)disconnectRemoteOutputStreamWithIndex:(unsigned short)arg1;
- (BOOL)disconnectLocalInputStreamWithIndex:(unsigned short)arg1;
- (BOOL)_disconnectRemoteOutputStreamWithIndex:(unsigned short)arg1;
- (BOOL)_disconnectLocalInputStreamWithIndex:(unsigned short)arg1;
- (BOOL)_disconnectStreamWithLocalInputIndex:(unsigned short)arg1 andRemoteOutputIndex:(unsigned short)arg2;
- (BOOL)connectLocalOutputStreamWithIndex:(unsigned short)arg1 streamingWait:(BOOL)arg2 classB:(BOOL)arg3;
- (BOOL)connectRemoteInputStreamWithIndex:(unsigned short)arg1 streamingWait:(BOOL)arg2 classB:(BOOL)arg3;
- (BOOL)_connectLocalOutputStreamWithIndex:(unsigned short)arg1 streamingWait:(BOOL)arg2 classB:(BOOL)arg3;
- (BOOL)_connectRemoteInputStreamWithIndex:(unsigned short)arg1 streamingWait:(BOOL)arg2 classB:(BOOL)arg3;
- (BOOL)_connectStreamWithRemoteInputIndex:(unsigned short)arg1 andLocalOutputIndex:(unsigned short)arg2 streamingWait:(BOOL)arg3 classB:(BOOL)arg4;
- (BOOL)connectRemoteOutputStreamWithIndex:(unsigned short)arg1 streamingWait:(BOOL)arg2 classB:(BOOL)arg3;
- (BOOL)connectLocalInputStreamWithIndex:(unsigned short)arg1 streamingWait:(BOOL)arg2 classB:(BOOL)arg3;
- (BOOL)_connectRemoteOutputStreamWithIndex:(unsigned short)arg1 streamingWait:(BOOL)arg2 classB:(BOOL)arg3;
- (BOOL)_connectLocalInputStreamWithIndex:(unsigned short)arg1 streamingWait:(BOOL)arg2 classB:(BOOL)arg3;
- (BOOL)_connectStreamWithLocalInputIndex:(unsigned short)arg1 andRemoteOutputIndex:(unsigned short)arg2 streamingWait:(BOOL)arg3 classB:(BOOL)arg4;
- (void)createLocalModel;
- (BOOL)deactivateEntity;
- (BOOL)activateEntity;
- (id)initWithEntity:(id)arg1 andInterface:(id)arg2;

@end

