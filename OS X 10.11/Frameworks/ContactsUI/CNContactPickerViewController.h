//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <ContactsUI/CNContactPickerInternalResponseDelegate-Protocol.h>

@class CNContactPickerViewService, NSArray, NSString;
@protocol CNContactPickerViewControllerDelegate;

@interface CNContactPickerViewController : NSViewController <CNContactPickerInternalResponseDelegate>
{
    CNContactPickerViewService *_serviceController;
    NSArray *_displayedKeys;
    id <CNContactPickerViewControllerDelegate> _delegate;
}

@property __weak id <CNContactPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)registerSectionsForDraggedTypes:(id)arg1;
- (void)selectSectionWithIdentifier:(id)arg1;
- (void)addSection:(id)arg1;
- (void)didShowSectionWithIdentifier:(id)arg1;
- (void)didSearchForString:(id)arg1;
- (void)didSelectContact:(id)arg1 key:(id)arg2 value:(id)arg3 identifier:(id)arg4;
@property(getter=isSearchFieldVisible) BOOL searchFieldVisible;
@property(copy) NSArray *displayedKeys; // @synthesize displayedKeys=_displayedKeys;
- (id)view;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

