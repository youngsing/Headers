//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSSQLIntermediate.h>

@class NSPredicate;

__attribute__((visibility("hidden")))
@interface NSSQLWhereIntermediate : NSSQLIntermediate
{
    NSPredicate *_predicate;
}

- (id)predicate;
- (id)initWithPredicate:(id)arg1 inScope:(id)arg2;

@end

