//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UITargetedProxy.h>

#import <UIKit/_UIViewServiceDeputy-Protocol.h>
#import <UIKit/_UIViewServiceUIBehaviorInterface-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIViewControllerControlMessageDeputy : _UITargetedProxy <_UIViewServiceDeputy, _UIViewServiceUIBehaviorInterface>
{
}

+ (id)proxyWithTarget:(id)arg1;
+ (id)XPCInterface;
- (id)invalidate;
- (void)__prepareForDisconnectionWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

