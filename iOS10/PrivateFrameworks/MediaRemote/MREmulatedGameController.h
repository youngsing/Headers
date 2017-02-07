//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GCController, MRGameControllerDaemonProxy;

@interface MREmulatedGameController : NSObject
{
    GCController *_controller;
    MRGameControllerDaemonProxy *_remote;
    int _profile;
    unsigned long long _controllerID;
    double _buttonAUpDelay;
}

@property(nonatomic) double buttonAUpDelay; // @synthesize buttonAUpDelay=_buttonAUpDelay;
@property(readonly, nonatomic) unsigned long long controllerID; // @synthesize controllerID=_controllerID;
@property(readonly, nonatomic) int profile; // @synthesize profile=_profile;
- (void)sendGameControllerEvent:(CDStruct_06eb3966 *)arg1;
- (void)dealloc;
- (id)initWithProperties:(void *)arg1;

@end
