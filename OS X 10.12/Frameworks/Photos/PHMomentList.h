//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHCollectionList.h>

@interface PHMomentList : PHCollectionList
{
    long long _collectionListType;
    long long _collectionListSubtype;
}

+ (id)identifierCode;
- (long long)collectionListSubtype;
- (long long)collectionListType;
- (id)endDate;
- (id)startDate;
- (id)initWithModel:(id)arg1 photoLibrary:(id)arg2;

@end

