//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKObject.h>

#import <EventKit/EKProtocolMutableAlarm-Protocol.h>
#import <EventKit/NSCopying-Protocol.h>

@class EKStructuredLocation, NSData, NSDate, NSDictionary, NSManagedObjectID, NSString, NSURL;

@interface EKAlarm : EKObject <EKProtocolMutableAlarm, NSCopying>
{
    BOOL isDefault;
    BOOL isSnoozed;
    NSString *sharedUID;
}

+ (BOOL)areLocationsCurrentlyEnabled;
+ (BOOL)areLocationsAllowedWithAuthorizationStatus:(int)arg1;
+ (BOOL)areLocationsAllowed;
+ (int)_currentAuthorizationStatus;
+ (BOOL)areLocationsAvailable;
+ (id)knownSingleValueKeys;
+ (id)noneTriggerDate;
+ (id)knownRelationshipSingleValueKeys;
+ (id)knownImmutableKeys;
+ (id)knownIdentityKeys;
+ (id)uniqueIdentifierForObject:(id)arg1;
+ (Class)frozenClass;
+ (id)procedureAlarmWithBookmark:(id)arg1;
+ (id)alarmWithRelativeOffset:(double)arg1;
+ (id)alarmWithAbsoluteDate:(id)arg1;
+ (id)alarm;
+ (id)alarmWithDefaultAlarm:(id)arg1;
+ (id)alarmWithAlarm:(id)arg1;
@property(readonly, nonatomic) NSString *sharedUID; // @synthesize sharedUID;
@property(readonly, nonatomic) BOOL isSnoozed; // @synthesize isSnoozed;
@property(readonly, nonatomic) BOOL isDefault; // @synthesize isDefault;
- (void).cxx_destruct;
- (BOOL)shouldIncludeInNormalAlarms;
- (BOOL)isDefaultAlarm;
@property(nonatomic) long long proximity;
@property(copy, nonatomic) EKStructuredLocation *structuredLocation;
- (void)setProximityString:(id)arg1;
@property(readonly, copy, nonatomic) NSString *proximityString;
@property(copy, nonatomic) NSData *bookmark;
@property(copy, nonatomic) NSURL *url;
@property(copy, nonatomic) NSString *soundName;
@property(copy, nonatomic) NSString *emailAddress;
- (void)setType:(long long)arg1;
@property(readonly, nonatomic) long long type;
- (void)setActionString:(id)arg1;
@property(readonly, copy, nonatomic) NSString *actionString;
- (void)setAcknowledgedDate:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *acknowledgedDate;
@property(nonatomic) BOOL triggerIsNotRelativeToTravelTime;
- (void)setNotRelativeToTravelTime:(BOOL)arg1;
@property(readonly, nonatomic) BOOL notRelativeToTravelTime;
@property(copy, nonatomic) NSDate *absoluteDate;
@property(nonatomic) double relativeOffset;
- (void)setIsTimeToLeaveAlarm:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isTimeToLeaveAlarm;
- (BOOL)isVehicleAlarm;
- (BOOL)isAbsolute;
- (id)backingAlarm;
- (id)_keysToChangeForDuplicateWithOptions:(long long)arg1;
- (id)initWithObject:(id)arg1 createPartialBackingObject:(BOOL)arg2 keepBackingObject:(BOOL)arg3 preFrozenRelationshipObjects:(id)arg4 additionalFrozenProperties:(id)arg5;

// Remaining properties
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(readonly) Class superclass;

@end

