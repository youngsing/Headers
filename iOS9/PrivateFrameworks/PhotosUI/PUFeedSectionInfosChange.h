//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet, NSSet;

__attribute__((visibility("hidden")))
@interface PUFeedSectionInfosChange : NSObject
{
    _Bool _shouldReload;
    NSIndexSet *_deletedIndexes;
    NSIndexSet *_insertedIndexes;
    NSIndexSet *_updatedIndexes;
    NSSet *_sectionInfosWithCommentChanges;
    NSSet *_updatedAssets;
}

@property(retain, nonatomic) NSSet *updatedAssets; // @synthesize updatedAssets=_updatedAssets;
@property(retain, nonatomic) NSSet *sectionInfosWithCommentChanges; // @synthesize sectionInfosWithCommentChanges=_sectionInfosWithCommentChanges;
@property(retain, nonatomic) NSIndexSet *updatedIndexes; // @synthesize updatedIndexes=_updatedIndexes;
@property(retain, nonatomic) NSIndexSet *insertedIndexes; // @synthesize insertedIndexes=_insertedIndexes;
@property(retain, nonatomic) NSIndexSet *deletedIndexes; // @synthesize deletedIndexes=_deletedIndexes;
@property(nonatomic) _Bool shouldReload; // @synthesize shouldReload=_shouldReload;
- (void).cxx_destruct;

@end
