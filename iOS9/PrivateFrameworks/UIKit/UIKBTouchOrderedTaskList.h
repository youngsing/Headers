//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSUUID, NSValue;

__attribute__((visibility("hidden")))
@interface UIKBTouchOrderedTaskList : NSObject
{
    NSUUID *_touchUUID;
    NSMutableArray *_touchStateTasks;
    NSValue *_currentTouchPoint;
    _Bool _ignoredOnBegin;
    unsigned long long _pathIndex;
    double _originalStartTime;
}

+ (id)taskListForTouchUUID:(id)arg1 withPathIndex:(unsigned long long)arg2;
@property(nonatomic) _Bool ignoredOnBegin; // @synthesize ignoredOnBegin=_ignoredOnBegin;
@property(readonly, nonatomic) double originalStartTime; // @synthesize originalStartTime=_originalStartTime;
@property(readonly, nonatomic) unsigned long long pathIndex; // @synthesize pathIndex=_pathIndex;
@property(readonly, retain, nonatomic) NSValue *currentTouchPoint; // @synthesize currentTouchPoint=_currentTouchPoint;
@property(readonly, retain, nonatomic) NSUUID *touchUUID; // @synthesize touchUUID=_touchUUID;
- (id)firstTouchStateForUITouchPhase:(long long)arg1;
- (_Bool)executeTasksInView:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)addTask:(id)arg1;
@property(readonly, nonatomic) _Bool hasTasks;
- (void)dealloc;
- (id)initWithTouchUUID:(id)arg1 withPathIndex:(unsigned long long)arg2;

@end
