//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EKProtocolEventOccurrence_Shared : NSObject
{
}

+ (BOOL)_userAddressesRepresentsInvitedAttendee:(id)arg1 forOccurrence:(id)arg2 checkEmailAddresses:(BOOL)arg3;
+ (BOOL)_userAddressesRepresentsInvitedAttendee:(id)arg1 forOccurrence:(id)arg2;
+ (BOOL)_userAddresses:(id)arg1 representAttendee:(id)arg2;
+ (id)durationForEvent:(id)arg1;
+ (id)birthdayTitleForEvent:(id)arg1 date:(id)arg2;
+ (BOOL)isCurrentUserInvitedAttendeeForOccurrence:(id)arg1 inCalendar:(id)arg2;
+ (BOOL)isCurrentUserInvitedAttendeeForOccurrence:(id)arg1;
+ (BOOL)isCalendarOwnerRepresentedByAttendee:(id)arg1 inCalendar:(id)arg2;
+ (BOOL)isCalendarOwnerRepresentedByAttendee:(id)arg1 forOccurrence:(id)arg2;
+ (BOOL)isCalendarOwnerInvitedAttendeeForOccurrence:(id)arg1 inCalendar:(id)arg2;
+ (BOOL)isCalendarOwnerInvitedAttendeeForOccurrence:(id)arg1;
+ (BOOL)_isSignificantlyDetachedHelperForEvent:(id)arg1 shouldIgnorePartStat:(BOOL)arg2 comparedToMaster:(id)arg3;
+ (BOOL)isSignificantlyDetachedIgnoringParticipationForEvent:(id)arg1 comparedToMaster:(id)arg2;
+ (BOOL)isSignificantlyDetachedForEvent:(id)arg1 comparedToMaster:(id)arg2;
+ (BOOL)isSignificantlyDetachedForEvent:(id)arg1;
+ (BOOL)isSignificantlyDetachedIgnoringParticipationForEvent:(id)arg1;
+ (id)attendeeForCurrentUserForAttendees:(id)arg1 inCalendar:(id)arg2;

@end
