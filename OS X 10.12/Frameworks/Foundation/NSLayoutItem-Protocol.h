//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject-Protocol.h>

@class NSArray, NSISEngine, NSISLinearExpression, NSISVariable, NSLayoutAnchor, NSLayoutConstraint, NSString;
@protocol NSLayoutItem;

@protocol NSLayoutItem <NSObject>
- (BOOL)nsli_isFlipped;
- (unsigned long long)nsli_autoresizingMask;
- (BOOL)nsli_descriptionIncludesPointer;
- (NSString *)nsli_description;
- (BOOL)nsli_resolvedValue:(double *)arg1 forSymbolicConstant:(NSString *)arg2 inConstraint:(NSLayoutConstraint *)arg3 error:(id *)arg4;
- (BOOL)nsli_lowerAttribute:(int)arg1 intoExpression:(NSISLinearExpression *)arg2 withCoefficient:(double)arg3 container:(id <NSLayoutItem>)arg4;
- (BOOL)nsli_lowerAttribute:(int)arg1 intoExpression:(NSISLinearExpression *)arg2 withCoefficient:(double)arg3 forConstraint:(NSLayoutConstraint *)arg4;
- (id <NSLayoutItem>)nsli_superitem;
- (struct CGSize)nsli_convertSizeFromEngineSpace:(struct CGSize)arg1;
- (struct CGSize)nsli_convertSizeToEngineSpace:(struct CGSize)arg1;
- (NSISEngine *)nsli_layoutEngine;

@optional
- (NSISVariable *)nsli_boundsHeightVariable;
- (NSISVariable *)nsli_boundsWidthVariable;
- (NSISVariable *)nsli_heightVariable;
- (NSISVariable *)nsli_widthVariable;
- (NSISVariable *)nsli_minYVariable;
- (NSISVariable *)nsli_minXVariable;
- (double)nsli_marginOffsetForAttribute:(long long)arg1;
- (NSArray *)nsli_installedConstraints;
- (BOOL)nsli_removeConstraint:(NSLayoutConstraint *)arg1;
- (void)nsli_addConstraint:(NSLayoutConstraint *)arg1 mutuallyExclusiveConstraints:(id *)arg2;
- (void)nsli_addConstraint:(NSLayoutConstraint *)arg1;
- (struct CGSize)nsli_engineToUserScalingCoefficients;
- (NSLayoutAnchor *)nsli_layoutAnchorForAttribute:(long long)arg1;
- (id <NSLayoutItem>)nsli_ancestorSharedWithItem:(id <NSLayoutItem>)arg1;
- (id <NSLayoutItem>)nsli_itemDescribingLayoutDirectionForConstraint:(NSLayoutConstraint *)arg1 toItem:(id <NSLayoutItem>)arg2;
- (BOOL)nsli_isRTL;
- (BOOL)nsli_lowersExpressionRelativeToConstraintContainer;
- (BOOL)nsli_isLegalConstraintItem;
- (BOOL)nsli_canHostIndependentVariableAnchor;
@end
