//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _TVConfirmationDialogTemplateView : UIView
{
    UIVisualEffectView *_backdropView;
    UIView *_cardView;
}

@property(readonly, nonatomic) UIVisualEffectView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
- (void).cxx_destruct;
- (void)_configureSubviews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

