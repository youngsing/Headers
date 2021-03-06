//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCAudioIOClient-Protocol.h>
#import <AVConference/VCMediaStreamProtocol-Protocol.h>
#import <AVConference/VCMediaStreamSyncSource-Protocol.h>
#import <AVConference/WRMClientDelegate-Protocol.h>

@class AVCMediaStreamConfig, DTMFEventHandler, NSMutableArray, NSString, VCAudioPayload, VCAudioTransmitter, VCPacketBundler, WRMClient;
@protocol OS_dispatch_queue, OS_dispatch_source, VCMediaStreamDelegate, VCMediaStreamSyncSourceDelegate;

__attribute__((visibility("hidden")))
@interface VCAudioStream : NSObject <VCMediaStreamProtocol, WRMClientDelegate, VCAudioIOClient, VCMediaStreamSyncSource>
{
    int numBufferBytesAvailable;
    NSObject<OS_dispatch_source> *pausedAudioHeartBeat;
    double dAudioHostTime;
    double _rtpTimeoutEnabledTime;
    double _rtcpTimeoutEnabledTime;
    BOOL lastVoiceActive;
    double lastRTPTimeoutReportTime;
    double lastRTCPTimeoutReportTime;
    struct tagHANDLE *rtpHandle;
    unsigned int conferenceID;
    unsigned int lastInputAudioTimeStamp;
    unsigned int lastSentAudioSampleTime;
    unsigned int packetTimeoutCheckCounter;
    unsigned int awdTime;
    long long sampleRate;
    long long samplesPerFrame;
    struct _opaque_pthread_rwlock_t stateLock;
    struct _opaque_pthread_mutex_t sessionLock;
    NSMutableArray *audioPayloads;
    struct AudioStreamBasicDescription vpioFormat;
    int preferredAudioCodec;
    DTMFEventHandler *dtmfEventHandler;
    WRMClient *wrmClient;
    VCAudioPayload *currentAudioPayload;
    VCAudioPayload *currentDTXPayload;
    char *lastInputSampleBuffer;
    BOOL lastIsTalking;
    // Error parsing type: ^{tagVCAudioReceiver={tagVCAudioReceiverConfig=^{tagHANDLE}IiiB}^{JitterPreloadQueue_t}^{JitterQueue_t}{tagJLagProcessor=dIIISIIdddddfiddd[30d]iII{tagSecRef=dISdi}^v{tagJLagProcessorStatistics=dII}}{tagTargetJBEstimator=iiBiiddI{tagJITTER_HISTORY=[1500d][1500d][1500i]iiiddddS{tagJITTER_CDFHISTOGRAM=^I[1500i]IddI}{tagJITTER_SPIKEINFO=ddd[75d][75d]iiiddddSdidddiddiiddddi{tagJITTER_CANDIDATE_SPIKEINFO=ddddd}}dS}[50d][50d]ii[10I]fff^v{tagTargetJBEstimatorSpikeInfo=iidd}{tagTargetJBEstimatorStatistics=idddddidddddd}}{tagPlayback=iiiii*iiII[16C]Ci*iIi*i(?=sf)(?=sf)I(?=sf)(?=sf)iiBBffffB^{OpaqueAudioConverter}^{OpaqueAudioConverter}C^v[1440f]iiiddddiiddiiii{tagCrossFade=*^f^fiiB}iifdBB{_tagInternalAudioFormat=IIIB}^{tagDecoderSettings}^{JitterQueue_t}I{tagPlaybackStatistics=iII*ii}{tagPlaybackReportingMetrics=iifffffii}{tagPlaybackWRMMetrics=IIIIQ}}^vd{tagVCRealTimeThread=II{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_cond_t=q[40c]}^?^v^{OpaqueFigThread}i[60c]II}{tagVCAudioReceiverReportingTask=^{opaqueRTCReporting}di[100d]BSI^{tagHANDLE}}^{_tagInternalAudioFormat}{tagJitterQueueParameters=ddiidiiBi}{tagVideoQueueParameters=idddd}B{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}^{tagDecoderSettings}IIBi{tagVCAudioReceiverStatistics=AI}^{tagWRMMetricsInfo}^?{tagAMRModeChangeRequestCallbackContext=^v^?^?}}, name: _audioReceiver
    VCAudioTransmitter *audioTransmitter;
    VCPacketBundler *audioBundler;
    NSString *callID;
    struct opaqueRTCReporting *reportingAgent;
    struct _METER_INFO soundMeter[2];
    NSObject<OS_dispatch_queue> *delegateNotificationQueue;
    int state;
    BOOL isSRTPInitialized;
    BOOL isValid;
    int deviceRole;
    int operatingMode;
    AVCMediaStreamConfig *streamConfig;
    NSObject<VCMediaStreamDelegate> *delegate;
    NSObject<VCMediaStreamSyncSourceDelegate> *syncSourceDelegate;
    struct tagWRMMetricsInfo wrmInfo;
    unsigned int datagramChannelToken;
}

