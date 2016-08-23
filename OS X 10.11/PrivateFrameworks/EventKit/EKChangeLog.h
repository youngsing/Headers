//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKit/NSCopying-Protocol.h>

@class NSMutableDictionary;

@interface EKChangeLog : NSObject <NSCopying>
{
    NSMutableDictionary *_seriesOffsets;
    NSMutableDictionary *_changeHistory;
    NSMutableDictionary *_relationChangeHistory;
}

@property(retain) NSMutableDictionary *relationChangeHistory; // @synthesize relationChangeHistory=_relationChangeHistory;
@property(retain) NSMutableDictionary *changeHistory; // @synthesize changeHistory=_changeHistory;
@property(retain) NSMutableDictionary *seriesOffsets; // @synthesize seriesOffsets=_seriesOffsets;
- (void).cxx_destruct;
- (id)summary;
- (void)resetIdentifiers:(id)arg1;
- (void)reset;
- (void)_applyOffsetsToEvent:(id)arg1 withIdentifier:(id)arg2;
- (void)_applyChangeSet:(id)arg1 toObject:(id)arg2 byAdding:(BOOL)arg3;
- (void)_applyRelationshipChangesForMultiValueRelationKey:(id)arg1 toObject:(id)arg2 withIdentifier:(id)arg3 addNotApply:(BOOL)arg4;
- (void)_applyRelationshipChangesForSingleValueRelationKey:(id)arg1 toObject:(id)arg2 withIdentifier:(id)arg3 addNotApply:(BOOL)arg4;
- (void)_applyRelationshipChangesToObject:(id)arg1 withIdentifier:(id)arg2 addNotApply:(BOOL)arg3;
- (id)_nonRecurringChangesToApplyToObject:(id)arg1 withIdentifier:(id)arg2 changeHistory:(id)arg3;
- (void)_applyChangesToObjectHelper:(id)arg1 withIdentifier:(id)arg2 addNotApply:(BOOL)arg3 nonRecurringOnly:(BOOL)arg4 applyOffsets:(BOOL)arg5;
- (void)addChangesToObject:(id)arg1 withIdentifier:(id)arg2;
- (void)intelligentlyApplyRecurrenceChangesToObject:(id)arg1 withIdentifier:(id)arg2;
- (void)applyNonRecurrenceChangesToObject:(id)arg1 withIdentifier:(id)arg2;
- (void)applyChangesToObject:(id)arg1 withIdentifier:(id)arg2;
- (id)offsetForEvent:(id)arg1;
- (void)_logSeriesOffsetsForSeries:(id)arg1 withIdentifier:(id)arg2;
- (void)_logChangesForMultiValueRelationKey:(id)arg1 parentObject:(id)arg2 parentObjectIdentifier:(id)arg3;
- (void)_logChangesForSingleValueRelationKey:(id)arg1 parentObject:(id)arg2 parentObjectIdentifier:(id)arg3;
- (void)_logRelationshipChangesForObject:(id)arg1 withIdentifier:(id)arg2;
- (void)logChangesForObject:(id)arg1 withIdentifier:(id)arg2 appliesToSeries:(BOOL)arg3;
- (BOOL)changesExistForObjectWithIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

