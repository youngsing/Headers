//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@protocol PUInterruptibleViewControllerTransition <NSObject>
@property(readonly, nonatomic, getter=isTransitionPaused) _Bool transitionPaused;
- (void)resumeTransition:(_Bool)arg1;
- (void)updatePausedTransitionWithProgress:(double)arg1 interactionProgress:(double)arg2;
- (void)pauseTransition;
@end

