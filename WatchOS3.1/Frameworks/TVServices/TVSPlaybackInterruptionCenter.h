//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVServices/TVSPlaybackInterruptableRegistration-Protocol.h>

@class NSMutableDictionary, NSString, TVSPlaybackInterruptionGroup;

@interface TVSPlaybackInterruptionCenter : NSObject <TVSPlaybackInterruptableRegistration>
{
    NSMutableDictionary *_interruptionGroupByInterruptionID;
    TVSPlaybackInterruptionGroup *_uninterruptedGroup;
}

+ (id)defaultInterruptionCenter;
@property(retain, nonatomic) TVSPlaybackInterruptionGroup *uninterruptedGroup; // @synthesize uninterruptedGroup=_uninterruptedGroup;
@property(retain, nonatomic) NSMutableDictionary *interruptionGroupByInterruptionID; // @synthesize interruptionGroupByInterruptionID=_interruptionGroupByInterruptionID;
- (void).cxx_destruct;
- (void)removeInterruptable:(id)arg1;
- (void)addInterruptable:(id)arg1;
- (void)interruptionDidEndWithID:(id)arg1;
- (void)interruptionWillEndWithID:(id)arg1;
- (void)interruptionDidBeginWithID:(id)arg1;
- (void)interruptionWillBeginWithID:(id)arg1;
- (id)_allInterruptionGroups;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
