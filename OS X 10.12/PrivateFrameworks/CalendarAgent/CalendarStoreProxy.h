//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarAgent/CalendarLinkProxy.h>

#import <CalendarAgent/CalendarStore-Protocol.h>

@interface CalendarStoreProxy : CalendarLinkProxy <CalendarStore>
{
}

+ (id)_defaultLocalCalendarAttachmentsBackupPath;
+ (BOOL)_calendarIsDefaultLocal:(id)arg1;
- (void)task:(id)arg1 isExchangeCompatibleWithReply:(CDUnknownBlockType)arg2;
- (void)saveTask:(id)arg1 originatorProcessId:(int)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)removeTask:(id)arg1 originatorProcessId:(int)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)fetchTasksWithSharedUid:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)fetchTasksWithPredicate:(id)arg1 inCalendars:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)exchangeCompatibleTaskWithTask:(id)arg1 withCalendar:(id)arg2 originatorProcessId:(int)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)anyLocalRemindersExistWithReply:(CDUnknownBlockType)arg1;
- (void)recurrenceRuleFromICSString:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)saveGroup:(id)arg1 originatorProcessId:(int)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)removeGroup:(id)arg1 originatorProcessId:(int)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)mainPrincipalForAccount:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)groupWithUid:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)groupWithPrincipalUrl:(id)arg1 userName:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)groupWithExchangeUrl:(id)arg1 externalURL:(id)arg2 userName:(id)arg3 emailAddress:(id)arg4 withReply:(CDUnknownBlockType)arg5;
- (void)groupsWithReply:(CDUnknownBlockType)arg1;
- (void)fetchPrincipalsWithPredicate:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)saveEvent:(id)arg1 span:(int)arg2 originatorProcessId:(int)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)removeEvent:(id)arg1 span:(int)arg2 originatorProcessId:(int)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)fetchEventsWithSharedUid:(id)arg1 occurrence:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)fetchEventsWithSharedUid:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)fetchEventsWithPredicate:(id)arg1 inCalendars:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)expandEvent:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 isInvitation:(BOOL)arg4 originalDuration:(double)arg5 withReply:(CDUnknownBlockType)arg6;
- (void)eventWithItemId:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)eventForRecurrenceException:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)saveCalendar:(id)arg1 originatorProcessId:(int)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)removeCalendar:(id)arg1 originatorProcessId:(int)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)migrateLocalCalendarsToGroup:(id)arg1 originatorProcessId:(int)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)fetchLocalCalendarsWithPredicate:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)fetchCalendarsWithPredicate:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)defaultLocalCalendarAttachmentsBackupPathWithReply:(CDUnknownBlockType)arg1;
- (void)calendarsForGroup:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)calendar:(id)arg1 hasCapability:(int)arg2 reply:(CDUnknownBlockType)arg3;
- (void)anyLocalCalendarsExistWithReply:(CDUnknownBlockType)arg1;
- (void)anyLocalCalendarHasAttachmentsWithReply:(CDUnknownBlockType)arg1;
- (void)activeCalendarWithReply:(CDUnknownBlockType)arg1;
- (void)setPassword:(id)arg1 forAccount:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)passwordForAccount:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)remoteManagedObjectWithObjectId:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)nodeWithUid:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)setupCalendarPersistenceWithReply:(CDUnknownBlockType)arg1;
- (void)setCurrentTimeZone:(id)arg1;
- (void)notifyAccountsChangedExternally;
- (void)isPluginId:(id)arg1 supportedForApp:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)enableUnitTestModeWithReply:(CDUnknownBlockType)arg1;
- (void)disableUnitTestModeWithReply:(CDUnknownBlockType)arg1;
- (void)dateWithGMT:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)date:(id)arg1 withTimeZone:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)dateInTimeZone:(id)arg1 fromFloatingDateInGMT:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)currentTimeZoneWithReply:(CDUnknownBlockType)arg1;
- (void)CDVServerURLForURL:(id)arg1 withPath:(BOOL)arg2 withReply:(CDUnknownBlockType)arg3;
- (BOOL)_saveLegacyEntity:(id)arg1 isNew:(BOOL)arg2 source:(id)arg3 inManagedObjectContext:(id)arg4 error:(id *)arg5;
- (id)originatorIdForPid:(int)arg1;
- (id)_fetchRemoteManagedObjects:(Class)arg1 withPredicate:(id)arg2 prefetchingKeyPaths:(id)arg3;
- (id)_createURLStringForServerURL:(id)arg1 removePath:(BOOL)arg2;
- (id)_calendarPredicateForCalendarIds:(id)arg1;

@end
