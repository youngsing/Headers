//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FinderKit/FI_TViewController.h>

#import <FinderKit/TCoalescingNodeObserverProtocol-Protocol.h>

@class NSButton, NSString;

__attribute__((visibility("hidden")))
@interface FI_TBannerViewController : FI_TViewController <TCoalescingNodeObserverProtocol>
{
    int _type;
    struct TString _text;
    struct TString _buttonTitle;
    _Bool _isButtonEnabled;
    struct TCoalescingNodeObserverCocoaBridge *_nodeObserver;
    struct TFENode _observedNode;
    struct TNotificationCenterObserver _finderPrefsChangedObserver;
    NSButton *_learnMoreButton;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(getter=isButtonEnabled) _Bool buttonEnabled; // @synthesize buttonEnabled=_isButtonEnabled;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 nodesChanged:(const vector_614ab7ad *)arg2 inObservedNode:(const struct TFENode *)arg3;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 openSyncCompleted:(const struct TFENode *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 nodesDeleted:(const struct TFENodeVector *)arg2 fromObservedNode:(const struct TFENode *)arg3;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 nodesAdded:(const struct TFENodeVector *)arg2 toObservedNode:(const struct TFENode *)arg3;
- (void)populationChangedInContainerNode:(const struct TFENode *)arg1;
- (void)stopObservingTargetNode;
- (void)startObservingTargetNode;
- (void)upgradeToICloudDrive:(_Bool)arg1;
- (void)emptyTrash;
- (struct TString)buttonTitleForTrashFolder;
- (_Bool)buttonEnabledStateForTrashFolder;
- (void)updateBannerState;
- (void)buttonPressed:(id)arg1;
@property(copy, nonatomic) NSString *buttonTitle; // @dynamic buttonTitle;
@property(copy, nonatomic) NSString *text; // @dynamic text;
- (void)setRepresentedObject:(id)arg1;
- (struct TFENode)representedNode;
- (void)viewLoaded;
- (void)dealloc;
- (id)initWithBannerType:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
