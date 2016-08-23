//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MKInfoCardAttributesView, MKMapItem, NSButton, NSFont, NSTextField, NSView;
@protocol MKInfoCardAttributesDelegate;

@interface MKInfoCardAttributesViewBuilder : NSObject
{
    MKInfoCardAttributesView *_view;
    MKMapItem *_mapItem;
    NSView *_previousView;
    NSTextField *_previousVenueInfoValue;
    NSButton *_previousVenueKeyIcon;
    NSFont *_font;
    NSFont *_boldFont;
    double _horizontalMarginWithRightSideOfKeyLabel;
    id <MKInfoCardAttributesDelegate> _delegateInfo;
}

@property(nonatomic) __weak id <MKInfoCardAttributesDelegate> delegateInfo; // @synthesize delegateInfo=_delegateInfo;
- (void).cxx_destruct;
- (id)addBottomConstraint:(double)arg1;
- (void)addActionsButtonContainer;
- (void)insertMapView;
- (void)addVenueUsefulInformationBusinessHours:(id)arg1 includeVenueAmenities:(BOOL)arg2;
- (void)addAmenities;
- (void)addSeparator:(double)arg1;
- (void)addAttribution:(id)arg1;
- (void)addVenueContactInformation;
- (BOOL)view:(id)arg1 isSubviewOfView:(id)arg2;
- (void)_addVenueInfo:(id)arg1 value:(id)arg2 optionalURL:(id)arg3 optionalIcon:(id)arg4 container:(id)arg5 verticalMargin:(double)arg6 shouldWrapText:(BOOL)arg7 actionBlock:(CDUnknownBlockType)arg8 containerConstraints:(id)arg9;
- (void)_addVenueInfo:(id)arg1 value:(id)arg2 optionalURL:(id)arg3 optionalIcon:(id)arg4 container:(id)arg5 verticalMargin:(double)arg6 shouldWrapText:(BOOL)arg7 actionBlock:(CDUnknownBlockType)arg8;
- (void)_addVenueInfo:(id)arg1 value:(id)arg2 container:(id)arg3 verticalMargin:(double)arg4;
- (id)showTitleAndSubTitle:(id)arg1;
@property(readonly, nonatomic) NSView *lastValueView;
- (id)tintedImageForGlyphName:(id)arg1;
- (id)_clickableTextField;
- (id)_textField;
- (id)initWithView:(id)arg1 mapItem:(id)arg2;
- (id)init;

@end

