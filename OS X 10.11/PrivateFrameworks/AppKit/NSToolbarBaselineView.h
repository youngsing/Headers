//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface NSToolbarBaselineView : NSView
{
}

+ (id)_coreUIDrawOptionsWithView:(id)arg1;
+ (id)_coreUIDrawOptionsWithViewPresentationState:(long long)arg1 hasHUDWindowStyle:(BOOL)arg2 isFlipped:(BOOL)arg3;
+ (void)_drawInToolbarView:(id)arg1 bounds:(struct CGRect)arg2 context:(id)arg3;
- (BOOL)allowsVibrancy;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (BOOL)ignoreHitTest;
- (BOOL)shouldBeArchived;
- (struct CGSize)intrinsicContentSize;
@property(readonly, copy) NSDictionary *_coreUIDrawOptions;

@end

