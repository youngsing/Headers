//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarStore/CalCalendarItem.h>

@class CalRecurrenceRule, NSArray, NSDate, NSString;

@interface CalEvent : CalCalendarItem
{
    BOOL _isAllDay;
    NSString *_location;
    CalRecurrenceRule *_recurrenceRule;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_attendees;
    BOOL _isDetached;
    NSDate *_occurrence;
}

+ (id)event;
+ (id)eventFromRemoteManagedObject:(id)arg1 skipTimezoneTranslation:(BOOL)arg2;
+ (id)eventFromRemoteManagedObject:(id)arg1;
@property(copy, nonatomic) NSDate *occurrence; // @synthesize occurrence=_occurrence;
@property BOOL isDetached; // @synthesize isDetached=_isDetached;
@property(copy) NSArray *attendees; // @synthesize attendees=_attendees;
@property(copy) NSDate *endDate; // @synthesize endDate=_endDate;
@property(copy) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy) CalRecurrenceRule *recurrenceRule; // @synthesize recurrenceRule=_recurrenceRule;
@property(copy) NSString *location; // @synthesize location=_location;
@property BOOL isAllDay; // @synthesize isAllDay=_isAllDay;
@property BOOL isInvitation;
- (void)_createReservedDictionaryIfNeeded;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (long long)compareStartDate:(id)arg1;
- (id)nextAlarmDate;
- (id)initWithTitle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 UID:(id)arg4;
- (id)initWithTitle:(id)arg1 UID:(id)arg2;
- (id)attachments;
- (void)setAttachments:(id)arg1;
- (id)remoteManagedEventFromEvent;

@end

