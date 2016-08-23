//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CKFetchRecordZonesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    BOOL _isFetchAllRecordZonesOperation;
    BOOL _ignorePCSFailures;
    NSArray *_recordZoneIDs;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL ignorePCSFailures; // @synthesize ignorePCSFailures=_ignorePCSFailures;
@property(nonatomic) BOOL isFetchAllRecordZonesOperation; // @synthesize isFetchAllRecordZonesOperation=_isFetchAllRecordZonesOperation;
@property(retain, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

