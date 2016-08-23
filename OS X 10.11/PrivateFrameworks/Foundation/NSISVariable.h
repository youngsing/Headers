//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSISVariableDelegate;

@interface NSISVariable : NSObject
{
    id <NSISVariableDelegate> _delegate;
    int _refCount;
    unsigned int _ident;
}

+ (id)variableWithName:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(BOOL)arg3;
+ (id)variableMarkingConstraint:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(BOOL)arg3;
+ (id)variableWithDelegate:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(BOOL)arg3;
@property id <NSISVariableDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)markedConstraint;
@property(readonly) BOOL shouldBeMinimized;
@property(readonly) int valueRestriction;
- (BOOL)valueIsUserVisible;
- (BOOL)markedConstraintIsEligibleForIntegralizationAdjustment;
- (double)allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint;
- (BOOL)shouldBeIntegral;
- (id)description;
- (unsigned long long)hash;
- (id)init;

@end

