//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUQuickControlViewInteractionDelegate-Protocol.h>

@class HFColorPalette, UIView;
@protocol HUQuickControlAuxiliaryView, HUQuickControlInteractiveView;

@protocol HUQuickControlColorViewInteractionDelegate <HUQuickControlViewInteractionDelegate>
- (void)hideAuxiliaryViewForControlView:(id <HUQuickControlInteractiveView>)arg1;
- (void)controlView:(id <HUQuickControlInteractiveView>)arg1 showAuxiliaryView:(UIView<HUQuickControlAuxiliaryView> *)arg2;
- (void)controlView:(id <HUQuickControlInteractiveView>)arg1 colorPaletteDidChange:(HFColorPalette *)arg2;
- (void)controlView:(id <HUQuickControlInteractiveView>)arg1 activeModeDidChange:(unsigned long long)arg2;
@end
