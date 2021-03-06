//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/_TVAppNavigationController.h>

@interface _TVAppNavigationController_iOS : _TVAppNavigationController
{
}

- (void)_viewControllerNeedsNavigationBarAppearanceUpdate:(id)arg1;
- (void)_setNavigationPalette:(id)arg1 hidesPaletteShadow:(_Bool)arg2;
- (void)_configureNavigationBarForViewController:(id)arg1 shouldIgnoreTransitionCoordinator:(_Bool)arg2;
- (void)_configureNavigationBar:(id)arg1 withTintColor:(id)arg2 tintAdjustmentMode:(long long)arg3 titleTextTintColor:(id)arg4 shouldTintTitleText:(_Bool)arg5 accessibilityButtonBackgroundTintColor:(id)arg6;
- (id)_accessibilityButtonBackgroundDefaultTintColor;
- (void)_scheduleConfigurationOfNavigationBar;
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;
- (void)attachPalette:(id)arg1 isPinned:(_Bool)arg2;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (long long)preferredStatusBarStyle;

@end

