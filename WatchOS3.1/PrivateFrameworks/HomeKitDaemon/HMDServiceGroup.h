//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDApplicationData, HMDHome, HMFMessageDispatcher, NSMutableArray, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDServiceGroup : NSObject <HMFMessageReceiver, HMFDumpState, NSSecureCoding>
{
    NSString *_name;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_services;
    HMDHome *_home;
    HMFMessageDispatcher *_msgDispatcher;
    HMDApplicationData *_appData;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) HMDApplicationData *appData; // @synthesize appData=_appData;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSMutableArray *services; // @synthesize services=_services;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_handleRemoveServiceRequest:(id)arg1;
- (void)_handleAddServiceRequest:(id)arg1;
- (void)_registerForMessages;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeService:(id)arg1;
- (void)removeServicesForAccessory:(id)arg1;
- (void)fixupServicesForReplacementAccessory:(id)arg1;
- (void)_handleRenameRequest:(id)arg1;
- (id)dumpState;
- (void)configure:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)initWithName:(id)arg1 uuid:(id)arg2 home:(id)arg3 queue:(id)arg4;
- (id)assistantObject;
- (id)url;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

