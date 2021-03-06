//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TVKit/UISystemInputViewControllerDelegate-Protocol.h>

@class NSString, UILabel, UISystemInputViewController, UITextField, UIView, _TVTextEntryTextField;
@protocol TVTextEntryControllerDelegate;

@interface TVTextEntryController : UIViewController <UISystemInputViewControllerDelegate>
{
    _TVTextEntryTextField *_textField;
    UIView *_topAccessoryView;
    UIView *_bottomAccessoryView;
    _Bool _isTouchEnabled;
    UIView *_preferredFocusedView;
    _Bool _hideAccessoryViews;
    id <TVTextEntryControllerDelegate> _delegate;
    UILabel *_textFieldHeaderLabel;
    UISystemInputViewController *_systemInputViewController;
}

@property(readonly, nonatomic) UISystemInputViewController *systemInputViewController; // @synthesize systemInputViewController=_systemInputViewController;
@property(retain, nonatomic) UIView *bottomAccessoryView; // @synthesize bottomAccessoryView=_bottomAccessoryView;
@property(retain, nonatomic) UIView *topAccessoryView; // @synthesize topAccessoryView=_topAccessoryView;
@property(readonly, nonatomic) UILabel *textFieldHeaderLabel; // @synthesize textFieldHeaderLabel=_textFieldHeaderLabel;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak id <TVTextEntryControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(nonatomic) _Bool textFieldAllowsFocus;
- (void)_doneButtonPressed:(id)arg1;
- (void)systemInputViewControllerDidAcceptRecentInput:(id)arg1;
- (void)systemInputViewController:(id)arg1 didChangeAccessoryVisibility:(_Bool)arg2;
- (_Bool)_enableAutomaticKeyboardPressDone;
- (_Bool)_disableAutomaticKeyboardUI;
- (void)viewDidLayoutSubviews;
- (void)textFieldDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (_Bool)shouldUpdateFocusFromView:(id)arg1 toView:(id)arg2 heading:(unsigned long long)arg3;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

