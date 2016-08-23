//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKUndoableOperation.h>

@class NSArray, NSDictionary;

@interface EKSaveOperation : EKUndoableOperation
{
    BOOL _completedRecurringReminder;
    NSArray *_previousObjects;
    NSArray *_previousSliceInfo;
    NSDictionary *_objectsRequiringAlteredSpan;
}

+ (id)changedTitleOfCalendar:(id)arg1;
+ (id)changedColorOfCalendar:(id)arg1;
+ (id)changedLocationActionNameWithCurrentEvent:(id)arg1 previousEvent:(id)arg2;
+ (id)changedRecurrenceRuleActionNameWithCurrentEvent:(id)arg1 previousEvent:(id)arg2;
+ (id)changedTravelTimeActionNameWithCurrentEvent:(id)arg1 previousEvent:(id)arg2;
+ (id)changedAllDayActionNameWithCurrentEvent:(id)arg1 previousEvent:(id)arg2;
+ (id)shareesModifiedActionName:(id)arg1;
+ (id)shareesRemovedActionName:(id)arg1;
+ (id)shareesAddedActionName:(id)arg1;
+ (id)attendeesModifiedActionName:(id)arg1;
+ (id)attendeesRemovedActionName:(id)arg1;
+ (id)attendeesAddedActionName:(id)arg1;
+ (id)attachmentsModifiedActionName:(id)arg1;
+ (id)attachmentsRemovedActionName:(id)arg1;
+ (id)attachmentsAddedActionName:(id)arg1;
+ (id)alarmsModifiedActionName:(id)arg1;
+ (id)alarmsRemovedActionName:(id)arg1;
+ (id)alarmsAddedActionName:(id)arg1;
+ (id)changedResponseCommentActionName:(id)arg1;
+ (id)changedParticipationStatusActionName:(id)arg1;
+ (id)changedAttendeeCommentActionName:(id)arg1;
+ (id)changedAttachmentPermissionsActionName:(id)arg1;
+ (id)changedURLActionName:(id)arg1;
+ (id)changedNotesActionName:(id)arg1;
+ (id)changedPrivacyActionName:(id)arg1;
+ (id)changedAvailablityActionName:(id)arg1;
+ (id)changedCalendarActionName:(id)arg1;
+ (id)changedTimeZoneActionName:(id)arg1;
+ (id)changedTitleActionName:(id)arg1;
+ (id)changedTimeActionName:(id)arg1;
+ (id)genericEventChangedActionName:(id)arg1;
+ (id)multipleEventsChangedActionName;
@property BOOL completedRecurringReminder; // @synthesize completedRecurringReminder=_completedRecurringReminder;
@property(retain) NSDictionary *objectsRequiringAlteredSpan; // @synthesize objectsRequiringAlteredSpan=_objectsRequiringAlteredSpan;
@property(retain) NSArray *previousSliceInfo; // @synthesize previousSliceInfo=_previousSliceInfo;
@property(retain) NSArray *previousObjects; // @synthesize previousObjects=_previousObjects;
- (void).cxx_destruct;
- (id)_handleSignificantlyDetachedEventChangesForCurrentEvent:(id)arg1 detachedEvents:(id)arg2;
- (id)_undoOutcomeForSliceDescription:(id)arg1;
- (id)_undoSliceOutcomes;
- (id)_invertedNonSliceObjects;
- (id)_objectsForInverse;
- (id)_objectsRequiringAlteredSpan:(id)arg1;
- (id)_inverseOperation;
- (Class)_inverseOperationClass;
- (void)_storePreviousObjects;
- (void)_storePreviousState;
- (void)_checkIfCompletingRecurringReminder;
- (BOOL)_execute:(id *)arg1;
- (id)_actionName;

@end

