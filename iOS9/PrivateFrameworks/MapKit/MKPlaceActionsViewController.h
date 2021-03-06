//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <MapKit/MKHideableBottomSeparator-Protocol.h>
#import <MapKit/MKOfflineModeViewController-Protocol.h>
#import <MapKit/MKStackingViewControllerPreferredSizeUse-Protocol.h>

@class MKMapItem, NSArray, NSString;
@protocol MKPlaceActionsViewControllerDelegate;

@interface MKPlaceActionsViewController : UITableViewController <MKStackingViewControllerPreferredSizeUse, MKOfflineModeViewController, MKHideableBottomSeparator>
{
    _Bool _showContactActions;
    _Bool _showRemovePin;
    _Bool _showReportAProblem;
    _Bool _showSharing;
    _Bool _showSimulateLocation;
    _Bool _showOpenInSkyline;
    _Bool _showOpenInPinpoint;
    _Bool _viewShouldHideBottommostSeparator;
    _Bool _offlineMode;
    NSArray *_actions;
    id <MKPlaceActionsViewControllerDelegate> _actionDelegate;
    MKMapItem *_mapItem;
}

@property(nonatomic) _Bool offlineMode; // @synthesize offlineMode=_offlineMode;
@property(nonatomic) _Bool viewShouldHideBottommostSeparator; // @synthesize viewShouldHideBottommostSeparator=_viewShouldHideBottommostSeparator;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(nonatomic) _Bool showOpenInPinpoint; // @synthesize showOpenInPinpoint=_showOpenInPinpoint;
@property(nonatomic) _Bool showOpenInSkyline; // @synthesize showOpenInSkyline=_showOpenInSkyline;
@property(nonatomic) _Bool showSimulateLocation; // @synthesize showSimulateLocation=_showSimulateLocation;
@property(nonatomic) _Bool showSharing; // @synthesize showSharing=_showSharing;
@property(nonatomic) _Bool showReportAProblem; // @synthesize showReportAProblem=_showReportAProblem;
@property(nonatomic) _Bool showRemovePin; // @synthesize showRemovePin=_showRemovePin;
@property(nonatomic) _Bool showContactActions; // @synthesize showContactActions=_showContactActions;
@property(nonatomic) __weak id <MKPlaceActionsViewControllerDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateActions;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) _Bool requiresPreferredContentSizeInStackingView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

