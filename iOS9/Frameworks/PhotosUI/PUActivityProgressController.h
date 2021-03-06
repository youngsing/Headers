//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PUActivityProgressViewController, UIAlertController, UIView;

__attribute__((visibility("hidden")))
@interface PUActivityProgressController : NSObject
{
    PUActivityProgressViewController *_progressViewController;
    UIAlertController *_alertController;
    UIView *_containerView;
    UIView *_dimmingView;
    UIView *_progressContainerView;
    double _whenDidShow;
    _Bool _didShow;
    _Bool _didHide;
    NSString *_title;
    CDUnknownBlockType _cancellationHandler;
}

@property(copy, nonatomic) CDUnknownBlockType cancellationHandler; // @synthesize cancellationHandler=_cancellationHandler;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)hideAnimated:(_Bool)arg1 allowDelay:(_Bool)arg2;
- (void)showAnimated:(_Bool)arg1 allowDelay:(_Bool)arg2;
- (id)_newProgressContainerView;
- (void)setProgress:(double)arg1;
- (id)init;

@end

