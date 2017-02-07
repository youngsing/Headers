//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface HUColoredButton : UIButton
{
    double _highlightedAlpha;
    double _highlightedTextAlpha;
}

@property(nonatomic) double highlightedTextAlpha; // @synthesize highlightedTextAlpha=_highlightedTextAlpha;
@property(nonatomic) double highlightedAlpha; // @synthesize highlightedAlpha=_highlightedAlpha;
- (void)setHighlighted:(_Bool)arg1;
@property(nonatomic) double cornerRadius;
- (id)initWithFrame:(struct CGRect)arg1 highlightedAlpha:(double)arg2 highlightedTextAlpha:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
