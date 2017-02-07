//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <TVSettingKit/TSKPreviewing-Protocol.h>
#import <TVSettingKit/TVTableViewDelegate-Protocol.h>

@class NSString, TSKPreviewViewController, TVTableView;
@protocol TSKPreviewingDelegate;

@interface TSKTableViewController : UITableViewController <TVTableViewDelegate, TSKPreviewing>
{
    id <TSKPreviewingDelegate> _previewingDelegate;
    TVTableView *_tableView;
    double _tableViewWidth;
    long long _tableViewStyle;
    TSKPreviewViewController *_defaultPreviewViewController;
    struct UIEdgeInsets _tableViewPadding;
    struct UIEdgeInsets _tableViewContentInsets;
}

+ (id)_productImage;
@property(readonly, nonatomic) TSKPreviewViewController *defaultPreviewViewController; // @synthesize defaultPreviewViewController=_defaultPreviewViewController;
@property(readonly, nonatomic) struct UIEdgeInsets tableViewContentInsets; // @synthesize tableViewContentInsets=_tableViewContentInsets;
@property(readonly, nonatomic) long long tableViewStyle; // @synthesize tableViewStyle=_tableViewStyle;
@property(nonatomic) struct UIEdgeInsets tableViewPadding; // @synthesize tableViewPadding=_tableViewPadding;
@property(nonatomic) double tableViewWidth; // @synthesize tableViewWidth=_tableViewWidth;
@property(retain, nonatomic) TVTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <TSKPreviewingDelegate> previewingDelegate; // @synthesize previewingDelegate=_previewingDelegate;
- (void).cxx_destruct;
- (_Bool)hasFullscreenPreview;
- (id)defaultIndexPathForPreview;
- (id)previewForItemAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (id)preferredFocusEnvironments;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
