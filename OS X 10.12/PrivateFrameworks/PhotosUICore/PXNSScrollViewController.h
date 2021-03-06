//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXScrollViewController.h>

#import <PhotosUICore/NSScrollViewDelegate-Protocol.h>
#import <PhotosUICore/PXNSScrollViewDelegate-Protocol.h>

@class NSScrollView, NSString, PXNSScrollView;

@interface PXNSScrollViewController : PXScrollViewController <PXNSScrollViewDelegate, NSScrollViewDelegate>
{
    PXNSScrollView *_scrollView;
}

- (void).cxx_destruct;
- (id)contentCoordinateSpace;
- (void)didEndScrollInScrollView:(id)arg1;
- (void)scrollViewBeganMomentum:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)didScrollInScrollView:(id)arg1;
- (void)didBeginScrollInScrollView:(id)arg1;
- (void)scrollViewDidLayout:(id)arg1;
- (void)applyScrollInfo:(id)arg1;
- (void)setScrollViewContentBounds:(struct CGRect)arg1;
- (void)setContentInset:(struct NSEdgeInsets)arg1;
- (struct CGSize)scrollViewContentSize;
- (struct CGRect)scrollViewContentBounds;
- (struct CGRect)scrollViewVisibleRect;
- (struct CGRect)scrollViewActiveRect;
- (struct CGSize)scrollViewReferenceSize;
- (void)scrollViewLayoutIfNeeded;
- (void)setScrollViewNeedsLayout;
- (void)scrollRectToVisible:(struct CGRect)arg1 avoidingContentInsetEdges:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)addSubviewToScrollView:(struct NSObject *)arg1;
- (void)addSubview:(id)arg1;
@property(readonly, nonatomic) NSScrollView *scrollView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

