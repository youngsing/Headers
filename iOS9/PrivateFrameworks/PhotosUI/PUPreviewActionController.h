//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUAssetActionPerformerDelegate-Protocol.h>
#import <PhotosUI/PUBrowsingViewModelChangeObserver-Protocol.h>

@class NSArray, NSString, PUAssetActionPerformer, PUBrowsingSession, UIViewController;
@protocol PUPreviewActionControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUPreviewActionController : NSObject <PUBrowsingViewModelChangeObserver, PUAssetActionPerformerDelegate>
{
    _Bool __needsUpdateActions;
    NSArray *_previewActions;
    PUBrowsingSession *_browsingSession;
    UIViewController *_presentingViewController;
    id <PUPreviewActionControllerDelegate> _delegate;
    PUAssetActionPerformer *__activeActionPerformer;
}

@property(retain, nonatomic, setter=_setActiveActionPerformer:) PUAssetActionPerformer *_activeActionPerformer; // @synthesize _activeActionPerformer=__activeActionPerformer;
@property(nonatomic, setter=_setNeedsUpdateActions:) _Bool _needsUpdateActions; // @synthesize _needsUpdateActions=__needsUpdateActions;
@property(nonatomic) __weak id <PUPreviewActionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) PUBrowsingSession *browsingSession; // @synthesize browsingSession=_browsingSession;
- (void)_setPreviewActions:(id)arg1;
- (void).cxx_destruct;
- (_Bool)assetActionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)assetActionPerformer:(id)arg1 presentViewController:(id)arg2;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_executeActionPerformer:(id)arg1;
- (void)_performCopyAction;
- (void)_performFavoriteAction:(_Bool)arg1;
- (void)_performTrashAction;
- (void)_performRestoreAction;
- (void)_notifiyDelegateOfIdentifiedAction:(id)arg1;
- (unsigned long long)_actionForPreferredAction:(unsigned long long)arg1;
- (void)_updateActionsIfNeeded;
- (void)_updateIfNeeded;
- (_Bool)_needsUpdate;
- (void)_invalidateActions;
@property(retain, nonatomic) NSArray *previewActions; // @synthesize previewActions=_previewActions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

