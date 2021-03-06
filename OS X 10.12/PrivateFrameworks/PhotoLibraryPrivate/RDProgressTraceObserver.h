//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDProgressObserver.h>

@class NSString;

@interface RDProgressTraceObserver : RDProgressObserver
{
    int _lastPercent;
    int _updatesWithoutChange;
    NSString *_traceSubsystem;
    double _startSeconds;
    double _lastPercentSeconds;
}

+ (id)traceObserverWithTaskName:(id)arg1 traceSubsystem:(id)arg2;
@property(nonatomic) int updatesWithoutChange; // @synthesize updatesWithoutChange=_updatesWithoutChange;
@property(nonatomic) int lastPercent; // @synthesize lastPercent=_lastPercent;
@property(nonatomic) double lastPercentSeconds; // @synthesize lastPercentSeconds=_lastPercentSeconds;
@property(nonatomic) double startSeconds; // @synthesize startSeconds=_startSeconds;
@property(retain, nonatomic) NSString *traceSubsystem; // @synthesize traceSubsystem=_traceSubsystem;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithTaskName:(id)arg1 traceSubsystem:(id)arg2;

@end

