//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/UIAdaptivePresentationControllerDelegate-Protocol.h>
#import <PhotosUICore/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <PhotosUICore/UITableViewDelegate-Protocol.h>
#import <PhotosUICore/UITextFieldDelegate-Protocol.h>

@class NSArray, NSString, PXPeopleNamePickerResultsTableViewController, PXPeopleNamePickerTitleView;
@protocol PXPeopleNamePickerViewControllerDelegate;

@interface PXPeopleNamePickerViewController : UIViewController <UITextFieldDelegate, UITableViewDelegate, UIPopoverPresentationControllerDelegate, UIAdaptivePresentationControllerDelegate>
{
    PXPeopleNamePickerTitleView *_titleView;
    id <PXPeopleNamePickerViewControllerDelegate> _delegate;
    PXPeopleNamePickerResultsTableViewController *_resultsController;
    NSArray *_savedRightBarItems;
}

@property(retain, nonatomic) NSArray *savedRightBarItems; // @synthesize savedRightBarItems=_savedRightBarItems;
@property(retain, nonatomic) PXPeopleNamePickerResultsTableViewController *resultsController; // @synthesize resultsController=_resultsController;
@property(nonatomic) __weak id <PXPeopleNamePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PXPeopleNamePickerTitleView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)_hideResultsView;
- (void)_showResultsView;
- (void)_refreshResultsViewSizeWithNewKeyboardHeight:(double)arg1;
- (double)_titleViewMaxWidthForEditing:(_Bool)arg1;
- (void)_setupNavigationBarForEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_shouldPresentResultsInPopover;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_applicationDidEnterBackground;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithPeople:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
