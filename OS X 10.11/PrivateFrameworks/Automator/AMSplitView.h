//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSplitView.h>

@class NSImage, NSLayoutConstraint;

@interface AMSplitView : NSSplitView
{
    NSImage *_splitterDimple;
    NSImage *_splitterBackground;
    NSLayoutConstraint *_breadthConstraint;
    double _expandedPosition;
    BOOL _collapsesToRightBottom;
    BOOL _isCollapsing;
}

@property(retain) NSLayoutConstraint *breadthConstraint; // @synthesize breadthConstraint=_breadthConstraint;
@property(readonly) BOOL isCollapsing; // @synthesize isCollapsing=_isCollapsing;
@property double expandedPosition; // @synthesize expandedPosition=_expandedPosition;
@property BOOL collapsesToRightOrBottom; // @synthesize collapsesToRightOrBottom=_collapsesToRightBottom;
- (void)collapseWithAnimation:(BOOL)arg1;
- (void)collapse;
- (void)expandWithAnimation:(BOOL)arg1;
- (void)expand;
- (void)_collapse:(BOOL)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)disengageBreadthConstraint;
- (void)engageBreadthConstraintForSubview:(id)arg1;
- (void)hideSubview:(id)arg1;
- (void)drawDividerInRect:(struct CGRect)arg1;
- (void)setPosition:(double)arg1 ofDividerAtIndex:(long long)arg2;
- (double)positionOfDividerAtIndex:(long long)arg1;
- (id)dividerColor;
- (double)dividerThickness;
- (void)setDividerStyle:(long long)arg1;
- (BOOL)usesCustomDivider;
- (void)dealloc;
- (void)_autosaveSubviewLayoutIfNecessary;
- (id)initWithCoder:(id)arg1;

@end
