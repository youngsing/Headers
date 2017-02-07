//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSDictionary, NSSQLModel;

__attribute__((visibility("hidden")))
@interface NSSQLObjectIDRequestContext : NSSQLStoreRequestContext
{
    NSDictionary *_entitiesAndCounts;
    NSSQLModel *_model;
}

@property(readonly, nonatomic) NSSQLModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) NSDictionary *entitiesAndCounts; // @synthesize entitiesAndCounts=_entitiesAndCounts;
- (void)executeRequestUsingConnection:(id)arg1;
- (BOOL)isWritingRequest;
- (void)dealloc;
- (id)initForEntitiesAndCounts:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;

@end
