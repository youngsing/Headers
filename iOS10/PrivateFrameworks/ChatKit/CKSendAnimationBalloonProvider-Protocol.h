//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class NSArray;
@protocol CKSendAnimationContext;

@protocol CKSendAnimationBalloonProvider <NSObject>
- (_Bool)wantsOverKeyboardAnimationForSendAnimationContext:(id <CKSendAnimationContext>)arg1;
- (NSArray *)throwBalloonsForSendAnimationContext:(id <CKSendAnimationContext>)arg1;
@end
