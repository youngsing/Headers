//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarNotification/EKNotificationEngine.h>

@class NSArray;

@interface EKSummaryEngine : EKNotificationEngine
{
    NSArray *_birthdayEvents;
    NSArray *_upcomingEvents;
    NSArray *_todaysEvents;
    NSArray *_tomorrowsEvents;
}

@property(retain) NSArray *tomorrowsEvents; // @synthesize tomorrowsEvents=_tomorrowsEvents;
@property(retain) NSArray *todaysEvents; // @synthesize todaysEvents=_todaysEvents;
@property(retain) NSArray *upcomingEvents; // @synthesize upcomingEvents=_upcomingEvents;
@property(retain) NSArray *birthdayEvents; // @synthesize birthdayEvents=_birthdayEvents;
- (void).cxx_destruct;
- (void)_scheduleTimerForEventExpiration:(id)arg1;
- (void)_scheduleTimerForStartingCountdownToEvent:(id)arg1 interval:(double)arg2;
- (void)_scheduleTimerForUpdatingCountdownForEvent:(id)arg1;
- (BOOL)_isEventFirstForToday:(id)arg1;
- (unsigned long long)_defaultFilterOptionsForNC;
- (id)_loadBirthdayEventsForToday;
- (id)_loadTodayEvents;
- (id)_loadTomorrowEvents;
- (id)_loadUpcomingEvents;
- (id)_todayEvents;
- (id)_tomorrowEvents;
- (id)_upcomingEvents;
- (id)_birthdayEventsForToday;
- (id)_selectedCalendars;
- (void)_updateTomorrowSummary;
- (id)_eventEndingSoonest;
- (id)_eventPartOfTodaySummary;
- (id)_birthdayPartOfTodaySummary;
- (void)_updateTodaySummary;
- (void)_updateSummaries;
- (void)_handleSummaryShown;
- (BOOL)_handlesSummaryShown;
- (id)_interestingNotifications;
- (void)_performQuickAction;
- (void)_resetState;
- (void)_performAction;

@end

