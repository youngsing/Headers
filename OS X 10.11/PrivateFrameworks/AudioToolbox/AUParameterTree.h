//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AudioToolbox/AUParameterGroup.h>

#import <AudioToolbox/NSSecureCoding-Protocol.h>

@class AUAudioUnit_XH;

@interface AUParameterTree : AUParameterGroup <NSSecureCoding>
{
    BOOL __autoCreatedForV2AU;
    BOOL __suppressObserverCallbacks;
    int _numRecorders;
    struct dispatch_queue_s *_observationQueue;
    struct AUObserverController *_observerController;
    struct dispatch_queue_s *_valueAccessQueue;
    AUAudioUnit_XH *__auXH;
    struct AURemoteParameterObserver *_remoteObserverToken;
    struct AURemoteParameterObserver *_remoteRecorderToken;
    vector_2580a1ea _addrToParamIndex;
}

+ (BOOL)supportsSecureCoding;
+ (id)createTreeWithChildren:(id)arg1;
+ (id)createGroupFromTemplate:(id)arg1 identifier:(id)arg2 name:(id)arg3 addressOffset:(unsigned long long)arg4;
+ (id)createGroupTemplate:(id)arg1;
+ (id)createGroupWithIdentifier:(id)arg1 name:(id)arg2 children:(id)arg3;
+ (id)createParameterWithIdentifier:(id)arg1 name:(id)arg2 address:(unsigned long long)arg3 min:(float)arg4 max:(float)arg5 unit:(unsigned int)arg6 unitName:(id)arg7 flags:(unsigned int)arg8 valueStrings:(id)arg9 dependentParameters:(id)arg10;
@property(nonatomic) BOOL _suppressObserverCallbacks; // @synthesize _suppressObserverCallbacks=__suppressObserverCallbacks;
@property(nonatomic) struct AURemoteParameterObserver *remoteRecorderToken; // @synthesize remoteRecorderToken=_remoteRecorderToken;
@property(nonatomic) struct AURemoteParameterObserver *remoteObserverToken; // @synthesize remoteObserverToken=_remoteObserverToken;
@property(nonatomic) int numRecorders; // @synthesize numRecorders=_numRecorders;
@property(nonatomic) AUAudioUnit_XH *_auXH; // @synthesize _auXH=__auXH;
@property(readonly, nonatomic) struct dispatch_queue_s *valueAccessQueue; // @synthesize valueAccessQueue=_valueAccessQueue;
@property(nonatomic) struct AUObserverController *observerController; // @synthesize observerController=_observerController;
@property(readonly, nonatomic) struct dispatch_queue_s *observationQueue; // @synthesize observationQueue=_observationQueue;
@property(nonatomic) BOOL _autoCreatedForV2AU; // @synthesize _autoCreatedForV2AU=__autoCreatedForV2AU;
@property(nonatomic) vector_2580a1ea addrToParamIndex; // @synthesize addrToParamIndex=_addrToParamIndex;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)recordParameterEvents:(id)arg1;
- (void)parameterChanged:(unsigned long long)arg1 value:(float)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_checkInitTreeObservation;
- (id)parameterWithID:(unsigned int)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;
- (id)parameterWithAddress:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithChildren:(id)arg1;
- (void)_init2;

@end

