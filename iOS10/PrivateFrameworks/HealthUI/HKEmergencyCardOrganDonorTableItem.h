//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKEmergencyCardTableItem.h>

#import <HealthUI/HKMedicalIDEditorCellEditDelegate-Protocol.h>

@class HKMedicalIDEditorPickerCell, _HKCustomInsetCellLayoutManager, _HKMedicalIDMultilineStringCell;

@interface HKEmergencyCardOrganDonorTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate>
{
    HKMedicalIDEditorPickerCell *_editableCell;
    _HKMedicalIDMultilineStringCell *_displayCell;
    _HKCustomInsetCellLayoutManager *_layoutManager;
}

- (void).cxx_destruct;
- (void)commitEditing;
- (void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (long long)editingStyleForRowAtIndex:(long long)arg1;
- (_Bool)canEditRowAtIndex:(long long)arg1;
- (void)promptOrganDonationRegistrationIfPossibleWithCompletion:(CDUnknownBlockType)arg1;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (_Bool)shouldHighlightRowAtIndex:(long long)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (id)_displayCell;
- (id)_createEditableCell;
- (long long)chosenIndexForOrganDonorStatus:(unsigned long long)arg1;
- (id)displayValueForOrganDonorStatus:(unsigned long long)arg1;
- (id)possibleValues;
- (_Bool)hasPresentableData;
- (id)title;

@end

