//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/ABGroupDropHelper-Protocol.h>

@class CNContactPickerView, NSString;
@protocol NSDraggingInfo;

@interface CNContactPickerGroupDropHelper : NSObject <ABGroupDropHelper>
{
    id <NSDraggingInfo> _draggingInfo;
    CNContactPickerView *_pickerView;
    NSString *_selectedEntryIdentifier;
    NSString *_destinationEntryIdentifier;
}

- (void).cxx_destruct;
- (BOOL)acceptDrop;
- (unsigned long long)validateDrop;
- (id)initWithDraggingInfo:(id)arg1 pickerView:(id)arg2 selectedEntryIdentifier:(id)arg3 destinationEntryIdentifier:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

