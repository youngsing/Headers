//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/NSObject-Protocol.h>

@class AFUIStateMachine, NSString;

@protocol AFUIStateMachineDelegate <NSObject>
- (void)stateMachine:(AFUIStateMachine *)arg1 didTransitionFromState:(long long)arg2 forEvent:(long long)arg3;

@optional
- (NSString *)stateMachine:(AFUIStateMachine *)arg1 descriptionForEvent:(long long)arg2;
@end
