//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecordZoneID, CKServerChangeToken, NSArray;

@interface CKFetchRecordChangesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    BOOL _shouldFetchAssetContents;
    BOOL _fetchAllChanges;
    CKRecordZoneID *_recordZoneID;
    CKServerChangeToken *_previousServerChangeToken;
    NSArray *_desiredKeys;
    unsigned long long _resultsLimit;
    long long _changeTypes;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL fetchAllChanges; // @synthesize fetchAllChanges=_fetchAllChanges;
@property(nonatomic) long long changeTypes; // @synthesize changeTypes=_changeTypes;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(nonatomic) BOOL shouldFetchAssetContents; // @synthesize shouldFetchAssetContents=_shouldFetchAssetContents;
@property(retain, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(retain, nonatomic) CKServerChangeToken *previousServerChangeToken; // @synthesize previousServerChangeToken=_previousServerChangeToken;
@property(retain, nonatomic) CKRecordZoneID *recordZoneID; // @synthesize recordZoneID=_recordZoneID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

