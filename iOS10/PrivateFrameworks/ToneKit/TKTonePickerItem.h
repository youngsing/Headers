//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ToneKit/TKPickerSelectableItem.h>

#import <ToneKit/TKPickerContainerItem-Protocol.h>

@class NSString, TKTonePickerController, TKTonePickerSectionItem;

@interface TKTonePickerItem : TKPickerSelectableItem <TKPickerContainerItem>
{
    _Bool _needsRoomForCheckmark;
    unsigned long long _itemKind;
    TKTonePickerController *__parentTonePickerController;
    long long _numberOfChildren;
}

@property(nonatomic, setter=_setNumberOfChildren:) long long numberOfChildren; // @synthesize numberOfChildren=_numberOfChildren;
@property(nonatomic, setter=_setParentTonePickerController:) __weak TKTonePickerController *_parentTonePickerController; // @synthesize _parentTonePickerController=__parentTonePickerController;
@property(nonatomic, setter=_setNeedsRoomForCheckmark:) _Bool needsRoomForCheckmark; // @synthesize needsRoomForCheckmark=_needsRoomForCheckmark;
@property(nonatomic, setter=_setItemKind:) unsigned long long itemKind; // @synthesize itemKind=_itemKind;
- (void).cxx_destruct;
- (void)_appendDescriptionOfAttributesToString:(id)arg1;
- (id)childItemAtIndex:(long long)arg1;
@property(readonly, nonatomic) TKTonePickerSectionItem *parentSectionItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

