//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FinderKit/NSObject-Protocol.h>

@class IKImageFlowView, NSEvent;

@protocol IKImageFlowDelegate <NSObject>

@optional
- (void)imageFlow:(IKImageFlowView *)arg1 cellWasDoubleClickedAtIndex:(unsigned long long)arg2;
- (void)imageFlow:(IKImageFlowView *)arg1 startResizingWithEvent:(NSEvent *)arg2;
- (void)imageFlow:(IKImageFlowView *)arg1 didLoadItemAtIndex:(unsigned long long)arg2;
- (void)imageFlowDidStabilize:(id)arg1;
- (void)imageFlowWillStabilize:(id)arg1;
- (void)imageFlow:(IKImageFlowView *)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
@end

