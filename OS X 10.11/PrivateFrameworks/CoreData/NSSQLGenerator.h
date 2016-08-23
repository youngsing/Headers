//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSSQLCore;

__attribute__((visibility("hidden")))
@interface NSSQLGenerator : NSObject
{
    NSSQLCore *_persistentStore;
}

+ (void)initialize;
- (id)newSQLStatementForUpdateRequest:(id)arg1;
- (id)newSQLStatementForFetchRequest:(id)arg1 ignoreInheritance:(BOOL)arg2 countOnly:(BOOL)arg3 nestingLevel:(unsigned int)arg4 nestIsWhereScoped:(BOOL)arg5;
- (id)newSQLStatementForRequest:(id)arg1 ignoreInheritance:(BOOL)arg2 countOnly:(BOOL)arg3 nestingLevel:(unsigned int)arg4 nestIsWhereScoped:(BOOL)arg5;
- (id)initializeContextForUpdateRequest:(id)arg1;
- (id)initializeContextForFetchRequest:(id)arg1 ignoreInheritance:(BOOL)arg2 nestingLevel:(unsigned int)arg3 nestIsWhereScoped:(BOOL)arg4;
- (id)initializeContextForRequest:(id)arg1 ignoreInheritance:(BOOL)arg2 nestingLevel:(unsigned int)arg3;
- (id)generateIntermediatesForUpdateInContext:(id)arg1;
- (id)generateUpdateColumnsIntermediateInContext:(id)arg1;
- (id)generateIntermediatesForFetchInContext:(id)arg1 countOnly:(BOOL)arg2;
- (void)generateHavingIntermediateForPredicate:(id)arg1 inContext:(id)arg2;
- (void)generateGroupByIntermediatesForProperties:(id)arg1 inContext:(id)arg2;
- (void)generateIntermediateForOffset:(unsigned long long)arg1 inContext:(id)arg2;
- (void)generateIntermediateForLimit:(unsigned long long)arg1 inContext:(id)arg2;
- (void)generateOrderIntermediateInContext:(id)arg1;
- (void)generateWhereIntermediatesInContext:(id)arg1;
- (void)generateSelectIntermediateInContext:(id)arg1;
- (id)predicateForRequestInContext:(id)arg1;
- (id)_predicateForSpecificEntity:(id)arg1;
- (id)_predicateRestrictingToSubentitiesForEntity:(id)arg1;
- (id)_predicateRestrictingSuperentitiesForEntity:(id)arg1;
- (id)initWithPersistentStore:(id)arg1;

@end