+ (id)capabilities;
+ (id)supportedAudioPayloads;
+ (BOOL)isSameSRTPKey:(id)arg1 newKey:(id)arg2;
@property(nonatomic) int operatingMode; // @synthesize operatingMode;
@property(nonatomic) int state; // @synthesize state;
@property(nonatomic) NSObject<VCMediaStreamDelegate> *delegate; // @synthesize delegate;
@property(retain, nonatomic) AVCMediaStreamConfig *streamConfig; // @synthesize streamConfig;
@property(nonatomic) int deviceRole; // @synthesize deviceRole;
@property(nonatomic) BOOL isValid; // @synthesize isValid;
@property(readonly) unsigned int conferenceID; // @synthesize conferenceID;
- (void)handleAMRCodecModeChange:(unsigned char)arg1;
- (void)unregisterAMRModeChangeNotifications;
- (void)registerAMRModeChangeNotifications;
- (long long)getSyncSourceSampleRate;
@property(nonatomic) NSObject<VCMediaStreamSyncSourceDelegate> *syncSourceDelegate; // @synthesize syncSourceDelegate;
- (void)setWRMNotification:(CDStruct_d2860d30 *)arg1;
- (void)setWRMMetricConfig:(CDStruct_69d7cc99 *)arg1;
- (void)reportWRMMetrics:(const CDStruct_0db8e210 *)arg1;
- (void)stopWRM;
- (void)startWRM;
- (void)uninitializeWRM;
- (void)initializeWRM;
- (void)setCanProcessAudio:(BOOL)arg1;
- (BOOL)canProcessAudio;
- (BOOL)onPlaySound:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 averagePower:(float)arg5;
- (BOOL)onCaptureSound:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 timeStampDelta:(int)arg5 bufferedSamples:(int)arg6 hostTime:(double)arg7 averagePower:(float)arg8 voiceActivity:(unsigned int)arg9;
- (void)stopSendDTMFEvent;
- (void)sendDTMFEvent:(id)arg1;
- (void)stopPausedHeartbeat;
- (void)startPausedHeartbeat;
- (void)setPause:(BOOL)arg1;
- (void)stop;
- (void)start;
- (void)cleanupAudio;
- (void)prepareAudio;
- (void)updateSoundMeter:(int)arg1 samples:(char *)arg2 numSamples:(int)arg3 averagePower:(float)arg4 voiceActivity:(unsigned int)arg5;
- (void)setFrequencyMeteringEnabled:(BOOL)arg1 meterType:(int)arg2;
- (BOOL)isFrequencyMeteringEnabled:(int)arg1;
- (void)setRtcpSendInterval:(double)arg1;
- (void)setRtcpTimeOutInterval:(double)arg1;
- (void)setRtpTimeOutInterval:(double)arg1;
- (void)setRtcpTimeOutEnabled:(BOOL)arg1;
- (void)setRtpTimeOutEnabled:(BOOL)arg1;
- (void)setRtcpEnabled:(BOOL)arg1;
- (long long)streamDirection;
- (void)setStreamDirection:(long long)arg1;
- (void)setupRTPPayloads;
- (BOOL)setStreamConfig:(id)arg1 withError:(id *)arg2;
- (BOOL)configureAudioStreamWithConfiguration:(id)arg1 error:(id *)arg2;
- (id)setupRTPWithSockets:(id)arg1 error:(id *)arg2;
- (id)setupRTPWithIPInfo:(id)arg1 error:(id *)arg2;
- (id)setupRTPWithIDSDestination:(id)arg1 error:(id *)arg2;
- (id)setupRTPWithLocalParticipantInfo:(id)arg1 error:(id *)arg2;
- (id)setLocalParticipantInfo:(id)arg1 networkSockets:(id)arg2 withError:(id *)arg3;
- (void)dealloc;
- (id)init;
- (void)stateEnter;
- (void)stateExit;
- (char *)streamStateToString:(int)arg1;
- (int)setupSRTP;
- (BOOL)isSameSRTPConfig:(id)arg1;
- (int)getCryptoSet:(struct tagSRTPExchangeInfo *)arg1 withMasterKey:(id)arg2;
- (int)getSRTPMasterKeyLength:(long long)arg1;
- (int)SRTPCipherSuiteForLTECipherSuite:(long long)arg1;
- (void)checkPacketTimeouts;
- (void)reportRTCPPackets:(struct tagRTCPPACKET *)arg1 withCount:(int)arg2;
- (BOOL)setMediaQueueStreamSettings;
- (BOOL)setRTPPayloads:(int *)arg1 numPayloads:(int)arg2 withError:(id *)arg3;
- (id)addAudioPayload:(int)arg1;
- (void)setupSpecialPayload:(id)arg1;
- (BOOL)setupAudioCodecWithPayload:(int)arg1;
- (unsigned int)preferredAudioBitrate;
- (unsigned int)AMRModeToBitrate:(long long)arg1;
- (BOOL)choosePayload:(int *)arg1 count:(int)arg2;
- (int)bundleAndSendSamples:(char *)arg1 numEncodedBytes:(int)arg2 withPayload:(int)arg3 timeStamp:(unsigned int)arg4 voiceActivity:(BOOL)arg5;
- (int)sendSamples:(char *)arg1 numEncodedBytes:(int)arg2 withPayload:(int)arg3 timeStamp:(unsigned int)arg4 voiceActivity:(BOOL)arg5;
- (int)encodeAudio:(void *)arg1 numInputBytes:(int)arg2 outputBytes:(void *)arg3 numOutputBytes:(int)arg4 withPayload:(int *)arg5 isTalking:(BOOL)arg6;
- (BOOL)allocateLastInputSampleBuffer;
- (unsigned int)maximumPayloadSize;
- (BOOL)setupAudioEncoders;
- (void)stopAudioWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startAudioWithCompletionHandler:(CDUnknownBlockType)arg1;
- (unsigned int)codecTypeFromAudioPayload:(int)arg1;
- (void)pullDecodedMeshMode:(char *)arg1 timestamp:(unsigned int)arg2 numBytes:(int)arg3 numSamples:(int)arg4;
- (void)generateWRMReport;
- (int)captureMeshMode:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 bufferedSamples:(int)arg5 hostTime:(double)arg6 voiceActivity:(BOOL)arg7;
- (void)setInputTimestamp:(unsigned int)arg1 packetTimestamp:(int)arg2 hostTime:(double)arg3;
- (unsigned int)computePacketTimestampWithInputTimestamp:(unsigned int)arg1 numSamples:(int)arg2 hostTime:(double)arg3;
- (void)unlock;
- (void)lock;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

