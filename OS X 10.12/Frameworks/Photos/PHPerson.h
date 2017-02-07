//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHObject.h>

@class NSString;

@interface PHPerson : PHObject
{
}

+ (id)fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg1 options:(id)arg2 fetchPersonCount:(BOOL)arg3;
+ (id)fetchPersonCountGroupedByAssetLocalIdentifierForAssets:(id)arg1 options:(id)arg2;
+ (id)fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg1 options:(id)arg2;
+ (id)fetchPersonsForAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchPersonAssociatedWithFaceGroup:(id)arg1 options:(id)arg2;
+ (id)fetchPersonWithFace:(id)arg1 options:(id)arg2;
+ (id)fetchPersonsFromAsset:(id)arg1 options:(id)arg2;
+ (id)fetchPersonsInAsset:(id)arg1 options:(id)arg2;
+ (id)fetchPersonsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchPersonsWithOptions:(id)arg1;
+ (id)propertiesToLoadFromPhotoLibrary:(id)arg1;
+ (id)identifierCode;
@property(readonly, nonatomic) long long faceCount;
@property(readonly, nonatomic, getter=isVerified) BOOL verified;
@property(readonly, nonatomic, getter=isInPersonNamingModel) BOOL inPersonNamingModel;
@property(readonly, nonatomic) long long personType;
@property(readonly, nonatomic) long long manualOrder;
@property(readonly, nonatomic) long long modelId;
@property(readonly, nonatomic) long long representativeFaceId;
@property(readonly, nonatomic) NSString *personUri;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSString *name;
- (id)person;
- (id)initWithModel:(id)arg1 photoLibrary:(id)arg2;

@end
