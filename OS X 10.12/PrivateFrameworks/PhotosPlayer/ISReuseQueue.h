//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ISReuseQueue : NSObject
{
    BOOL _reuseEnabled;
    CDUnknownBlockType _objectBecomeReusableHandler;
    NSMutableDictionary *__objectCreationBlocksByReuseIdentifier;
    NSMutableDictionary *__reusableObjectsByReuseIdentifier;
}

@property(nonatomic, getter=isReuseEnabled) BOOL reuseEnabled; // @synthesize reuseEnabled=_reuseEnabled;
@property(readonly, nonatomic) NSMutableDictionary *_reusableObjectsByReuseIdentifier; // @synthesize _reusableObjectsByReuseIdentifier=__reusableObjectsByReuseIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *_objectCreationBlocksByReuseIdentifier; // @synthesize _objectCreationBlocksByReuseIdentifier=__objectCreationBlocksByReuseIdentifier;
@property(copy, nonatomic) CDUnknownBlockType objectBecomeReusableHandler; // @synthesize objectBecomeReusableHandler=_objectBecomeReusableHandler;
- (void).cxx_destruct;
- (void)discardReusableObjects;
- (void)_enqueueObjectForReuse:(id)arg1 withReuseIdentifier:(id)arg2;
- (void)enqueueObjectForReuse:(id)arg1 withReuseIdentifier:(id)arg2;
- (id)dequeueObjectWithReuseIdentifier:(id)arg1 isReused:(char *)arg2;
- (void)registerObjectCreationBlock:(CDUnknownBlockType)arg1 withReuseIdentifier:(id)arg2;
- (id)init;

@end
