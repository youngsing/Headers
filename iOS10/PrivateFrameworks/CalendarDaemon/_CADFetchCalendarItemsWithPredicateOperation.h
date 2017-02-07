//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSPredicate;

__attribute__((visibility("hidden")))
@interface _CADFetchCalendarItemsWithPredicateOperation : NSOperation
{
    NSPredicate *_predicate;
    int _entityType;
    struct CalDatabase *_database;
    int _fetchIdentifier;
    CDUnknownBlockType _completion;
}

@property(readonly, nonatomic) int fetchIdentifier; // @synthesize fetchIdentifier=_fetchIdentifier;
- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (void)dealloc;
- (id)initWithPredicate:(id)arg1 entityType:(int)arg2 database:(struct CalDatabase *)arg3 fetchIdentifier:(int)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
