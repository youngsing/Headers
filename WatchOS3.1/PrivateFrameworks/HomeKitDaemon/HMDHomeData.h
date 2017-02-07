//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDAccount, HMDApplicationData, NSArray, NSString, NSUUID;

@interface HMDHomeData : NSObject
{
    _Bool _accessAllowedWhenLocked;
    NSArray *_homes;
    NSArray *_accessories;
    NSUUID *_primaryHomeUUID;
    NSUUID *_lastCurrentHomeUUID;
    long long _dataVersion;
    NSUUID *_dataTag;
    NSArray *_uuidsOfRemovedHomes;
    NSArray *_incomingInvitations;
    unsigned long long _assistantGenerationCounter;
    NSString *_currentDevice;
    NSArray *_pendingReasonSaved;
    NSArray *_pendingUserManagementOperations;
    HMDApplicationData *_applicationData;
    long long _residentEnabledState;
    HMDAccount *_account;
}

@property(readonly, nonatomic) _Bool accessAllowedWhenLocked; // @synthesize accessAllowedWhenLocked=_accessAllowedWhenLocked;
@property(readonly, nonatomic) HMDAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) long long residentEnabledState; // @synthesize residentEnabledState=_residentEnabledState;
@property(readonly, copy, nonatomic) HMDApplicationData *applicationData; // @synthesize applicationData=_applicationData;
@property(readonly, copy, nonatomic) NSArray *pendingUserManagementOperations; // @synthesize pendingUserManagementOperations=_pendingUserManagementOperations;
@property(readonly, copy, nonatomic) NSArray *pendingReasonSaved; // @synthesize pendingReasonSaved=_pendingReasonSaved;
@property(readonly, copy, nonatomic) NSString *currentDevice; // @synthesize currentDevice=_currentDevice;
@property(readonly, nonatomic) unsigned long long assistantGenerationCounter; // @synthesize assistantGenerationCounter=_assistantGenerationCounter;
@property(readonly, copy, nonatomic) NSArray *incomingInvitations; // @synthesize incomingInvitations=_incomingInvitations;
@property(readonly, copy, nonatomic) NSArray *uuidsOfRemovedHomes; // @synthesize uuidsOfRemovedHomes=_uuidsOfRemovedHomes;
@property(readonly, copy, nonatomic) NSUUID *dataTag; // @synthesize dataTag=_dataTag;
@property(readonly, nonatomic) long long dataVersion; // @synthesize dataVersion=_dataVersion;
@property(readonly, copy, nonatomic) NSUUID *lastCurrentHomeUUID; // @synthesize lastCurrentHomeUUID=_lastCurrentHomeUUID;
@property(readonly, copy, nonatomic) NSUUID *primaryHomeUUID; // @synthesize primaryHomeUUID=_primaryHomeUUID;
@property(readonly, copy, nonatomic) NSArray *accessories; // @synthesize accessories=_accessories;
@property(readonly, copy, nonatomic) NSArray *homes; // @synthesize homes=_homes;
- (void).cxx_destruct;
- (id)initWithHomes:(id)arg1 accessories:(id)arg2 primaryHomeUUID:(id)arg3 lastCurrentHomeUUID:(id)arg4 dataVersion:(long long)arg5 dataTag:(id)arg6 uuidsOfRemovedHomes:(id)arg7 incomingInvitations:(id)arg8 assistantGenerationCounter:(unsigned long long)arg9 currentDevice:(id)arg10 pendingReasonSaved:(id)arg11 pendingUserManagementOperations:(id)arg12 applicationData:(id)arg13 residentEnabledState:(long long)arg14 account:(id)arg15 accessAllowedWhenLocked:(_Bool)arg16;

@end
