//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MusicMultiPaneScrollingContext : NSObject
{
    double _previousMaximumHeaderHeight;
    double _previousStabilizingBottomAdditions;
    long long _snapDecelerationVeloctiyOverrideState;
    double _snapDownContentOffset;
    long long _snapState;
    double _snapUpContentOffset;
    struct CGPoint _previousContentOffset;
    struct UIEdgeInsets _previousContentInsetAdditions;
    struct UIEdgeInsets _previousContentScrollInsetAdditions;
    struct UIEdgeInsets _previousExternalContentInset;
    struct UIEdgeInsets _previousMaximumContentSizeScrollIndicatorInsetAdditions;
}

@property(nonatomic) double snapUpContentOffset; // @synthesize snapUpContentOffset=_snapUpContentOffset;
@property(nonatomic) long long snapState; // @synthesize snapState=_snapState;
@property(nonatomic) double snapDownContentOffset; // @synthesize snapDownContentOffset=_snapDownContentOffset;
@property(nonatomic) long long snapDecelerationVeloctiyOverrideState; // @synthesize snapDecelerationVeloctiyOverrideState=_snapDecelerationVeloctiyOverrideState;
@property(nonatomic) double previousStabilizingBottomAdditions; // @synthesize previousStabilizingBottomAdditions=_previousStabilizingBottomAdditions;
@property(nonatomic) double previousMaximumHeaderHeight; // @synthesize previousMaximumHeaderHeight=_previousMaximumHeaderHeight;
@property(nonatomic) struct UIEdgeInsets previousMaximumContentSizeScrollIndicatorInsetAdditions; // @synthesize previousMaximumContentSizeScrollIndicatorInsetAdditions=_previousMaximumContentSizeScrollIndicatorInsetAdditions;
@property(nonatomic) struct UIEdgeInsets previousExternalContentInset; // @synthesize previousExternalContentInset=_previousExternalContentInset;
@property(nonatomic) struct UIEdgeInsets previousContentScrollInsetAdditions; // @synthesize previousContentScrollInsetAdditions=_previousContentScrollInsetAdditions;
@property(nonatomic) struct UIEdgeInsets previousContentInsetAdditions; // @synthesize previousContentInsetAdditions=_previousContentInsetAdditions;
@property(nonatomic) struct CGPoint previousContentOffset; // @synthesize previousContentOffset=_previousContentOffset;

@end
