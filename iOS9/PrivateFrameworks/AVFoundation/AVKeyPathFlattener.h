//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVKeyPathDependencyHost-Protocol.h>
#import <AVFoundation/AVWeakObservable-Protocol.h>

@class AVKeyPathDependencyManager, AVTwoPartKeyPath, NSString;

@interface AVKeyPathFlattener : NSObject <AVKeyPathDependencyHost, AVWeakObservable>
{
    AVKeyPathDependencyManager *_dependencyManager;
    AVTwoPartKeyPath *_dependencyKeyPath;
    NSObject *_observedObject;
}

@property(readonly, nonatomic) id dependentProperty;
- (id)topLevelDependencyProperty;
- (id)observedObject;
- (void)dealloc;
- (void)addCallbackToCancelDuringDeallocation:(id)arg1;
- (id)initForObservingValueAtKeyPath:(id)arg1 onObject:(id)arg2;
- (id)init;
- (void)declareKeyPathDependenciesWithRegistry:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

