//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIVisualEffectView.h>

@class _TVLabel;

__attribute__((visibility("hidden")))
@interface _TVVibrantLabel : UIVisualEffectView
{
    _TVLabel *_label;
}

@property(retain, nonatomic) _TVLabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (struct UIEdgeInsets)tv_alignmentInsetsForExpectedWidth:(double)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setMarqueeRunning:(_Bool)arg1;
- (void)setMarqueeEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

