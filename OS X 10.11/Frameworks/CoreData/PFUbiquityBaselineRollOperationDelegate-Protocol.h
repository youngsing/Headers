//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSObject-Protocol.h>

@class PFUbiquityBaselineRollOperation;

@protocol PFUbiquityBaselineRollOperationDelegate <NSObject>
- (void)baselineRollOperationWasUnableToLockPersistentStore:(PFUbiquityBaselineRollOperation *)arg1;
- (void)baselineRollOperationEncounteredAnInconsistentBaselineState:(PFUbiquityBaselineRollOperation *)arg1;
@end
