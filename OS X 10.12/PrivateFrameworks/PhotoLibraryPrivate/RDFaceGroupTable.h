//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDTable.h>

@class LiKeyPath;

@interface RDFaceGroupTable : RDTable
{
    LiKeyPath *_personIdKeyPath;
    LiKeyPath *_faceGroupTypeKeyPath;
    LiKeyPath *_representativeFaceIdKeyPath;
}

+ (SEL)deletedModelIdsMulticasterSelector;
+ (id)tableClassName;
+ (id)tableName;
+ (id)modelName;
+ (Class)modelClass;
@property(readonly, nonatomic) LiKeyPath *representativeFaceIdKeyPath; // @synthesize representativeFaceIdKeyPath=_representativeFaceIdKeyPath;
@property(readonly, nonatomic) LiKeyPath *faceGroupTypeKeyPath; // @synthesize faceGroupTypeKeyPath=_faceGroupTypeKeyPath;
@property(readonly, nonatomic) LiKeyPath *personIdKeyPath; // @synthesize personIdKeyPath=_personIdKeyPath;
- (void).cxx_destruct;
- (void)declareProperties;
- (id)initWithTableId:(unsigned long long)arg1 tableType:(unsigned char)arg2 withLibrary:(id)arg3;
- (unsigned long long)saveOrder;
- (id)notifyUpdateKeyPathAtoms;
- (unsigned long long *)faultedKeyPath;

@end
