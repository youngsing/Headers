//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSSQLColumn.h>

@class NSSQLForeignKey;

__attribute__((visibility("hidden")))
@interface NSSQLForeignEntityKey : NSSQLColumn
{
    NSSQLForeignKey *_foreignKey;
}

- (void)setFKForReadOnlyFetch:(id)arg1;
- (void)dealloc;
- (id)foreignKey;
- (id)toOneRelationship;
- (id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)initWithEntity:(id)arg1 foreignKey:(id)arg2;

@end

