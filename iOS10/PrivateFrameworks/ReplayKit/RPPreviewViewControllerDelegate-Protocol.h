//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ReplayKit/NSObject-Protocol.h>

@class NSSet, RPPreviewViewController;

@protocol RPPreviewViewControllerDelegate <NSObject>

@optional
- (void)previewController:(RPPreviewViewController *)arg1 didFinishWithActivityTypes:(NSSet *)arg2;
- (void)previewControllerDidFinish:(RPPreviewViewController *)arg1;
@end
