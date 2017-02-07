//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol CNiOSContactPredicate;

__attribute__((visibility("hidden")))
@interface CNiOSPersonFetchRequest : NSObject
{
    id <CNiOSContactPredicate> _predicate;
    _Bool _shouldSort;
    unsigned int _sortOrder;
    unsigned long long _options;
}

+ (id)effectivePredicate:(id)arg1;
+ (id)validatePredicate:(id)arg1 error:(id *)arg2;
+ (id)fetchRequestFromCNFetchRequest:(id)arg1 error:(id *)arg2;
+ (long long)resolvedSortOrderFromContactSortOrder:(long long)arg1;
@property(readonly) unsigned long long options; // @synthesize options=_options;
@property(readonly) unsigned int sortOrder; // @synthesize sortOrder=_sortOrder;
@property(readonly) _Bool shouldSort; // @synthesize shouldSort=_shouldSort;
@property(readonly) id <CNiOSContactPredicate> predicate; // @synthesize predicate=_predicate;
- (void)dealloc;
- (id)initWithPredicate:(id)arg1 shouldSort:(_Bool)arg2 sortOrder:(unsigned int)arg3 options:(unsigned long long)arg4;

@end
