//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/CADTestingInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADTestingOperationGroup : CADOperationGroup <CADTestingInterface>
{
}

+ (_Bool)requiresEventOrReminderAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventAccess;
- (void)CADTestingSetDatabasePath:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADTestingDatabasePath:(CDUnknownBlockType)arg1;
- (_Bool)accessGrantedToPerformSelector:(SEL)arg1;

@end

