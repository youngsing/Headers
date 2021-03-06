//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AVRecorder : NSObject
{
    struct AVRecorderPrivate *_priv;
}

- (void)makeError:(id *)arg1 withDescription:(id)arg2 code:(int)arg3;
- (_Bool)audioCurrentAverageDecibelLevels:(float *)arg1 andPeakDecibelLevels:(float *)arg2;
- (_Bool)audioCurrentAverageVolumeLevels:(float *)arg1 andPeakVolumeLevels:(float *)arg2;
- (unsigned long long)audioNumDeviceChannels;
- (double)recordedDuration;
- (long long)recordedFileSizeInBytes;
- (void)setMicVolume:(float)arg1;
- (float)micVolume;
- (void)deactivate;
- (_Bool)autoFocusAtPoint:(struct CGPoint)arg1;
- (_Bool)takePhoto;
- (_Bool)isActive;
- (_Bool)isRecording;
- (void)stop;
- (_Bool)start;
- (_Bool)activate:(id *)arg1;
- (void)implNotification:(id)arg1;
- (id)attributeForKey:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (void)dealloc;
- (id)init;

@end

