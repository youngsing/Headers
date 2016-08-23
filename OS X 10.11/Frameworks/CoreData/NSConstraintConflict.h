//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSManagedObject;

@interface NSConstraintConflict : NSObject
{
    NSArray *_constraint;
    NSManagedObject *_databaseObject;
    NSDictionary *_databaseSnapshot;
    NSDictionary *_conflictedValues;
    NSArray *_conflictingObjects;
    NSArray *_conflictingSnapshots;
}

@property(readonly, retain) NSDictionary *databaseSnapshot; // @synthesize databaseSnapshot=_databaseSnapshot;
@property(readonly, retain) NSManagedObject *databaseObject; // @synthesize databaseObject=_databaseObject;
@property(readonly, copy) NSArray *conflictingSnapshots; // @synthesize conflictingSnapshots=_conflictingSnapshots;
@property(readonly, copy) NSDictionary *constraintValues; // @synthesize constraintValues=_conflictedValues;
@property(readonly, copy) NSArray *conflictingObjects; // @synthesize conflictingObjects=_conflictingObjects;
@property(readonly, copy) NSArray *constraint; // @synthesize constraint=_constraint;
- (BOOL)_isDBConflict;
- (id)description;
- (BOOL)supportsSecureCoding;
- (void)dealloc;
- (id)initWithConstraint:(id)arg1 databaseObject:(id)arg2 databaseSnapshot:(id)arg3 conflictingObjects:(id)arg4 conflictingSnapshots:(id)arg5;

@end

