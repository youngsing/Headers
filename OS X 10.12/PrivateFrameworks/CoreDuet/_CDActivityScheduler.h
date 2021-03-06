//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CDAttribute, CDSession, NSDate, NSMutableArray, NSString, _CDActivity, _CDDateRange, _CDSystemMonitor;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _CDActivityScheduler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *activityDispatcher;
    NSMutableArray *submittedActivities;
    NSMutableArray *requisiteStateQueue;
    NSMutableArray *favorableStateQueue;
    NSMutableArray *runQueue;
    NSMutableArray *suspendQueue;
    unsigned long long maxConcurrentExec;
    long long currentIntensiveActCount;
    _CDActivity *currentDeviceRestartActivity;
    unsigned int restartAssertion;
    NSDate *nextUserWake;
    NSString *nextUserWakeAppName;
    long long userInactiveActCount;
    long long userInactiveSuspendActCount;
    long long acPowerActCount;
    long long acPowerSuspendActCount;
    long long execActCount;
    long long execActCountWithNoConditions;
    long long completedActCount;
    long long totalActCompletionTime;
    long long totalActStartTime;
    long long overdueActCount;
    long long thermalSuspendActCount;
    long long memorySuspendActCount;
    CDSession *session;
    CDAttribute *pluginAttribute;
    CDAttribute *budgetAttribute;
    CDAttribute *userActivityAttribute;
    NSDate *forecastTimestamp;
    BOOL pluginForecastValid;
    unsigned char pluginForecast[13];
    BOOL inactivityForecastValid;
    unsigned char inactivityForecast[13];
    _CDDateRange *nextSleepPeriod1;
    _CDDateRange *nextSleepPeriod2;
    BOOL deviceRestartForecastValid;
    _CDDateRange *deviceRestartPeriod1;
    _CDDateRange *deviceRestartPeriod2;
    NSDate *sleepEnd1;
    NSDate *sleepEnd2;
    NSDate *nextForecastUpdate;
    NSDate *nextScheduleUpdate;
    _CDSystemMonitor *systemMonitor;
    unsigned int _swAckPort;
    unsigned int swNotifier;
    struct IONotificationPort *swNotifyPort;
    int idleSleepPreventersToken;
    int systemSleepPreventersToken;
    int wakeRequestsToken;
    int userAssertionsAnyChangeToken;
    int powerStateChangeToken;
    int restartCheckNotificationToken;
    unsigned int restartAssertionCheckId;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned int _swAckPort; // @synthesize _swAckPort;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_queue; // @synthesize _queue;
- (void).cxx_destruct;
- (BOOL)activityCompleted:(id)arg1 error:(id *)arg2;
- (BOOL)cancelActivity:(id)arg1 error:(id *)arg2;
- (BOOL)submitActivityBatch:(id)arg1 error:(id *)arg2;
- (BOOL)submitActivity:(id)arg1 error:(id *)arg2;
- (void)handleActivitySubmission:(id)arg1;
- (void)setDispatchTimer;
- (void)scheduleSystemWakeAt:(id)arg1 forActivity:(id)arg2 withLeeway:(long long)arg3;
- (void)processActivityQueues;
- (void)processFavorableStateQueue;
- (void)processRequisiteStateQueue;
- (BOOL)admissionCheckOnActivity:(id)arg1;
- (BOOL)systemAdmissionCheck;
- (void)suspendExecutingActivities:(CDUnknownBlockType)arg1;
- (void)processSubmittedActivity:(id)arg1;
- (void)registerForDeviceRestartMonitoring;
- (void)getNextUserWakeEvent;
- (void)processDeviceRestartSuspension;
- (void)processDeviceRestartActivities;
- (void)callStartHandler:(id)arg1;
- (BOOL)deviceRestartAdmissionCheck:(id)arg1;
- (void)retryAdmissionCheck:(long long)arg1;
- (BOOL)assertionCheckForDeviceRestart:(id)arg1;
- (void)disableHeySiri;
- (void)enableHeySiri;
- (void)deregisterForAnyAssertionChange;
- (void)registerForAnyAssertionChange;
- (void)insertActivity:(id)arg1 toQueue:(id)arg2 onCondition:(CDUnknownBlockType)arg3;
- (void)setActivityScheduleTime:(id)arg1;
- (BOOL)isUserAsleepForDeviceRestart:(id)arg1;
- (BOOL)isUserAsleep;
- (BOOL)updateForecasts;
- (BOOL)getDeviceRestartForecast;
- (id)getUnrestrictedSleepEnd;
- (BOOL)getForecastForDevicePlugin:(char *)arg1;
- (BOOL)getForecastForUserInactivity:(char *)arg1;
- (id)getForecastForAttribute:(id)arg1;
- (void)updateAggdKeys;
- (BOOL)cacheSleepPeriod:(id)arg1 end:(id)arg2 period1:(id *)arg3 period2:(id *)arg4;
- (id)dateToString:(id)arg1;
- (void)handleSystemNotification:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end

