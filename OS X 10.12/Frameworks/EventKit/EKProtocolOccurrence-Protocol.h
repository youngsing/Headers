//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKProtocolObject-Protocol.h>

@class NSCalendar, NSDate, NSNumber, NSSet, NSString, NSTimeZone, NSURL;
@protocol EKProtocolCalendar, EKProtocolParticipant, EKProtocolStructuredLocation;

@protocol EKProtocolOccurrence <EKProtocolObject>
@property(readonly, copy, nonatomic) NSString *relatedExternalID;
@property(readonly, copy, nonatomic) NSString *contactIdentifiersString;
@property(readonly, copy, nonatomic) NSString *recurrenceSetID;
@property(readonly, nonatomic) BOOL defaultAlarmWasDeleted;
@property(readonly, copy, nonatomic) NSDate *startDateUnadjustedFromUTC;
@property(readonly, copy, nonatomic) NSTimeZone *timeZoneObject;
@property(readonly, copy, nonatomic) NSString *scheduleAgentString;
@property(readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property(readonly, nonatomic) BOOL organizedByMe;
@property(readonly, copy, nonatomic) NSString *organizerEncodedLikenessData;
@property(readonly, copy, nonatomic) NSString *organizerEmail;
@property(readonly, copy, nonatomic) NSURL *organizerURL;
@property(readonly, copy, nonatomic) NSString *organizerName;
@property(readonly, copy, nonatomic) id <EKProtocolParticipant> participantForMe;
@property(readonly, nonatomic) BOOL cachedIsCurrentUserInvitedAttendee;
@property(readonly, nonatomic) BOOL cachedIsCalendarOwnerInvitedAttendee;
@property(readonly, nonatomic) BOOL cachedHasAlarm;
@property(readonly, nonatomic) BOOL cachedHasAttachment;
@property(readonly, nonatomic) BOOL cachedHasAttendee;
@property(readonly, copy, nonatomic) NSString *recurrenceRuleString;
@property(readonly, copy, nonatomic) id <EKProtocolStructuredLocation> ekStructuredLocation;
@property(readonly, copy, nonatomic) id <EKProtocolCalendar> container;
@property(readonly, nonatomic) NSNumber *calendarItemPermissionNumber;
@property(readonly, retain, nonatomic) NSDate *recurrenceDateUnadjustedFromUTC;
- (NSCalendar *)_nsCalendar;
- (BOOL)isEvent;
- (BOOL)isReminder;
- (NSDate *)creationDate;
- (BOOL)allDay;
- (NSSet *)attachmentSet;
- (NSSet *)attendeeSet;
- (NSSet *)alarmSet;
- (NSNumber *)priorityNumber;
- (NSURL *)URL;
- (NSString *)notes;
- (NSString *)title;
- (NSString *)sharedUID;
- (NSString *)localUID;
@end
