//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSViewServiceViewController.h>

#import <VideoSubscriberAccount/UINavigationControllerDelegate-Protocol.h>

@class NSString, UINavigationController;

__attribute__((visibility("hidden")))
@interface VSViewServiceViewController_iOS : VSViewServiceViewController <UINavigationControllerDelegate>
{
    UINavigationController *_navController;
}

@property(retain, nonatomic) UINavigationController *navController; // @synthesize navController=_navController;
- (void).cxx_destruct;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)_navControllerWithRootviewController:(id)arg1;
- (void)_perfomShowViewControllerRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
