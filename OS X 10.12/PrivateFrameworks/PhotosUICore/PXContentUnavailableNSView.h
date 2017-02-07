//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSButton, NSMutableArray, NSProgressIndicator, NSString, PXCUTextField;

@interface PXContentUnavailableNSView : NSView
{
    BOOL _showProgress;
    NSString *_title;
    NSString *_message;
    NSString *_buttonTitle;
    NSButton *_actionButton;
    CDUnknownBlockType _buttonAction;
    NSProgressIndicator *_progressIndicator;
    unsigned long long _vibrantOptions;
    NSView *_containerView;
    PXCUTextField *_titleLabel;
    PXCUTextField *_messageLabel;
    NSMutableArray *_containerViewContraints;
}

+ (id)placeholderMessageTextAttributes;
+ (id)placeholderTitleTextAttributes;
@property(retain, nonatomic) NSMutableArray *containerViewContraints; // @synthesize containerViewContraints=_containerViewContraints;
@property(retain, nonatomic) PXCUTextField *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) PXCUTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) unsigned long long vibrantOptions; // @synthesize vibrantOptions=_vibrantOptions;
@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(nonatomic) BOOL showProgress; // @synthesize showProgress=_showProgress;
@property(copy, nonatomic) CDUnknownBlockType buttonAction; // @synthesize buttonAction=_buttonAction;
@property(retain, nonatomic) NSButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)layout;
- (void)_updateProgressLayout;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2;
- (void)_updateTextField:(id)arg1 withAttributedText:(id)arg2;
- (id)_textFieldWithFontSize:(double)arg1;
- (void)_actionButtonPressed:(id)arg1;
- (id)_buttonTitleAttributes;
- (double)_buttonAlpha;
- (double)_labelAlpha;
- (id)_tintColor;
- (id)_textColor;
- (id)_flatTextColor;
- (id)_vibrantBaseColor;
- (BOOL)_hasVibrantButton;
- (BOOL)_hasVibrantText;
- (BOOL)_lookIsDark;

@end
