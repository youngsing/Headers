//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNLDAPFetchRequest : NSObject
{
    unsigned int _fetchLimit;
    NSString *_filter;
    NSArray *_searchBases;
    NSArray *_attributesToFetch;
    unsigned long long _resultType;
}

+ (id)defaultAttributesToFetch;
+ (id)filterWithPredicate:(id)arg1 error:(id *)arg2;
+ (id)filterWithUserInput:(id)arg1;
@property unsigned long long resultType; // @synthesize resultType=_resultType;
@property(copy) NSArray *attributesToFetch; // @synthesize attributesToFetch=_attributesToFetch;
@property unsigned int fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(copy) NSArray *searchBases; // @synthesize searchBases=_searchBases;
@property(copy) NSString *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (id)copy;
- (id)init;

@end

