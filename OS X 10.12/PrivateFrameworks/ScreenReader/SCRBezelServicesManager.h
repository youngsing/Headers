//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCRBezelServicesManager : NSObject
{
}

+ (id)defaultManager;
- (void)_resetDisplayBrightness:(id)arg1;
- (void)_echoDisplayBrightnessChange:(id)arg1;
- (void)_setDisplayBrightness:(float)arg1;
- (float)displayBrightness;
- (int)_displayIDForBrightnessAdjustment;
- (int)_bootDisplay;
- (void)_muteSystemVolume;
- (void)handleEvent:(struct _CGSEventRecord)arg1;

@end

