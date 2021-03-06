//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_semaphore;

@interface DeviceGammaContext : NSObject
{
    unsigned int deviceID;
    unsigned int numSamples;
    float *redLUT;
    float *greenLUT;
    float *blueLUT;
    float *redTable;
    float *greenTable;
    float *blueTable;
    float *redTableA;
    float *greenTableA;
    float *blueTableA;
    float *redTableB;
    float *greenTableB;
    float *blueTableB;
    _Bool cgLUTintegration;
    double epsilon;
    double currentWipe;
    double wipeIncrement;
    double UpdateRate;
    int internal;
    _Bool hasOverrides;
    _Bool preferencesRead;
    double previousWiperUpdateTimeMS;
    double leakage;
    int lowestLevel;
    double lowestMeasured;
    double maxBacklight;
    double darkReflection;
    double brightReflection;
    double ALSlux;
    double backLightNits;
    NSObject<OS_dispatch_semaphore> *wiperAnimationRequestSemaphore;
    _Bool animationCompleted;
    _Bool animationPreemptable;
    _Bool compensationState;
    int rateLimitState;
    double timeOfLastAssemblyBufferFlushMS[5];
    unsigned char lastAssemblyBufferFlushMSindex;
    struct _opaque_pthread_mutex_t _intentionDictionaryMutex;
    CDStruct_c01948ca *_intentionDictionary;
    struct _opaque_pthread_mutex_t _prefsIntentionDictionaryMutex;
    CDStruct_c01948ca *_prefsIntentionDictionary;
    struct _opaque_pthread_mutex_t _timeOfLastAssemblyBufferFlushListMutex;
}

- (CDStruct_c01948ca *)copyPrefsIntentionDictionary;
- (void)printLastAssemblyBuffer;
- (double)computeRecentAssemblyBufferUpdateRateMS;
- (void)addTimeOfLastAssemblyBufferFlushMS:(double)arg1;
- (void)initTimeOfLastAssemblyBufferFlushListMS;
- (int)getRateLimitState;
- (void)setRateLimitState:(int)arg1;
- (CDStruct_c01948ca *)copyIntentionDictionary;
- (void)setPrefsIntentionDictionary:(CDStruct_c01948ca *)arg1;
- (void)setIntentionDictionary:(CDStruct_c01948ca *)arg1;
- (_Bool)getCompensationState;
- (void)enableCompensation:(_Bool)arg1;
- (_Bool)preferencesRead;
- (void)setpreferencesRead;
- (_Bool)overridesFound;
- (void)setOverridesFound:(_Bool)arg1;
- (_Bool)animationPreemptable;
- (_Bool)animationCompleted;
- (float)getALS;
- (void)setALS:(double)arg1;
- (float)getDarkReflection;
- (void)setBackLightNits:(double)arg1;
- (float)getBackLightNits;
- (void)setMaxBackLight:(double)arg1;
- (float)getMaxBackLight;
- (float)getLeakage;
- (int)getLowestLevel;
- (void)setDisplayParametersWithLeakage:(float)arg1 lowestLevel:(int)arg2 lowestMeasured:(float)arg3 backlight:(float)arg4 darkReflection:(float)arg5 brightReflection:(float)arg6;
- (void)setInternal:(BOOL)arg1;
- (BOOL)isInternal;
- (unsigned int)getDisplayID;
- (void)warpLUTlevelsWithGamma:(float)arg1 blackPoint:(int)arg2 saturationPoint:(int)arg3 hue:(float)arg4 saturation:(float)arg5;
- (void)warpLUTwithGamma:(float)arg1 blackPoint:(float)arg2 saturationPoint:(float)arg3 hue:(float)arg4 saturation:(float)arg5;
- (double)updateWipeWithActualIntervalInSeconds:(float)arg1;
- (void)tableInterpolate;
- (void)interpolateTableAtoTableBintoTable:(double)arg1;
- (void)tableInterpolate:(double)arg1;
- (void)setupInterpolationWithDuration:(double)arg1 direction:(unsigned char)arg2;
- (void)table2Tableb;
- (void)LUT2Table;
- (void)interpolateCurrentTableToDestinationTableOverTime:(float)arg1 withPreemption:(BOOL)arg2;
- (void)releaseAnimationLock;
- (int)requestAndWaitForAnimationToEndNonLocking;
- (int)requestAndWaitForAnimationToEndLocking;
- (int)waitForAnimationToEndLocking;
- (void)loadHWLUTfromTable;
- (void)dealloc;
- (id)initWithCount:(int)arg1 usesCG:(_Bool)arg2 withDisplayID:(unsigned int)arg3;

@end

