//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import <MusicCarDisplayUI/MCDPCContainerDelegate-Protocol.h>
#import <MusicCarDisplayUI/UITabBarControllerDelegate-Protocol.h>

@class AVExternalDevice, MCDPCContainer, MCDPCModel, NSString, UIButton;

@interface MCDBrowsableContentNavigationController : UITabBarController <UITabBarControllerDelegate, MCDPCContainerDelegate>
{
    _Bool _hasCarScreen;
    _Bool _didFinishInitialLoad;
    _Bool _visible;
    _Bool _deferReload;
    UITabBarController *_tabBarController;
    UITabBarController *_hostTabBarController;
    AVExternalDevice *_externalDevice;
    MCDPCModel *_model;
    NSString *_bundleID;
    UIButton *_nowPlayingButton;
    MCDPCContainer *_container;
}

@property(nonatomic) _Bool deferReload; // @synthesize deferReload=_deferReload;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) _Bool didFinishInitialLoad; // @synthesize didFinishInitialLoad=_didFinishInitialLoad;
@property(retain, nonatomic) MCDPCContainer *container; // @synthesize container=_container;
@property(nonatomic) _Bool hasCarScreen; // @synthesize hasCarScreen=_hasCarScreen;
@property(retain, nonatomic) UIButton *nowPlayingButton; // @synthesize nowPlayingButton=_nowPlayingButton;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) MCDPCModel *model; // @synthesize model=_model;
@property(retain, nonatomic) AVExternalDevice *externalDevice; // @synthesize externalDevice=_externalDevice;
@property(nonatomic) __weak UITabBarController *hostTabBarController; // @synthesize hostTabBarController=_hostTabBarController;
@property(retain, nonatomic) UITabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setViewControllers:(id)arg1;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)updateTitleAndTabBarItemsAtIndexes:(id)arg1;
- (id)_hostTabAtIndex:(unsigned long long)arg1 dummyTab:(_Bool)arg2;
- (void)reloadTabs;
- (void)_loadAllHostTabs;
- (void)container:(id)arg1 didInvalidateIndicies:(id)arg2;
- (void)_nowPlayingButtonTapped:(id)arg1;
- (void)_updateNowPlayingButtonVisibility;
- (void)_nowPlayingDidChange:(id)arg1;
- (id)initWithBundleID:(id)arg1 model:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

