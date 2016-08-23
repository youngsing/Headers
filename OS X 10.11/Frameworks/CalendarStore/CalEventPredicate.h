//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarStore/CalCalendarItemPredicate.h>

@class NSDate, NSString;

@interface CalEventPredicate : CalCalendarItemPredicate
{
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_uid;
}

+ (id)predicateWithPredicate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 UID:(id)arg4 calendars:(id)arg5;
+ (id)predicateWithPredicate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 calendars:(id)arg4;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)evaluateWithObject:(id)arg1;
- (id)UID;
- (id)endDate;
- (id)startDate;
- (id)initWithType:(unsigned long long)arg1 subpredicates:(id)arg2;
- (id)initWithPredicate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 calendars:(id)arg4;
- (id)initWithPredicate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 UID:(id)arg4 calendars:(id)arg5;

@end

