//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSExternalRefCountedData.h>

@class _CDSnapshot;

__attribute__((visibility("hidden")))
@interface NSSQLRow : NSExternalRefCountedData
{
    _CDSnapshot *_snapshot;
}

+ (unsigned int)newBatchRowAllocation:(id *)arg1 count:(unsigned int)arg2 forSQLEntity:(id)arg3 withOwnedObjectIDs:(struct _NSScalarObjectID **)arg4 andTimestamp:(double)arg5;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)allocForSQLEntity:(id)arg1;
+ (void)initialize;
- (id)_snapshot_;
- (const id *)knownKeyValuesPointer;
- (struct __CFBitVector *)newUpdateMaskForConstrainedValues;
- (struct __CFBitVector *)newUpdateMaskFrom:(id)arg1;
- (struct __CFBitVector *)newColumnMaskFrom:(id)arg1 columnInclusionOptions:(unsigned long long)arg2;
- (unsigned int)_versionNumber;
- (void)setOptLock:(long long)arg1;
- (long long)version;
- (long long)optLock;
- (id)attributeValueForSlot:(unsigned int)arg1;
- (id)valueForKey:(id)arg1;
- (void)_validateToOnes;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)foreignOrderKeyForSlot:(unsigned int)arg1;
- (unsigned int)foreignEntityKeyForSlot:(unsigned int)arg1;
- (long long)foreignKeyForSlot:(unsigned int)arg1;
- (void)setForeignOrderKeySlot:(unsigned int)arg1 orderKey:(unsigned int)arg2;
- (void)setForeignEntityKeySlot:(unsigned int)arg1 entityKey:(unsigned int)arg2;
- (void)setForeignKeySlot:(unsigned int)arg1 int64:(long long)arg2;
- (void)setObjectID:(struct _NSScalarObjectID *)arg1;
- (unsigned int)sqlEntityID;
- (long long)pk64;
- (struct _NSScalarObjectID *)objectID;
- (id)description;
- (id)copy;
- (id)sqlEntity;
- (struct _NSScalarObjectID *)newObjectIDForToOne:(id)arg1;
- (void)dealloc;
- (id)initWithSQLEntity:(id)arg1 ownedObjectID:(struct _NSScalarObjectID *)arg2 andTimestamp:(double)arg3;
- (id)initWithSQLEntity:(id)arg1 objectID:(struct _NSScalarObjectID *)arg2;

@end

