//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface HUQuickControlBackgroundEffectView : UIView
{
    unsigned long long _effectType;
}

@property(readonly, nonatomic) unsigned long long effectType; // @synthesize effectType=_effectType;
- (void)_configureForCurrentEffectType;
- (void)tintColorDidChange;
- (id)initWithEffectType:(unsigned long long)arg1;

@end
