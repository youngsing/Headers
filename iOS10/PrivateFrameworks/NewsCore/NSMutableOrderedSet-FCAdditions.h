//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableOrderedSet.h>

#import <NewsCore/FCOrderedMutableCollectionAdditions-Protocol.h>

@interface NSMutableOrderedSet (FCAdditions) <FCOrderedMutableCollectionAdditions>
- (void)fc_transformWithBlock:(CDUnknownBlockType)arg1;
- (void)fc_insertObjects:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)fc_removeAndReturnObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)fc_mergeSortedOrderedCollection:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
@end

