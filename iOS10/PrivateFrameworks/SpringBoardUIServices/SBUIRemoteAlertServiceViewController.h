//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardUIServices/SBUIRemoteAlertServiceInterface-Protocol.h>

@interface SBUIRemoteAlertServiceViewController : UIViewController <SBUIRemoteAlertServiceInterface>
{
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
- (_Bool)_selectorIsOverriden:(SEL)arg1;
- (void)setUserInfo:(id)arg1;
- (void)handleButtonActions:(id)arg1;
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)noteActivatedForCustomReason:(id)arg1;
- (void)noteActivatedForActivityContinuationWithIdentifier:(id)arg1;
- (void)handleDoubleHeightStatusBarTap;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

