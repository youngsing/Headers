//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SetupAssistantTV/BuddyController-Protocol.h>
#import <SetupAssistantTV/SATVBuddyController-Protocol.h>
#import <SetupAssistantTV/SATVTimeZoneSearchViewControllerDelegate-Protocol.h>

@class NSString, SATVNavigationController, SATVTimeZoneSearchViewController, SATVTimeZoneView, UILabel, UISystemInputViewController;
@protocol BuddyControllerDelegate;

@interface SATVTimeZoneController : UIViewController <SATVTimeZoneSearchViewControllerDelegate, SATVBuddyController, BuddyController>
{
    _Bool _pressedDone;
    id <BuddyControllerDelegate> _delegate;
    UILabel *_titleLabel;
    SATVTimeZoneSearchViewController *_searchTableViewController;
    UISystemInputViewController *_systemInputViewController;
    SATVTimeZoneView *_timeZoneView;
}

@property(retain, nonatomic) SATVTimeZoneView *timeZoneView; // @synthesize timeZoneView=_timeZoneView;
@property(retain, nonatomic) UISystemInputViewController *systemInputViewController; // @synthesize systemInputViewController=_systemInputViewController;
@property(retain, nonatomic) SATVTimeZoneSearchViewController *searchTableViewController; // @synthesize searchTableViewController=_searchTableViewController;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <BuddyControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setTimeZoneCityID:(id)arg1;
- (id)_dateTimePreferences;
- (void)_doneButtonPressed:(id)arg1;
- (_Bool)_enableAutomaticKeyboardPressDone;
- (_Bool)_disableAutomaticKeyboardUI;
- (void)viewController:(id)arg1 didSelectCity:(id)arg2;
- (void)_textDidChange;
- (_Bool)shouldAllowNavigatingBack;
- (id)preferredFocusEnvironments;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)shouldSkipToNextController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SATVNavigationController *navigationController; // @dynamic navigationController;
@property(nonatomic, getter=isStandardNavigation) _Bool standardNavigation;
@property(readonly) Class superclass;

@end

