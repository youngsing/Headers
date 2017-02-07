//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface NSProcessInfo : NSObject
{
    NSDictionary *environment;
    NSArray *arguments;
    NSString *hostName;
    NSString *name;
    long long automaticTerminationOptOutCounter;
}

+ (id)processInfo;
- (void)_reactivateActivity:(id)arg1;
- (BOOL)_supportsAutomaticTermination;
- (void)_setShouldRelaunchDueToAutomaticTerminationStateChangedHandler:(CDUnknownBlockType)arg1;
- (void)_enableAutomaticTerminationSupport;
@property BOOL automaticTerminationSupportEnabled;
- (BOOL)_isAutoQuittable;
- (BOOL)_shouldDisableRelaunchOnLoginDueToAutomaticTermination;
- (void)enableAutomaticTermination;
- (void)disableAutomaticTermination;
- (void)_enableAutomaticTerminationOnly:(id)arg1;
- (void)_disableAutomaticTerminationOnly:(id)arg1;
- (void)enableAutomaticTermination:(id)arg1;
- (void)disableAutomaticTermination:(id)arg1;
- (void)_enableAutomaticTerminationAlreadyLocked:(id)arg1;
- (void)_disableAutomaticTerminationAlreadyLocked:(id)arg1;
- (long long)_suddenTerminationDisablingCount;
- (void)_exitWhenSuddenTerminationEnabledWithStatus:(int)arg1;
- (void)_exitIfSuddenTerminationEnabledWithStatus:(int)arg1;
- (void)enableSuddenTermination;
- (void)disableSuddenTermination;
@property(readonly) double systemUptime;
- (BOOL)isTranslated;
@property(readonly) unsigned long long physicalMemory;
@property(readonly) unsigned long long activeProcessorCount;
@property(readonly) unsigned long long processorCount;
- (BOOL)isOperatingSystemAtLeastVersion:(CDStruct_2ec95fd7)arg1;
@property(readonly) CDStruct_2ec95fd7 operatingSystemVersion;
@property(readonly, copy) NSString *operatingSystemVersionString;
- (id)operatingSystemName;
- (unsigned long long)operatingSystem;
- (id)userHomeDirectory;
- (id)userFullName;
@property(readonly, copy) NSString *userName;
@property(readonly, copy) NSString *globallyUniqueString;
@property(readonly) int processIdentifier;
@property(copy) NSString *processName;
@property(readonly, copy) NSString *hostName;
- (void)setArguments:(id)arg1;
@property(readonly, copy) NSArray *arguments;
- (void)_registerForHardwareStateNotifications;
@property(readonly, copy) NSDictionary *environment;
- (void)dealloc;
- (void)performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)endActivity:(id)arg1;
- (id)beginActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2;
- (void)endSystemBehaviorSuspension:(id)arg1;
- (id)beginSuspensionOfSystemBehaviors:(unsigned long long)arg1 reason:(id)arg2;
@property(readonly, copy) NSString *fullUserName;
- (long long)thermalState;

@end
