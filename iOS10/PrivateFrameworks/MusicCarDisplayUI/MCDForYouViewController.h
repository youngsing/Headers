//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicCarDisplayUI/MCD_OLD_TableViewController.h>

#import <MusicCarDisplayUI/MCDErrorViewDelegate-Protocol.h>
#import <MusicCarDisplayUI/UITableViewDelegate-Protocol.h>

@class MPWeakTimer, MusicForYouRecommendationsResponse, NSIndexPath, NSString, UIActivityIndicatorView, UINavigationController, UIView;

@interface MCDForYouViewController : MCD_OLD_TableViewController <UITableViewDelegate, MCDErrorViewDelegate>
{
    _Bool _hasLoadedRecommendations;
    UIView *_MCD_tableView;
    UIView *_placeholderView;
    MusicForYouRecommendationsResponse *_recommendationsResponse;
    double _screenScale;
    UIActivityIndicatorView *_activityIndicator;
    NSIndexPath *_selectedIndexPath;
    UINavigationController *_nowPlayingNavigationController;
    MPWeakTimer *_loadingTimer;
}

@property(retain, nonatomic) MPWeakTimer *loadingTimer; // @synthesize loadingTimer=_loadingTimer;
@property(retain, nonatomic) UINavigationController *nowPlayingNavigationController; // @synthesize nowPlayingNavigationController=_nowPlayingNavigationController;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) double screenScale; // @synthesize screenScale=_screenScale;
@property(retain, nonatomic) MusicForYouRecommendationsResponse *recommendationsResponse; // @synthesize recommendationsResponse=_recommendationsResponse;
@property(retain, nonatomic) UIView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(retain, nonatomic) UIView *MCD_tableView; // @synthesize MCD_tableView=_MCD_tableView;
@property(nonatomic) _Bool hasLoadedRecommendations; // @synthesize hasLoadedRecommendations=_hasLoadedRecommendations;
- (void).cxx_destruct;
- (void)errorViewDidTapButton:(id)arg1;
- (void)_loadForYouRecommendations;
- (void)_itemDidChange;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)_normalizedStringStoreIDForRecommendationItem:(id)arg1;
- (void)didStartPlaying:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_setCurrentTableView;
- (void)_showLoadingScreen;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_updateViewForNetworkType:(long long)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (id)initWithPlayer:(id)arg1 serviceProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
