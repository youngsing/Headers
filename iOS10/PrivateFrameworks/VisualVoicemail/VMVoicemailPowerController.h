//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BCBatteryDeviceController;

@interface VMVoicemailPowerController : NSObject
{
    BCBatteryDeviceController *_controller;
}

+ (id)sharedController;
@property(retain, nonatomic) BCBatteryDeviceController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isDeviceCharging) _Bool deviceCharging;
- (void)dealloc;
- (id)init;

@end

