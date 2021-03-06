//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>
#import <FrontBoard/FBSceneLayerHostContainerViewDelegate-Protocol.h>

@class FBOrderedRequesters, FBScene, FBSceneHostWrapperView, FBSceneLayerHostContainerView, FBSceneLayerManager, NSHashTable, NSMutableDictionary, NSMutableSet, NSString, UIColor;
@protocol FBSceneHostManagerDelegate;

@interface FBSceneHostManager : NSObject <FBSceneLayerHostContainerViewDelegate, BSDescriptionProviding>
{
    FBSceneLayerManager *_layerManager;
    FBScene *_scene;
    NSString *_identifier;
    UIColor *_defaultBackgroundColorWhileHosting;
    UIColor *_defaultBackgroundColorWhileNotHosting;
    unsigned long long _defaultHostedLayerTypes;
    FBSceneLayerHostContainerView *_hostView;
    FBSceneHostWrapperView *_activeWrapperView;
    _Bool _suspended;
    _Bool _invalidated;
    FBOrderedRequesters *_hostRequesters;
    NSMutableDictionary *_hostWrapperViewsByRequester;
    NSMutableSet *_disableHostingAssertions;
    NSHashTable *_observers;
    id <FBSceneHostManagerDelegate> _delegate;
    struct {
        unsigned int delegateOverrideRequester:1;
        unsigned int DEPRECATED_delegateOverrideRequester:1;
        unsigned int delegateShouldEnableContextHostingForRequester:1;
        unsigned int DEPRECATED_delegateShouldEnableContextHostingForRequester:1;
    } _flags;
}

@property(readonly, retain, nonatomic) FBScene *scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long defaultHostedLayerTypes; // @synthesize defaultHostedLayerTypes=_defaultHostedLayerTypes;
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic, getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) id <FBSceneHostManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)sceneLayerHostContainerViewHostedLayersDidChange:(id)arg1;
- (id)visibleContexts;
- (id)_snapshotContextForFrame:(struct CGRect)arg1 excludedContextIDs:(id)arg2 opaque:(_Bool)arg3 outTransform:(struct CGAffineTransform *)arg4;
- (id)_snapshotContextForFrame:(struct CGRect)arg1 excludedLayers:(id)arg2 opaque:(_Bool)arg3;
- (id)_overrideRequesterIfNecessary:(id)arg1;
- (void)_activateRequester:(id)arg1;
- (id)_wrapperViewForRequester:(id)arg1;
- (id)_hostViewForRequester:(id)arg1 enableAndOrderFront:(_Bool)arg2;
- (id)_hostViewForRequester:(id)arg1;
- (id)_activeHostRequester;
- (void)_updateActiveHostRequester;
- (struct CGImage *)snapshotCGImageRefForFrame:(struct CGRect)arg1 excludingContexts:(id)arg2 opaque:(_Bool)arg3 outTransform:(struct CGAffineTransform *)arg4;
- (id)snapshotUIImageForFrame:(struct CGRect)arg1 excludingContexts:(id)arg2 opaque:(_Bool)arg3 outTransform:(struct CGAffineTransform *)arg4;
- (id)snapshotViewWithFrame:(struct CGRect)arg1 excludingContexts:(id)arg2 opaque:(_Bool)arg3;
- (id)snapshotViewForSnapshot:(id)arg1;
- (id)snapshotViewWithContext:(id)arg1;
- (id)snapshotContextForRequester:(id)arg1;
- (id)disableHostingForReason:(id)arg1;
- (void)setLayer:(id)arg1 hidden:(_Bool)arg2 forRequester:(id)arg3;
- (void)setContextId:(unsigned int)arg1 hidden:(_Bool)arg2 forRequester:(id)arg3;
- (id)visibleLayersForRequester:(id)arg1;
- (id)visibleLayers;
- (void)orderRequesterFront:(id)arg1;
- (void)disableHostingForRequester:(id)arg1;
- (void)resumeLayerHosting;
- (void)suspendLayerHosting;
- (void)invalidate;
- (void)enableHostingForRequester:(id)arg1 priority:(long long)arg2;
- (void)enableHostingForRequester:(id)arg1 orderFront:(_Bool)arg2;
- (id)hostViewForRequester:(id)arg1 enableAndOrderFront:(_Bool)arg2 appearanceStyle:(unsigned long long)arg3;
- (id)hostViewForRequester:(id)arg1 enableAndOrderFront:(_Bool)arg2;
- (id)hostViewForRequester:(id)arg1 appearanceStyle:(unsigned long long)arg2;
- (id)hostViewForRequester:(id)arg1;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) UIColor *defaultBackgroundColorWhileNotHosting;
@property(copy, nonatomic) UIColor *defaultBackgroundColorWhileHosting;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithLayerManager:(id)arg1 scene:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

