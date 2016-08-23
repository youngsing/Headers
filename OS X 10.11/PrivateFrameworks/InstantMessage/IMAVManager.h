//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMAVManager : NSObject
{
}

+ (void)_setAVManagerRequested:(BOOL)arg1 URLToShare:(id)arg2;
+ (id)sharedAVManager;
+ (id)sharedAVManagerReference;
- (void)_startListeningForIMDaemonListenerNotifications;
- (void)_updateControlBarFromDictionaryRepresentation:(id)arg1;
- (void)_provideAudioOnDeviceUID:(id)arg1 channels:(id)arg2;
- (void)_IMVideoDataSourceNeedsUpdate;
- (BOOL)_fillBuffer:(struct __CVBuffer *)arg1;
- (id)_iPhotoAlbumIDToShare;
- (void)_setAVManagerRequested:(BOOL)arg1 URLToShare:(id)arg2;
- (void)stop;
- (void)start;
- (id)controlBar;
- (id)audioDeviceChannels;
- (id)audioDeviceUID;
- (long long)numberOfAudioChannels;
- (void)setNumberOfAudioChannels:(long long)arg1;
- (unsigned long long)videoOptimizationOptions;
- (void)setVideoOptimizationOptions:(unsigned long long)arg1;
- (id)videoDataSource;
- (void)setVideoDataSource:(id)arg1;
- (id)URLToShare;
- (unsigned long long)state;

@end

