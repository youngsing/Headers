//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet;

@interface PLCloudUploadChanges : NSObject
{
    NSMutableArray *_insertedAssets;
    NSMutableArray *_updatedAssets;
    NSMutableSet *_adjustedAssets;
    NSMutableArray *_deletedAssets;
    NSMutableArray *_albumInserts;
    NSMutableArray *_albumChanges;
    NSMutableArray *_albumsToDelete;
    NSMutableArray *_memoryChanges;
    NSMutableArray *_memoriesToDelete;
    NSMutableArray *_personChanges;
    NSMutableArray *_personsToDelete;
    NSMutableArray *_updatedRelationship;
}

@property(retain, nonatomic) NSMutableArray *updatedRelationship; // @synthesize updatedRelationship=_updatedRelationship;
@property(retain, nonatomic) NSMutableArray *personsToDelete; // @synthesize personsToDelete=_personsToDelete;
@property(retain, nonatomic) NSMutableArray *personChanges; // @synthesize personChanges=_personChanges;
@property(retain, nonatomic) NSMutableArray *memoriesToDelete; // @synthesize memoriesToDelete=_memoriesToDelete;
@property(retain, nonatomic) NSMutableArray *memoryChanges; // @synthesize memoryChanges=_memoryChanges;
@property(retain, nonatomic) NSMutableArray *albumsToDelete; // @synthesize albumsToDelete=_albumsToDelete;
@property(retain, nonatomic) NSMutableArray *albumChanges; // @synthesize albumChanges=_albumChanges;
@property(retain, nonatomic) NSMutableArray *albumInserts; // @synthesize albumInserts=_albumInserts;
@property(retain, nonatomic) NSMutableArray *deletedAssets; // @synthesize deletedAssets=_deletedAssets;
@property(retain, nonatomic) NSMutableSet *adjustedAssets; // @synthesize adjustedAssets=_adjustedAssets;
@property(retain, nonatomic) NSMutableArray *updatedAssets; // @synthesize updatedAssets=_updatedAssets;
@property(retain, nonatomic) NSMutableArray *insertedAssets; // @synthesize insertedAssets=_insertedAssets;
- (id)summaryDescription;
- (id)dictionaryRepresentation;
- (_Bool)isEmpty;
- (void)dealloc;
- (id)init;

@end
