//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSError, NSObservation;
@protocol NSObservable><NSObserver, NSObserver;

@protocol NSObservable <NSObject>

@optional
- (void)finishObserving;
- (void)receiveObservedError:(NSError *)arg1;
- (void)receiveObservedValue:(id)arg1;
- (void)removeObservation:(NSObservation *)arg1;
- (NSObservation<NSObservable><NSObserver> *)addObserver:(id <NSObserver>)arg1;
@end

