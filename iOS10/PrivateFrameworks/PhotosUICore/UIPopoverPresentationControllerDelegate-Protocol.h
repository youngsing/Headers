//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/UIAdaptivePresentationControllerDelegate-Protocol.h>

@class UIPopoverPresentationController;

@protocol UIPopoverPresentationControllerDelegate <UIAdaptivePresentationControllerDelegate>

@optional
- (void)popoverPresentationController:(UIPopoverPresentationController *)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)popoverPresentationControllerDidDismissPopover:(UIPopoverPresentationController *)arg1;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(UIPopoverPresentationController *)arg1;
- (void)prepareForPopoverPresentation:(UIPopoverPresentationController *)arg1;
@end
