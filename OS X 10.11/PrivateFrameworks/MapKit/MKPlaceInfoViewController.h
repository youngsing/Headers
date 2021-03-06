//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/_MKUIViewController.h>

#import <MapKit/MKInfoCardAttributesDelegate-Protocol.h>
#import <MapKit/MKPlaceAttributionCellProvider-Protocol.h>

@class MKInfoCardAttributesView, MKInfoCardFooterViewController, MKInfoCardYelpDealViewController, MKMapItem, NSAttributedString, NSString, _MKPlaceViewController;
@protocol MKMapItemVendorDeal, MKPlaceInfoViewControllerDelegate;

@interface MKPlaceInfoViewController : _MKUIViewController <MKInfoCardAttributesDelegate, MKPlaceAttributionCellProvider>
{
    BOOL _showAttribution;
    BOOL _topHalf;
    BOOL _startWithSeparator;
    BOOL _shouldHideContactInfo;
    id <MKPlaceInfoViewControllerDelegate> infoDelegate;
    MKMapItem *mapItem;
    MKInfoCardFooterViewController *footerViewController;
    _MKPlaceViewController *owner;
    id <MKMapItemVendorDeal> _deal;
    MKInfoCardAttributesView *attributesView;
    MKInfoCardYelpDealViewController *yelpController;
    NSString *_subtitle;
}

@property(nonatomic) BOOL shouldHideContactInfo; // @synthesize shouldHideContactInfo=_shouldHideContactInfo;
@property(nonatomic) BOOL startWithSeparator; // @synthesize startWithSeparator=_startWithSeparator;
@property(nonatomic) BOOL topHalf; // @synthesize topHalf=_topHalf;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(nonatomic) BOOL showAttribution; // @synthesize showAttribution=_showAttribution;
@property(nonatomic) __weak MKInfoCardYelpDealViewController *yelpController; // @synthesize yelpController;
@property(nonatomic) __weak MKInfoCardAttributesView *attributesView; // @synthesize attributesView;
@property(retain, nonatomic) id <MKMapItemVendorDeal> deal; // @synthesize deal=_deal;
@property(nonatomic) __weak _MKPlaceViewController *owner; // @synthesize owner;
@property(retain, nonatomic) MKInfoCardFooterViewController *footerViewController; // @synthesize footerViewController;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem;
@property(nonatomic) __weak id <MKPlaceInfoViewControllerDelegate> infoDelegate; // @synthesize infoDelegate;
- (void).cxx_destruct;
- (id)nibBundle;
- (id)nibName;
@property(readonly, nonatomic) NSAttributedString *infoAttributionString;
- (void)updateInlineMapWithRefinedMapItem:(id)arg1;
- (void)selectDisplayedHomePage;
- (void)selectDisplayedAddress;
- (void)selectDisplayedPhoneNumber;
@property(readonly, nonatomic) BOOL hasContent;
- (void)attributesViewRefreshTopContent;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

