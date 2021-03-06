//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKit/PKLinkedApplicationDelegate-Protocol.h>

@class CALayer, NSString, PKLinkedApplication, UIImage, UIVisualEffectView, WLEasyToHitCustomButton;

@interface PKLinkedAppIconView : UIView <PKLinkedApplicationDelegate>
{
    WLEasyToHitCustomButton *_iconButton;
    UIImage *_iconImage;
    UIVisualEffectView *_blurView;
    CALayer *_blurMask;
    _Bool _translucent;
    PKLinkedApplication *_linkedApplication;
}

@property(nonatomic, getter=isTranslucent) _Bool translucent; // @synthesize translucent=_translucent;
@property(readonly, nonatomic) PKLinkedApplication *linkedApplication; // @synthesize linkedApplication=_linkedApplication;
- (void)linkedApplicationDidChangeState:(id)arg1;
- (void)tapped:(id)arg1;
- (void)_updateWithIconImage:(id)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithLinkedApplication:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

