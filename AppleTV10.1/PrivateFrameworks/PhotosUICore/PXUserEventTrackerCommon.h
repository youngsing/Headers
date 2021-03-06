//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXUserEventTrackerCommon : NSObject
{
    id _currentSessionSender;
    unsigned long long _currentSessionSource;
    unsigned long long _currentSessionTab;
    double _currentLogStateStartDate;
    _Bool _applicationIsInForeground;
    unsigned long long _currentTab;
    unsigned long long _currentLogState;
}

@property(nonatomic) unsigned long long currentLogState; // @synthesize currentLogState=_currentLogState;
@property(nonatomic, setter=setCurrentTab:) unsigned long long currentTab; // @synthesize currentTab=_currentTab;
- (void).cxx_destruct;
- (id)PXUserEventSourceDescription:(unsigned long long)arg1;
- (id)PXLogStateDescription:(unsigned long long)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)logCounterValuesForLogState:(unsigned long long)arg1 duration:(double)arg2;
- (void)setCurrentLogState:(unsigned long long)arg1 forceLogging:(_Bool)arg2;
- (void)_setCurrentSessionSource:(unsigned long long)arg1 sender:(id)arg2 isInForeground:(_Bool)arg3;
- (void)eventSourceWillAppear:(unsigned long long)arg1 sender:(id)arg2;
- (void)eventSourceDidDisappear:(unsigned long long)arg1 sender:(id)arg2;
- (id)init;

@end

