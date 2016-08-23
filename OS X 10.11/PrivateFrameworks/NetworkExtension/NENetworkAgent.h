//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NWNetworkAgent-Protocol.h>

@class NSString, NSUUID;

@interface NENetworkAgent : NSObject <NWNetworkAgent>
{
    BOOL active;
    BOOL kernelActivated;
    BOOL userActivated;
    BOOL voluntary;
    int _internalSessionType;
    NSUUID *agentUUID;
    NSString *agentDescription;
    NSString *_configurationName;
    NSUUID *_internalUUID;
    CDUnknownBlockType _internalStartHandler;
}

+ (id)agentFromData:(id)arg1;
+ (id)agentType;
+ (id)agentDomain;
@property(copy) CDUnknownBlockType internalStartHandler; // @synthesize internalStartHandler=_internalStartHandler;
@property int internalSessionType; // @synthesize internalSessionType=_internalSessionType;
@property(copy) NSUUID *internalUUID; // @synthesize internalUUID=_internalUUID;
@property(copy) NSString *configurationName; // @synthesize configurationName=_configurationName;
@property(getter=isVoluntary) BOOL voluntary; // @synthesize voluntary;
@property(getter=isUserActivated) BOOL userActivated; // @synthesize userActivated;
@property(getter=isKernelActivated) BOOL kernelActivated; // @synthesize kernelActivated;
@property(getter=isActive) BOOL active; // @synthesize active;
@property(copy) NSString *agentDescription; // @synthesize agentDescription;
@property(copy) NSUUID *agentUUID; // @synthesize agentUUID;
- (void).cxx_destruct;
- (BOOL)startAgentWithOptions:(id)arg1;
- (void)setStartHandler:(CDUnknownBlockType)arg1;
@property(readonly) int sessionType;
@property(readonly, copy) NSUUID *configurationUUID;
- (id)copyAgentData;
- (id)initWithConfigUUID:(id)arg1 sessionType:(int)arg2;

// Remaining properties
@property(getter=isNetworkProvider) BOOL networkProvider;
@property(getter=isSpecificUseOnly) BOOL specificUseOnly;

@end
