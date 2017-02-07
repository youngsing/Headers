//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionViewController.h>

#import <MapKit/MKOfficialAppViewDelegate-Protocol.h>
#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>

@class MKOfficialAppView, MKPlaceSectionHeaderView, NSString;
@protocol MKOfficialAppViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKOfficialAppViewController : MKPlaceSectionViewController <MKOfficialAppViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate>
{
    _Bool _isShowing;
    NSString *_url;
    id <MKOfficialAppViewControllerDelegate> _officialAppDelegate;
    MKOfficialAppView *_officialAppView;
    MKPlaceSectionHeaderView *_officialAppHeaderView;
}

@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) MKPlaceSectionHeaderView *officialAppHeaderView; // @synthesize officialAppHeaderView=_officialAppHeaderView;
@property(retain, nonatomic) MKOfficialAppView *officialAppView; // @synthesize officialAppView=_officialAppView;
@property(nonatomic) __weak id <MKOfficialAppViewControllerDelegate> officialAppDelegate; // @synthesize officialAppDelegate=_officialAppDelegate;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)infoCardChildPossibleActions;
- (void)officialAppViewDidSelectPunchOutButton:(id)arg1;
- (void)_beginFindingOfficialApp;
- (void)updateOfficialViewButtonText;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithURLString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
