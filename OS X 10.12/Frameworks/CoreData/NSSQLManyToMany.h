//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSSQLRelationship.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSQLManyToMany : NSSQLRelationship
{
    NSString *_correlationTableName;
    NSString *_columnName;
    NSString *_orderColumnName;
}

- (BOOL)isTableSchemaEqual:(id)arg1;
- (id)inverseOrderColumnName;
- (id)inverseColumnName;
- (id)inverseManyToMany;
- (void)_setCorrelationTableName:(id)arg1;
- (void)_setOrderColumnName:(id)arg1;
- (void)_setColumnName:(id)arg1;
- (unsigned char)orderColumnSQLType;
- (unsigned char)columnSQLType;
- (id)orderColumnName;
- (id)columnName;
- (BOOL)isReflexive;
- (void)_setInverseManyToMany:(id)arg1;
- (BOOL)isMaster;
- (id)correlationTableName;
- (void)dealloc;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;

@end

