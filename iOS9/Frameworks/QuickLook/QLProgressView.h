//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface QLProgressView : UIView
{
    int _backgroundColorType;
    UIActivityIndicatorView *_progressIndicator;
    UILabel *_loadingTextLabel;
}

- (void)layoutSubviews;
@property(copy) NSString *loadingText;
@property int backgroundColorType;
- (void)_update;
- (void)dealloc;
- (id)init;

@end
