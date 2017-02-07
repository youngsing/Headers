//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FinderKit/FI_TDFRScrollingStackViewController.h>

#import <FinderKit/TCoalescingNodeObserverProtocol-Protocol.h>

@class NSObject, NSString;
@protocol TDFRTagsViewTagProviding;

__attribute__((visibility("hidden")))
@interface FI_TDFRAddTagsViewController : FI_TDFRScrollingStackViewController <TCoalescingNodeObserverProtocol>
{
    function_16eb4769 _buttonAction;
    struct TFENodeVector _tags;
    struct map<TString, TNSRef<FI_TDFRTagButton *, void>, std::__1::less<TString>, std::__1::allocator<std::__1::pair<const TString, TNSRef<FI_TDFRTagButton *, void>>>> _tagNameToButtonMap;
    struct TNSWeakPtr<NSObject<TDFRTagsViewTagProviding>, void> _tagProvider;
    struct unique_ptr<TCoalescingNodeObserverCocoaBridge, std::__1::default_delete<TCoalescingNodeObserverCocoaBridge>> _targetNodesObserver;
    struct TNotificationCenterObserver _tagRegistryObserver;
    struct TString _filterString;
}

+ (id)depressedTagButtonImageForTag:(id)arg1;
+ (id)tagButtonImageForTag:(id)arg1 shouldDrawOutline:(_Bool)arg2;
+ (id)sharedAddTagsViewController;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setFilterString:(struct TString)arg1;
- (void)updateTag:(id)arg1 button:(id)arg2 tags:(id)arg3;
- (void)updateTagButtons:(id)arg1;
- (void)updateTagStates;
- (void)reload;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (id)buttonForTag:(struct TString)arg1;
- (id)tagButtonWithTitle:(struct TString)arg1 image:(id)arg2;
- (void)setButtonAction:(const function_16eb4769 *)arg1;
- (function_16eb4769)buttonAction;
@property(nonatomic) __weak NSObject<TDFRTagsViewTagProviding> *tagProvider;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 bulkNodesChanged:(const map_39732344 *)arg2;
- (void)setTargetNodes:(const struct TFENodeVector *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
