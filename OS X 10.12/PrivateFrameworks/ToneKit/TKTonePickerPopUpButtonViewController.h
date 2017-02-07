//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <ToneKit/TKTonePickerContentViewController-Protocol.h>
#import <ToneKit/TKTonePickerControllerDelegate-Protocol.h>

@class NSResponder, NSString, NSView, TKPickerPopUpButton, TKTonePickerController;
@protocol TKTonePickerContentViewControllerDelegate;

@interface TKTonePickerPopUpButtonViewController : NSViewController <TKTonePickerControllerDelegate, TKTonePickerContentViewController>
{
    id <TKTonePickerContentViewControllerDelegate> _delegate;
    TKPickerPopUpButton *_popUpButton;
    TKTonePickerController *_tonePickerController;
}

@property(retain, nonatomic, setter=_setTonePickerController:) TKTonePickerController *_tonePickerController; // @synthesize _tonePickerController;
@property(retain, nonatomic, setter=_setPopUpButton:) TKPickerPopUpButton *_popUpButton; // @synthesize _popUpButton;
@property(nonatomic) id <TKTonePickerContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tonePickerControllerDidReloadTones:(id)arg1;
- (void)tonePickerController:(id)arg1 selectedToneWithIdentifier:(id)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_tonePickerSectionMenuItemWasSelected:(id)arg1;
- (void)_tonePickerMenuItemWasSelected:(id)arg1;
- (void)_invalidatePopUpButtonMenu;
- (void)_reloadPopUpButtonMenu;
- (void)loadView;
@property(readonly, nonatomic) NSResponder *tonePickerResponder;
@property(readonly, nonatomic) NSView *tonePickerContentView;
- (void)dealloc;
- (id)initWithTonePickerController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
