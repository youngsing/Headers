//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, UIView;

@interface MPUControlCenterCrossFadeComponent : NSObject
{
    NSMutableArray *_siblingViews;
    _Bool _shouldMoveSnapshotView;
    UIView *_view;
    UIView *_snapshotView;
    double _fadeOutDuration;
    double _fadeOutDelay;
    double _fadeInDuration;
    double _fadeInDelay;
}

+ (id)componentWithView:(id)arg1;
@property(nonatomic) _Bool shouldMoveSnapshotView; // @synthesize shouldMoveSnapshotView=_shouldMoveSnapshotView;
@property(nonatomic) double fadeInDelay; // @synthesize fadeInDelay=_fadeInDelay;
@property(nonatomic) double fadeInDuration; // @synthesize fadeInDuration=_fadeInDuration;
@property(nonatomic) double fadeOutDelay; // @synthesize fadeOutDelay=_fadeOutDelay;
@property(nonatomic) double fadeOutDuration; // @synthesize fadeOutDuration=_fadeOutDuration;
@property(readonly, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)performSiblingViewChanges;
- (void)performAlphaAndFrameChanges;
- (void)addSiblingView:(id)arg1;
@property(readonly, nonatomic) NSArray *siblingViews;
- (id)initWithView:(id)arg1;

@end

