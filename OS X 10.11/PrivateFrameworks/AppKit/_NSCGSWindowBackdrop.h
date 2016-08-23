//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSCGSWindowBackdrop.h>

@class NSCGSWindow, NSString;

__attribute__((visibility("hidden")))
@interface _NSCGSWindowBackdrop : NSCGSWindowBackdrop
{
    NSCGSWindow *_window;
    struct CGSWindowBackdrop *_backdrop;
    NSString *_material;
    NSString *_blendMode;
    struct CGRect _frame;
    double _saturation;
    unsigned long long _level;
    unsigned int _hasActiveAppearance:1;
    unsigned int _orderedIn:1;
}

- (void)setOrderedIn:(BOOL)arg1;
- (BOOL)isOrderedIn;
- (void)setSaturation:(double)arg1;
- (double)saturation;
- (void)setHasActiveAppearance:(BOOL)arg1;
- (BOOL)hasActiveAppearance;
- (void)setLevel:(unsigned long long)arg1;
- (unsigned long long)level;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGRect)frame;
- (void)setBlendMode:(id)arg1;
- (id)blendMode;
- (void)setMaterial:(id)arg1;
- (id)material;
- (id)window;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;

@end

