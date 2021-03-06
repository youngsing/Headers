//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString;

@interface SASRecordingInfo : AceObject <SAAceSerializable>
{
}

+ (id)recordingInfoWithDictionary:(id)arg1 context:(id)arg2;
+ (id)recordingInfo;
@property(nonatomic) _Bool zeroLatencyLaunch;
@property(nonatomic) _Bool ringerSwitchOff;
@property(copy, nonatomic) NSNumber *buttonUpTime;
@property(copy, nonatomic) NSNumber *buttonDowntime;
@property(copy, nonatomic) NSNumber *beamFormingStartTime;
@property(copy, nonatomic) NSString *alertType;
@property(copy, nonatomic) NSNumber *activationTime;
@property(copy, nonatomic) NSNumber *activationHapticAlertStartTime;
@property(copy, nonatomic) NSNumber *activationHapticAlertDuration;
@property(copy, nonatomic) NSNumber *activationAudioAlertStartTime;
@property(copy, nonatomic) NSNumber *activationAudioAlertDuration;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

