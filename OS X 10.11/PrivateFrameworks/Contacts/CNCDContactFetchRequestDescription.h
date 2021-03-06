//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError;
@protocol CNCDContactPredicate;

__attribute__((visibility("hidden")))
@interface CNCDContactFetchRequestDescription : NSObject
{
    id <CNCDContactPredicate> _predicate;
    NSError *_predicateError;
    NSArray *_relationshipKeyPaths;
    NSArray *_sortDescriptors;
    NSArray *_effectiveKeysToFetch;
    CDUnknownBlockType _contactsByNameComparator;
    BOOL _unifyResults;
}

+ (id)descriptionWithFetchRequest:(id)arg1;
@property(readonly) BOOL unifyResults; // @synthesize unifyResults=_unifyResults;
@property(readonly, copy) CDUnknownBlockType contactsByNameComparator; // @synthesize contactsByNameComparator=_contactsByNameComparator;
@property(readonly, copy) NSArray *effectiveKeysToFetch; // @synthesize effectiveKeysToFetch=_effectiveKeysToFetch;
@property(readonly, copy) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(readonly, copy) NSArray *relationshipKeyPaths; // @synthesize relationshipKeyPaths=_relationshipKeyPaths;
- (id)validatedPredicateWithError:(id *)arg1;
- (void)dealloc;
- (id)initWithBuilder:(id)arg1;

@end

