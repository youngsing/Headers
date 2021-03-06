//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpotlightUI/SPSearchAgentDelegate-Protocol.h>
#import <SpotlightUI/SPUISearchHeaderDelegate-Protocol.h>
#import <SpotlightUI/SPUISearchResultHandlerDelegate-Protocol.h>
#import <SpotlightUI/SPUITableViewDelegate-Protocol.h>
#import <SpotlightUI/SearchUIFirstTimeExperienceDelegate-Protocol.h>

@class NSMutableArray, NSString, NSTimer, SPUILockScreenFooterView, SPUISearchFirstTimeViewController, SPUISearchHeader, SPUISearchResultHandler, SPUITableViewController, UIView, _UILegibilitySettings;
@protocol SPUISearchViewControllerDelegate;

@interface SPUISearchViewController : UIViewController <SPUISearchHeaderDelegate, SearchUIFirstTimeExperienceDelegate, SPUITableViewDelegate, SPSearchAgentDelegate, SPUISearchResultHandlerDelegate>
{
    unsigned long long _queryStartTime;
    NSTimer *_queryUpdateTimer;
    _Bool _internetOverrideForPPT;
    _Bool _isBeingPresented;
    _Bool _wasVisibleWhenPresented;
    _Bool _clearSearchFieldAfterDismissal;
    id <SPUISearchViewControllerDelegate> _delegate;
    _UILegibilitySettings *_legibilitySettings;
    UIView *_replicatorView;
    SPUISearchHeader *_searchHeader;
    SPUISearchFirstTimeViewController *_firstTimeExperienceViewController;
    SPUITableViewController *_searchTableViewController;
    SPUITableViewController *_zeroKeywordTableViewController;
    SPUISearchResultHandler *_resultHandler;
    SPUILockScreenFooterView *_footerView;
    unsigned long long _presentationMode;
    NSMutableArray *_searchRatingSessionFeedback;
    double _statusBarDismissTime;
    NSTimer *_clearResultsTimer;
}

@property _Bool clearSearchFieldAfterDismissal; // @synthesize clearSearchFieldAfterDismissal=_clearSearchFieldAfterDismissal;
@property _Bool wasVisibleWhenPresented; // @synthesize wasVisibleWhenPresented=_wasVisibleWhenPresented;
@property _Bool isBeingPresented; // @synthesize isBeingPresented=_isBeingPresented;
@property(retain) NSTimer *clearResultsTimer; // @synthesize clearResultsTimer=_clearResultsTimer;
@property double statusBarDismissTime; // @synthesize statusBarDismissTime=_statusBarDismissTime;
@property _Bool internetOverrideForPPT; // @synthesize internetOverrideForPPT=_internetOverrideForPPT;
@property(retain) NSMutableArray *searchRatingSessionFeedback; // @synthesize searchRatingSessionFeedback=_searchRatingSessionFeedback;
@property unsigned long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property(retain) SPUILockScreenFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain) SPUISearchResultHandler *resultHandler; // @synthesize resultHandler=_resultHandler;
@property(retain) SPUITableViewController *zeroKeywordTableViewController; // @synthesize zeroKeywordTableViewController=_zeroKeywordTableViewController;
@property(retain) SPUITableViewController *searchTableViewController; // @synthesize searchTableViewController=_searchTableViewController;
@property(retain) SPUISearchFirstTimeViewController *firstTimeExperienceViewController; // @synthesize firstTimeExperienceViewController=_firstTimeExperienceViewController;
@property(retain) SPUISearchHeader *searchHeader; // @synthesize searchHeader=_searchHeader;
@property(retain) UIView *replicatorView; // @synthesize replicatorView=_replicatorView;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) __weak id <SPUISearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didSelectResult:(id)arg1 withFeedback:(id)arg2 wasPop:(_Bool)arg3;
- (void)searchForSuggestedQuery:(id)arg1;
- (void)hideKeyboard;
- (void)numberOfRowsDidChange:(id)arg1;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)didBeginScrollingInTableView;
- (void)didPullDownTableView;
- (void)didSwipeUpOnTableView;
- (void)didTapInEmptyAreaOfTableView;
- (void)cancelButtonPressed;
- (void)sendRatingFeedback;
- (_Bool)queryIsPresent;
- (void)update:(id)arg1;
- (void)searchAgentReceivedSuggestions:(id)arg1;
- (void)searchAgentClearedResults:(id)arg1;
- (void)searchAgentUpdatedResults:(id)arg1;
- (void)didBeginEditing;
- (_Bool)isVisible;
- (_Bool)allowInternet;
- (void)queryContextDidChange:(id)arg1 allowZKW:(_Bool)arg2;
- (void)setInternetOverrideToDisable:(_Bool)arg1;
- (void)enableUpdates:(id)arg1;
- (void)firstTimeExperienceContinueButtonPressed;
- (id)headerNextResponder;
- (void)activateFirstTimeExperienceViewAnimate:(_Bool)arg1;
- (void)activateFirstTimeExperienceViewIfNecessary;
- (void)hideSeparator;
- (void)activateViewController:(id)arg1 animate:(_Bool)arg2;
- (id)activeViewController;
- (id)currentQuery;
- (id)contentScrollView;
- (id)viewControllerForPresenting;
- (id)tableViewControllerWithSearchModel:(id)arg1;
- (void)searchViewDidDismissWithReason:(unsigned long long)arg1;
- (void)clearSearchResults;
- (void)clearTimerExpired;
- (void)searchViewWillDismissWithReason:(unsigned long long)arg1;
- (void)searchViewDidPresentFromSource:(unsigned long long)arg1;
@property(readonly, nonatomic) double distanceToTopOfAppIcons;
- (void)searchViewWillPresentFromSource:(unsigned long long)arg1;
- (void)scrollSearchTable:(id)arg1 iterations:(unsigned long long)arg2 delta:(unsigned long long)arg3;
- (void)performSearchWithQuery:(id)arg1;
- (void)clearSearchResultsPrefsChanged;
- (void)settingsChanged;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

