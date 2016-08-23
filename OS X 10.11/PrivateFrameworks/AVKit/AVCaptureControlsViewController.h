//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVKit/AVControlsViewController.h>

#import <AVKit/NSMenuDelegate-Protocol.h>

@class AVCaptureController, AVCaptureView, NSMenu, NSString;

__attribute__((visibility("hidden")))
@interface AVCaptureControlsViewController : AVControlsViewController <NSMenuDelegate>
{
    AVCaptureController *_captureController;
    AVCaptureView *_captureView;
    NSMenu *_sourceAndQualitySelectionMenu;
}

@property(retain, nonatomic) NSMenu *sourceAndQualitySelectionMenu; // @synthesize sourceAndQualitySelectionMenu=_sourceAndQualitySelectionMenu;
@property(nonatomic) __weak AVCaptureView *captureView; // @synthesize captureView=_captureView;
@property(nonatomic) __weak AVCaptureController *captureController; // @synthesize captureController=_captureController;
- (void).cxx_destruct;
- (void)hideControlsForAuxiliaryControl;
- (void)showControlsForAuxiliaryControl;
- (void)takeSelectedCaptureQualityItemFromRepresentedObjectOf:(id)arg1;
- (void)takeSelectedCaptureDeviceInputSourceItemFromRepresentedObjectOf:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)addItemWithTitle:(id)arg1 qualityItems:(id)arg2 selectedQualityItem:(id)arg3 toMenu:(id)arg4;
- (void)addItemWithTitle:(id)arg1 andSubitemsForInputSourceItems:(id)arg2 toMenu:(id)arg3;
- (void)captureDeviceSelectionButtonPressed:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

