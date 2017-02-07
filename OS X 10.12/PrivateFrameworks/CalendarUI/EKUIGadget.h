//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarUI/EKUILayoutItem-Protocol.h>

@class EKUIGadgetScrollView, EKViewController, NSLayoutConstraint, NSString, NSView;
@protocol EKUILayoutItem;

@interface EKUIGadget : NSObject <EKUILayoutItem>
{
    BOOL _isVisible;
    BOOL _shouldScrollToTop;
    BOOL _isScrolling;
    BOOL _scrollsOutsideMainScrollArea;
    NSView *_gadgetView;
    id <EKUILayoutItem> _parentItem;
    NSView *_firstKeyView;
    NSView *_lastKeyView;
    EKUIGadgetScrollView *_scrollView;
    EKViewController *_viewController;
    NSString *_uuid;
    NSLayoutConstraint *_scrollContentHeightConstraint;
    NSLayoutConstraint *_scrollViewMaxHeightConstraint;
}

+ (id)interestedChangeKeys;
@property BOOL scrollsOutsideMainScrollArea; // @synthesize scrollsOutsideMainScrollArea=_scrollsOutsideMainScrollArea;
@property BOOL isScrolling; // @synthesize isScrolling=_isScrolling;
@property(retain) NSLayoutConstraint *scrollViewMaxHeightConstraint; // @synthesize scrollViewMaxHeightConstraint=_scrollViewMaxHeightConstraint;
@property(retain) NSLayoutConstraint *scrollContentHeightConstraint; // @synthesize scrollContentHeightConstraint=_scrollContentHeightConstraint;
@property BOOL shouldScrollToTop; // @synthesize shouldScrollToTop=_shouldScrollToTop;
@property BOOL isVisible; // @synthesize isVisible=_isVisible;
@property(retain) NSString *uuid; // @synthesize uuid=_uuid;
@property __weak EKViewController *viewController; // @synthesize viewController=_viewController;
@property(retain) EKUIGadgetScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak NSView *lastKeyView; // @synthesize lastKeyView=_lastKeyView;
@property(nonatomic) __weak NSView *firstKeyView; // @synthesize firstKeyView=_firstKeyView;
@property __weak id <EKUILayoutItem> parentItem; // @synthesize parentItem=_parentItem;
@property(retain) NSView *gadgetView; // @synthesize gadgetView=_gadgetView;
- (void).cxx_destruct;
- (id)timeZoneToDisplayIn;
- (id)calendar;
- (id)reminder;
- (id)event;
- (BOOL)performDragOperation:(id)arg1;
- (id)claimedPboardTypes;
- (BOOL)shouldDisplay;
- (double)preferredWidth;
- (void)animationDidFinish:(id)arg1;
- (void)inspectorWindowWillClose;
- (BOOL)wantsAnimationSuppression;
- (BOOL)needsExpansion;
- (BOOL)hasContent;
- (id)subItems;
- (BOOL)isContainer;
- (id)enclosingGadgetContainer;
@property(setter=setExpanded:) BOOL isExpanded;
- (BOOL)isEditable;
- (id)object;
- (id)item;
- (BOOL)updateWithDiff:(id)arg1;
- (void)updateWithChanges:(id)arg1;
- (BOOL)isInterestedInChanges:(id)arg1;
- (void)saveCompleteChangeWithoutPromptingUserAboutDecline;
- (void)saveCompleteChange;
- (void)savePartialChange;
- (void)savePendingChanges;
- (void)mouseExitedGadgetView;
- (void)mouseEnteredGadgetView;
- (void)setNeedsUpdateConstraints:(BOOL)arg1;
- (void)updateConstraints;
- (BOOL)adjustConstraintsInResponseToLayout;
- (id)view;
- (double)maxHeight;
- (void)setObject:(id)arg1;
- (void)_scrollViewFrameDidChange:(id)arg1;
- (void)dealloc;
- (void)scrollToBottom;
- (void)scrollToTop;
- (void)updateScrollState;
- (void)setGadgetScrollsOutsideMainScrollArea:(BOOL)arg1;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
