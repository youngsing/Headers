//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IASSystemInformation : NSObject
{
}

+ (id)localVisibleUsers;
+ (id)machineBoardID;
+ (id)nvramStringForKey:(id)arg1;
+ (BOOL)runningFromInstallMedia;
+ (BOOL)hasAppleIPAddress;
+ (BOOL)isRunningOnACPower;
+ (BOOL)machineHasBattery;

@end
