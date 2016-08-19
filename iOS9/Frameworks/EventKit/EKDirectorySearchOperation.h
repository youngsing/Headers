//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class EKDirectorySearchQuery, NSError, NSString;

@interface EKDirectorySearchOperation : NSOperation
{
    _Bool _isFinished;
    _Bool _isExecuting;
    NSString *_accountID;
    EKDirectorySearchQuery *_query;
    CDUnknownBlockType _resultsBlock;
    id _searchID;
    _Bool _numberOfMatchesExceededLimit;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool numberOfMatchesExceededLimit; // @synthesize numberOfMatchesExceededLimit=_numberOfMatchesExceededLimit;
- (void)_finishWithError:(id)arg1;
- (id)_processLocationsInResults:(id)arg1;
- (id)_processResourcesInResults:(id)arg1;
- (id)_processGroupsInResults:(id)arg1;
- (id)_processPeopleInResults:(id)arg1;
- (void)_processResults:(id)arg1;
- (id)_recordTypes;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (void)cancel;
- (_Bool)isConcurrent;
- (void)main;
- (void)start;
- (void)dealloc;
- (id)initWithSource:(id)arg1 query:(id)arg2 resultsBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end
