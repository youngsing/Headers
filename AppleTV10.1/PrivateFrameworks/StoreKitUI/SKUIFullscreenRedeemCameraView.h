//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <StoreKitUI/UITextFieldDelegate-Protocol.h>

@class NSString, SKUIRedeemTextField, UIImage;
@protocol SKUIRedeemCameraViewDelegate;

@interface SKUIFullscreenRedeemCameraView : UIView <UITextFieldDelegate>
{
    id <SKUIRedeemCameraViewDelegate> _delegate;
    UIView *_overlay;
    UIView *_redeemerView;
    SKUIRedeemTextField *_textField;
    struct CGRect _keyboardRect;
    _Bool _enabled;
}

@property(nonatomic) __weak id <SKUIRedeemCameraViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_resumeRedeemer;
- (void)_pauseRedeemer;
- (id)_newTextFieldWithClientContext:(id)arg1;
- (void)_hideKeyboard;
- (void)_tapGestureAction:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)layoutSubviews;
- (void)start;
@property(nonatomic) _Bool enabled;
- (void)showKeyboard;
@property(retain, nonatomic) UIImage *image;
@property(copy, nonatomic) NSString *text;
- (void)dealloc;
- (id)initWithClientContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

