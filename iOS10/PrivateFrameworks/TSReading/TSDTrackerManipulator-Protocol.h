//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSObject;
@protocol TSDLayoutManipulatingTracker, TSDTrackerManipulator;

@protocol TSDTrackerManipulator
- (void)operationDidEnd;
- (_Bool)readyToEndOperation;
- (NSObject<TSDLayoutManipulatingTracker> *)tracker;
- (_Bool)allowTrackerManipulatorToTakeControl:(NSObject<TSDTrackerManipulator> *)arg1;

@optional
- (void)trackerManipulatorDidTakeControl:(NSObject<TSDTrackerManipulator> *)arg1;
- (void)didRelinquishControl;
- (void)willTakeControl;
- (void)operationWillEnd;
@end

