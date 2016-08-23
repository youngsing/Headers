//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSCalendar.h>

__attribute__((visibility("hidden")))
@interface __NSCFCalendar : NSCalendar
{
}

+ (id)calendarWithIdentifier:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (BOOL)nextWeekendStartDate:(out id *)arg1 interval:(out double *)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4;
- (BOOL)isDateInWeekend:(id)arg1;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2;
- (id)dateFromComponents:(id)arg1;
- (BOOL)rangeOfUnit:(unsigned long long)arg1 startDate:(id *)arg2 interval:(double *)arg3 forDate:(id)arg4;
- (unsigned long long)ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;
- (struct _NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;
- (struct _NSRange)maximumRangeOfUnit:(unsigned long long)arg1;
- (struct _NSRange)minimumRangeOfUnit:(unsigned long long)arg1;
- (id)gregorianStartDate;
- (void)setGregorianStartDate:(id)arg1;
- (unsigned long long)minimumDaysInFirstWeek;
- (void)setMinimumDaysInFirstWeek:(unsigned long long)arg1;
- (unsigned long long)firstWeekday;
- (void)setFirstWeekday:(unsigned long long)arg1;
- (id)timeZone;
- (void)setTimeZone:(id)arg1;
- (id)locale;
- (void)setLocale:(id)arg1;
- (id)calendarIdentifier;
- (id)initWithCalendarIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (unsigned long long)retainCount;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (oneway void)release;
- (id)retain;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

