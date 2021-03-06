//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/UNSNotificationSchedulerDelegate-Protocol.h>

@class NSSet, NSString, UNSNotificationScheduler;

@interface MTNextAlarmManager : NSObject <UNSNotificationSchedulerDelegate>
{
    NSSet *_nextAlarms;
    CDUnknownBlockType _updateHandler;
    UNSNotificationScheduler *_scheduler;
}

@property(retain, nonatomic) UNSNotificationScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(retain, nonatomic) NSSet *nextAlarms; // @synthesize nextAlarms=_nextAlarms;
- (void).cxx_destruct;
- (void)notificationScheduler:(id)arg1 didChangeScheduledLocalNotifications:(id)arg2;
- (void)calculateNextAlarmsFromNotifications:(id)arg1;
- (id)initWithNotificationScheduler:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

