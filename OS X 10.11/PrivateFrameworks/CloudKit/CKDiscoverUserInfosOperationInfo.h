//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKOperationInfo.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CKDiscoverUserInfosOperationInfo : CKOperationInfo <NSSecureCoding>
{
    BOOL _shouldDiscoverAllContacts;
    NSArray *_emails;
    NSArray *_userRecordIDs;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL shouldDiscoverAllContacts; // @synthesize shouldDiscoverAllContacts=_shouldDiscoverAllContacts;
@property(retain, nonatomic) NSArray *userRecordIDs; // @synthesize userRecordIDs=_userRecordIDs;
@property(retain, nonatomic) NSArray *emails; // @synthesize emails=_emails;
- (void).cxx_destruct;
- (unsigned long long)activityStart;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

