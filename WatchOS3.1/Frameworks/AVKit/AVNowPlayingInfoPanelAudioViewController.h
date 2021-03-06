//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVKit/AVNowPlayingInfoPanel.h>

#import <AVKit/AVNowPlayingInfoPanelAudioDataSourceDelegate-Protocol.h>

@class AVNowPlayingInfoPanelAudioDataSource, AVNowPlayingInfoPanelItemListItem, AVSpeakerManager, NSString, UIView;
@protocol AVNowPlayingInfoPanelAudioViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface AVNowPlayingInfoPanelAudioViewController : AVNowPlayingInfoPanel <AVNowPlayingInfoPanelAudioDataSourceDelegate>
{
    id <AVNowPlayingInfoPanelAudioViewControllerDelegate> _audioViewControllerDelegate;
    UIView *_languageHeaderView;
    UIView *_soundHeaderView;
    UIView *_speakerHeaderView;
    AVNowPlayingInfoPanelAudioDataSource *_languageOptionsDataSource;
    AVNowPlayingInfoPanelAudioDataSource *_soundOptionsDataSource;
    AVNowPlayingInfoPanelItemListItem *_soundOptionNormal;
    AVNowPlayingInfoPanelItemListItem *_soundOptionLateNight;
    AVNowPlayingInfoPanelAudioDataSource *_speakerOptionsDataSource;
    AVSpeakerManager *_speakerManager;
}

@property(readonly, nonatomic) AVSpeakerManager *speakerManager; // @synthesize speakerManager=_speakerManager;
@property(readonly, nonatomic) AVNowPlayingInfoPanelAudioDataSource *speakerOptionsDataSource; // @synthesize speakerOptionsDataSource=_speakerOptionsDataSource;
@property(readonly, nonatomic) AVNowPlayingInfoPanelItemListItem *soundOptionLateNight; // @synthesize soundOptionLateNight=_soundOptionLateNight;
@property(readonly, nonatomic) AVNowPlayingInfoPanelItemListItem *soundOptionNormal; // @synthesize soundOptionNormal=_soundOptionNormal;
@property(readonly, nonatomic) AVNowPlayingInfoPanelAudioDataSource *soundOptionsDataSource; // @synthesize soundOptionsDataSource=_soundOptionsDataSource;
@property(readonly, nonatomic) AVNowPlayingInfoPanelAudioDataSource *languageOptionsDataSource; // @synthesize languageOptionsDataSource=_languageOptionsDataSource;
@property(readonly, nonatomic) UIView *speakerHeaderView; // @synthesize speakerHeaderView=_speakerHeaderView;
@property(readonly, nonatomic) UIView *soundHeaderView; // @synthesize soundHeaderView=_soundHeaderView;
@property(readonly, nonatomic) UIView *languageHeaderView; // @synthesize languageHeaderView=_languageHeaderView;
@property(nonatomic) __weak id <AVNowPlayingInfoPanelAudioViewControllerDelegate> audioViewControllerDelegate; // @synthesize audioViewControllerDelegate=_audioViewControllerDelegate;
- (void).cxx_destruct;
- (void)scheduleAvailableSpeakersUpdate;
- (void)updateAvailableSpeakers;
- (id)_newHeaderViewWithTitle:(id)arg1;
- (void)setSelectedAudioMediaSelectionOptionIndex:(long long)arg1;
- (long long)selectedAudioMediaSelectionOptionIndex;
- (void)setMediaSelectionOptions:(id)arg1 currentOptionIndex:(long long)arg2;
- (void)infoPanelAudioDataSource:(id)arg1 didSelectOption:(long long)arg2;
- (struct CGSize)preferredContentSize;
- (double)preferredHeight;
- (_Bool)_tvTabBarShouldAutohide;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

