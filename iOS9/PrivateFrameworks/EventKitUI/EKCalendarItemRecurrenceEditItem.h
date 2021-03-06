//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKCalendarItemEditItem.h>

#import <EventKitUI/EKCellShortener-Protocol.h>
#import <EventKitUI/EKRecurrenceTypeEditItemViewControllerDelegate-Protocol.h>

@class EKCalendarItemRecurrenceEndCell, EKRecurrenceTypeEditItemViewController, NSDate, NSString, PreferencesValueCell;

__attribute__((visibility("hidden")))
@interface EKCalendarItemRecurrenceEditItem : EKCalendarItemEditItem <EKRecurrenceTypeEditItemViewControllerDelegate, EKCellShortener>
{
    long long _repeatType;
    long long _originalRepeatType;
    NSDate *_repeatEnd;
    NSDate *_originalRepeatEnd;
    NSString *_customRepeatDescription;
    unsigned long long _disclosedSubitem;
    int _shorteningStatus;
    PreferencesValueCell *_repeatEndDateCell;
    EKRecurrenceTypeEditItemViewController *_recurrenceTypeVC;
    EKCalendarItemRecurrenceEndCell *_repeatEndPickerCell;
}

- (void).cxx_destruct;
- (long long)repeatTypeForRecurrenceRule:(id)arg1;
- (id)_recurrenceTypeVC;
- (void)_neverRepeatButtonTapped:(id)arg1;
- (void)_repeatEndDateChanged:(id)arg1;
- (id)_repeatEndPickerCell;
- (_Bool)forceRefreshStartAndEndDatesOnSave;
- (id)minRecurrenceEndDate;
- (id)stringForDate:(id)arg1;
- (id)recurrenceTimeZone;
- (id)recurrenceDate;
- (void)shortenCell:(id)arg1;
- (_Bool)_validateRecurrenceType:(id)arg1;
- (_Bool)editItemViewControllerSave:(id)arg1 notify:(_Bool)arg2;
- (_Bool)editItemViewControllerSave:(id)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (void)_updateRepeatEndDateCell;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (void)refreshFromCalendarItemAndStore;
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (void)reset;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

