//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUUserTransformView;

@protocol PUUserTransformViewDelegate <NSObject>
- (void)userTransformView:(PUUserTransformView *)arg1 didChangeUserAffineTransform:(struct CGAffineTransform)arg2 isUserInteracting:(_Bool)arg3;

@optional
- (void)userTransformView:(PUUserTransformView *)arg1 didChangeIsUserInteracting:(_Bool)arg2;
- (_Bool)userTransformView:(PUUserTransformView *)arg1 shouldReceiveTouchAtPoint:(struct CGPoint)arg2;
@end
