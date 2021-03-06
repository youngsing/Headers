//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MapKit/MKPlacePhotosViewDelegate-Protocol.h>
#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>

@class MKMapItem, NSArray, NSString, _MKPlaceViewController;
@protocol MKPlaceCardPhotosControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKPlacePhotosViewController : UIViewController <MKPlacePhotosViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate>
{
    NSArray *_photoViews;
    _Bool _constraintsAdded;
    _Bool _canUseInlineViewer;
    unsigned long long _photosCount;
    unsigned long long _mode;
    MKMapItem *_mapItem;
    id <MKPlaceCardPhotosControllerDelegate> _photosControllerDelegate;
    _MKPlaceViewController *_owner;
}

@property(nonatomic) __weak _MKPlaceViewController *owner; // @synthesize owner=_owner;
@property(nonatomic) __weak id <MKPlaceCardPhotosControllerDelegate> photosControllerDelegate; // @synthesize photosControllerDelegate=_photosControllerDelegate;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (id)infoCardChildPossibleActions;
- (id)placePhotoViewerGetDelegatesMapItem;
- (void)placePhotoViewerWillClose:(id)arg1 photo:(id)arg2 onIndex:(unsigned long long)arg3;
- (void)placePhotoViewerAttributionTappedForPhotoAtIndex:(unsigned long long)arg1 photo:(id)arg2;
- (id)placePhotoViewerViewForPhotoAtIndex:(unsigned long long)arg1;
- (void)_callPhotoDelegateForPhotoAt:(unsigned long long)arg1 fromLicense:(_Bool)arg2;
- (void)_photoTappedAtIndex:(unsigned long long)arg1;
- (void)_photoSelected:(id)arg1;
- (void)_reloadPhotos;
- (void)updateViewConstraints;
- (void)_updatePhotoBackgroundColor:(id)arg1;
- (void)infoCardThemeChanged:(id)arg1;
- (void)_createPhotoViews;
- (id)photos;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithLayoutMode:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

