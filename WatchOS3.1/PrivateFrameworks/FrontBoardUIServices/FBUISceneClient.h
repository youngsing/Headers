//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardUIServices/FBUISceneClient-Protocol.h>

@class FBUISceneIdentity, NSString;
@protocol FBUISceneHostProxy;

@interface FBUISceneClient : NSObject <FBUISceneClient>
{
    FBUISceneIdentity *_identity;
    id <FBUISceneHostProxy> _hostProxy;
}

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy, nonatomic) NSString *sceneIdentifier;
- (void)didInvalidateSceneHost:(id)arg1;
- (void)sceneHost:(id)arg1 didReceiveActions:(id)arg2;
- (void)sceneHost:(id)arg1 destroySceneWithTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sceneHost:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sceneHost:(id)arg1 registerWithInitialParameters:(id)arg2;
- (void)registerWithDelegate:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithIdentity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
