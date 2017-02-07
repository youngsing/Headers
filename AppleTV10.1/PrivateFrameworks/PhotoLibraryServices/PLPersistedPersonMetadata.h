//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL, PLPerson;

@interface PLPersistedPersonMetadata : NSObject
{
    int _manualOrder;
    int _type;
    NSString *_personUUID;
    NSString *_fullName;
    NSString *_displayName;
    NSString *_personUri;
    NSArray *_detectedFaces;
    NSArray *_rejectedFaces;
    PLPerson *_person;
    NSURL *_metadataURL;
}

+ (id)_persistedFaceMetadataWithFaces:(id)arg1 keyFace:(id)arg2;
+ (id)rejectedFacesToArchiveWithPerson:(id)arg1;
+ (id)detectedFacesToArchiveWithPerson:(id)arg1;
+ (unsigned long long)writeMetadataForVerifiedPeopleOnAssetObjectIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (_Bool)isPersonMetadataPath:(id)arg1;
+ (_Bool)_isFaceMetadataExtension:(id)arg1;
+ (_Bool)isValidPath:(id)arg1;
+ (_Bool)isFacePersistable:(id)arg1;
@property(retain, nonatomic) NSURL *metadataURL; // @synthesize metadataURL=_metadataURL;
@property(retain, nonatomic) PLPerson *person; // @synthesize person=_person;
@property(retain, nonatomic) NSArray *rejectedFaces; // @synthesize rejectedFaces=_rejectedFaces;
@property(retain, nonatomic) NSArray *detectedFaces; // @synthesize detectedFaces=_detectedFaces;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int manualOrder; // @synthesize manualOrder=_manualOrder;
@property(retain, nonatomic) NSString *personUri; // @synthesize personUri=_personUri;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(retain, nonatomic) NSString *personUUID; // @synthesize personUUID=_personUUID;
- (void).cxx_destruct;
- (void)_saveMetadata;
- (id)_metadataData;
- (void)_readMetadata;
- (id)description;
- (_Bool)_insertRejectedFacesOnPerson:(id)arg1 fromDataInManagedObjectContext:(id)arg2 deferUnmatched:(_Bool)arg3;
- (_Bool)_insertDetectedFacesOnPerson:(id)arg1 fromDataInManagedObjectContext:(id)arg2 deferUnmatched:(_Bool)arg3;
- (_Bool)hasAllAssetsAvailableInManagedObjectContext:(id)arg1 includePendingAssetChanges:(_Bool)arg2;
- (void)_addAssetUUIDsFromFaces:(id)arg1 toMutableSet:(id)arg2;
- (_Bool)updateFacesInPerson:(id)arg1 fromDataInManagedObjectContext:(id)arg2 deferUnmatched:(_Bool)arg3;
- (id)insertPersonFromDataInManagedObjectContext:(id)arg1;
- (void)removePersistedData;
- (void)writePersistedData;
- (id)initWithPersistedDataAtURL:(id)arg1;
- (id)initWithPLPerson:(id)arg1 metadataURL:(id)arg2;
- (id)initWithPLPerson:(id)arg1;
- (id)init;

@end
