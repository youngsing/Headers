//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIFoundation/NSLayoutManager.h>

@interface NSLayoutManager (RulerSupport)
+ (Class)_rulerHelperClass;
- (id)rulerAccessoryViewForTextView:(id)arg1 paragraphStyle:(id)arg2 ruler:(id)arg3 enabled:(BOOL)arg4;
- (id)_rulerAccViewDecimalTabWell;
- (id)_rulerAccViewCenterTabWell;
- (id)_rulerAccViewRightTabWell;
- (id)_rulerAccViewLeftTabWell;
- (id)rulerMarkersForTextView:(id)arg1 paragraphStyle:(id)arg2 ruler:(id)arg3;
- (void)_rulerAccViewStylesAction:(id)arg1;
- (void)_rulerAccViewSpacingAction:(id)arg1;
- (void)_rulerAccViewListsAction:(id)arg1;
- (void)_rulerAccViewAlignmentAction:(id)arg1;
- (void)_doUserSetListMarkerFormat:(id)arg1 options:(unsigned long long)arg2;
- (void)_doUserSetListMarkerFormat:(id)arg1 options:(unsigned long long)arg2 startingItemNumber:(long long)arg3;
- (void)_doUserSetListMarkerFormat:(id)arg1 options:(unsigned long long)arg2 startingItemNumber:(long long)arg3 forceStartingItemNumber:(BOOL)arg4;
- (unsigned long long)_markerLevelForRange:(struct _NSRange)arg1;
- (void)_doUserSetListMarkerFormat:(id)arg1 options:(unsigned long long)arg2 startingItemNumber:(long long)arg3 inRange:(struct _NSRange)arg4 level:(unsigned long long)arg5;
- (void)_doUserRemoveMarkerFormatInRange:(struct _NSRange)arg1;
- (void)_doUserSetAttributes:(id)arg1;
- (void)_doUserSetAttributes:(id)arg1 removeAttributes:(id)arg2;
- (void)_doUserParagraphStyleLineHeightMultiple:(double)arg1 min:(double)arg2 max:(double)arg3 lineSpacing:(double)arg4 paragraphSpacingBefore:(double)arg5 after:(double)arg6 isFinal:(BOOL)arg7;
- (void)_rulerAccViewPullDownAction:(id)arg1;
- (void)_rulerAccViewUpdatePullDown:(id)arg1;
- (void)_rulerAccViewFixedLineHeightAction:(id)arg1;
- (void)_rulerAccViewIncrementLineHeightAction:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)_doUserParagraphStyleLineHeight:(double)arg1 fixed:(BOOL)arg2;
- (void)_rulerAccViewSetUpLists;
- (void)_rulerAccViewUpdateStyles:(id)arg1;
@end

