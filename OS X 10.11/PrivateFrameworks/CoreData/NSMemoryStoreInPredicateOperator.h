//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSInPredicateOperator.h>

@class NSManagedObjectContext;

__attribute__((visibility("hidden")))
@interface NSMemoryStoreInPredicateOperator : NSInPredicateOperator
{
    NSManagedObjectContext *_context;
}

- (BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (void)dealloc;
- (void)setContext:(id)arg1;

@end

