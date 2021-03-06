//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SKUIColorScheme, UIActivityIndicatorView, UILabel;

@interface SKUILoadingView : UIView
{
    SKUIColorScheme *_colorScheme;
    UILabel *_label;
    UIActivityIndicatorView *_spinner;
}

+ (id)defaultLoadingTextWithClientContext:(id)arg1;
@property(copy, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
- (void).cxx_destruct;
- (void)willMoveToSuperview:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *loadingText;
- (id)initWithFrame:(struct CGRect)arg1;

@end

