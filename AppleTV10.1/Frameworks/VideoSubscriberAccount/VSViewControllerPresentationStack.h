//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSOperationQueue;
@protocol VSPresentableViewController, VSViewControllerPresentationStackDelegate;

__attribute__((visibility("hidden")))
@interface VSViewControllerPresentationStack : NSObject
{
    id <VSViewControllerPresentationStackDelegate> _delegate;
    id <VSPresentableViewController> _presentingViewController;
    NSOperationQueue *_privateQueue;
    NSMutableArray *_viewControllers;
}

@property(retain, nonatomic) NSMutableArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(nonatomic) __weak id <VSPresentableViewController> presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak id <VSViewControllerPresentationStackDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_notifyRootViewControllerDidAppear;
- (void)_updatePresentedViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)replaceAllViewControllersWithViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)replaceLastViewControllerWithViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)popToRootViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)popViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithPresentingViewController:(id)arg1;
- (id)init;

@end

