//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Automator/_AMRowTemplateFactory.h>

@interface _AMFinderItemsRowTemplateFactory : _AMRowTemplateFactory
{
}

+ (id)sharedInstance;
- (id)convertToEvaluationPredicateFromComparisonUIPredicate:(id)arg1 withItemType:(id)arg2;
- (id)_convertToEvaluationPredicateFromPathComparisonUIPredicate:(id)arg1;
- (id)finderItemsKindEvaluationPredicateForUIPredicate:(id)arg1;
- (id)commonParentOfPaths:(id)arg1;
- (id)rowTemplatesForItemType:(id)arg1;
- (id)rowTemplatesForFinderItems;
- (id)finderItemsKindRowTemplatesWithName:(id)arg1 andKeyPath:(id)arg2;
- (id)rowTemplatesWithLeftPopupName:(id)arg1 leftKeyPath:(id)arg2 operators:(id)arg3 rightPopupNames:(id)arg4 rightPopupValues:(id)arg5;
- (id)compoundPredicateTypes;

@end

