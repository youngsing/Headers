//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <AppKit/QLPreviewViewDelegate-Protocol.h>

@class NSArray, NSButton, NSDate, NSDateFormatter, NSDictionary, NSMutableArray, NSNavLayoutView, NSString, NSTextField, NSTimer, NSURL, NSView, QLPreviewView;
@protocol QLPreviewItem;

@interface NSNavPreviewController : NSViewController <QLPreviewViewDelegate>
{
    unsigned int _inLayout:1;
    unsigned int _isPreviewExpanded:1;
    unsigned int _anotherLayoutNeeded:1;
    unsigned int _reserved2:29;
    NSButton *_moreInfoButton;
    QLPreviewView *_previewImageView;
    NSButton *_disclosureButton;
    NSView *_attributeContainerView;
    NSNavLayoutView *_layoutView;
    NSTextField *_displayNameLabelTextField;
    NSTextField *_kindTextLabelField;
    NSTextField *_physicalSizeLabelTextField;
    NSTextField *_creationDateLabelTextField;
    NSTextField *_modDateTextLabelField;
    NSTextField *_lastOpenedDateLabelTextField;
    NSTextField *_shortVersionLabelTextField;
    NSTextField *_displayNameTextField;
    NSTextField *_kindTextField;
    NSTextField *_physicalSizeTextField;
    NSTextField *_creationDateTextField;
    NSTextField *_modDateTextField;
    NSTextField *_lastOpenedDateTextField;
    NSTextField *_shortVersionTextField;
    NSMutableArray *_attributeLabelTextFields;
    NSMutableArray *_attributeValueTextFields;
    NSArray *_standardLabelTextFields;
    NSArray *_standardValueTextFields;
    NSTimer *_animationTimer;
    id <QLPreviewItem> _previewItem;
    NSDictionary *_previewAttributes;
    NSDateFormatter *_dateFormatter;
    NSButton *_disclosureTextButton;
    NSDate *_modDate;
    NSDate *_creationDate;
    id _reservedPC;
}

+ (void)_delayedProcessGetInfoButtonClick:(id)arg1;
+ (void)setPreviewViewExpandedDefault:(BOOL)arg1;
+ (BOOL)previewViewExpandedDefault;
@property(retain, nonatomic) id <QLPreviewItem> previewItem; // @synthesize previewItem=_previewItem;
@property(retain) NSDictionary *previewAttributes; // @synthesize previewAttributes=_previewAttributes;
- (void)setPreviewText:(id)arg1;
- (void)previewView:(id)arg1 willShowPreviewItem:(id)arg2;
- (void)moreInfoButtonClicked:(id)arg1;
- (void)navLayoutViewFrameChanged:(id)arg1;
- (void)_clockPreferencesChanged:(id)arg1;
- (void)navLayoutViewLayout:(id)arg1;
- (void)_mainFrameChanged:(id)arg1;
- (void)previewDisclosureButtonClicked:(id)arg1;
- (void)_timerCalled:(id)arg1;
- (void)_layoutSubviewsAnimated:(BOOL)arg1 fromPreviewItemChange:(BOOL)arg2;
- (void)_layoutSubviewsAnimated:(BOOL)arg1;
- (struct CGRect)_layoutAttributesForYOffset:(double)arg1 width:(double)arg2 animated:(BOOL)arg3;
- (void)_layoutLabelTextFields:(id)arg1 valueTextFields:(id)arg2 yOffset:(double *)arg3 xWidth:(double *)arg4 maxWidth:(double)arg5 labelRightX:(double)arg6;
- (BOOL)_isRTL;
- (BOOL)_updateDateAttributes;
- (void)_addSpotlightAttributeViews;
- (id)_attributeNames;
- (void)_addSpotlightAttributeNamed:(id)arg1 value:(id)arg2;
- (void)_addSpotlightValueViewForText:(id)arg1;
- (void)_addSpotlightLabelViewForText:(id)arg1;
- (id)_createTextFieldCopying:(id)arg1;
- (double)_widestLabelWidth;
- (double)_widestLabelInArray:(id)arg1;
- (struct CGSize)_previewSizeForWidth:(double)arg1;
- (BOOL)_isPreviewResizable;
- (void)loadView;
- (void)_loadStandardTextFields;
@property(retain, nonatomic) NSURL *previewURL;
- (void)_updatePreviewImageView;
@property(retain) NSDate *modDate; // @dynamic modDate;
- (void)_formatLastOpenedDate;
- (id)_fetchingString;
@property(retain) NSDate *creationDate; // @dynamic creationDate;
- (void)_setNonHiddenDate:(id)arg1 valueTextField:(id)arg2;
- (void)_setStandardDate:(id)arg1 labelTextField:(id)arg2 valueTextField:(id)arg3;
@property long long physicalSize; // @dynamic physicalSize;
- (id)_dashdashString;
@property(copy) NSString *kind; // @dynamic kind;
@property(copy) NSString *shortVersion; // @dynamic shortVersion;
@property(copy) NSString *displayName; // @dynamic displayName;
@property(readonly, getter=isPreviewViewExpanded) BOOL previewViewExpanded; // @dynamic previewViewExpanded;
@property(readonly, retain) QLPreviewView *previewView; // @dynamic previewView;
- (void)close;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

