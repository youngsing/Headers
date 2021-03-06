//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AddressBookUI/UITextViewDelegate-Protocol.h>

@class NSString, UIColor, UIFont, UITextView;
@protocol ABSwellTextViewDelegate;

@interface ABSwellTextView : UIView <UITextViewDelegate>
{
    UITextView *_textView;
    double _maxHeight;
    _Bool _allowsEditing;
    id <ABSwellTextViewDelegate> _delegate;
    struct {
        unsigned int delegateImplementsShouldBeginEditing:1;
        unsigned int delegateImplementsShouldEndEditing:1;
        unsigned int delegateImplementsDidBeginEditing:1;
        unsigned int delegateImplementsDidEndEditing:1;
        unsigned int delegateImplementsDidChange:1;
    } _flags;
}

+ (double)lineHeightWithFont:(id)arg1;
@property(nonatomic) id <ABSwellTextViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) struct CGSize shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor;
- (void)abUITextView:(id)arg1 contentSizeChanged:(struct CGSize)arg2;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textViewTextDidChange:(id)arg1;
- (void)setKeyboardSettings:(id)arg1;
- (struct CGRect)rectForSelection;
@property(nonatomic) UIColor *textColor;
@property(nonatomic) UIFont *font;
@property(nonatomic) NSString *text;
@property(nonatomic) UIColor *highlightedTextColor;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (void)_clearBecomeFirstResponderWhenCapable;
- (void)_endPinningInputViews;
- (void)_beginPinningInputViews;
- (_Bool)resignFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)isFirstResponder;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)abUITextView:(id)arg1 heightForContentSize:(struct CGSize)arg2;
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

