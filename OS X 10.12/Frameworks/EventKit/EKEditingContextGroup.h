//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKit/EKEditingContextObserver-Protocol.h>

@class EKEventStore, EKObjectGroup, NSMutableArray, NSNumber, NSSet, NSString;

@interface EKEditingContextGroup : NSObject <EKEditingContextObserver>
{
    EKObjectGroup *_objectGroup;
    NSSet *_openContexts;
    EKEventStore *_eventStore;
    NSMutableArray *_additionalObjectGroups;
    NSNumber *_spanDecisionAsNumber;
    NSNumber *_earlyCommitDecisionAsNumber;
}

@property(retain) NSNumber *earlyCommitDecisionAsNumber; // @synthesize earlyCommitDecisionAsNumber=_earlyCommitDecisionAsNumber;
@property(retain) NSNumber *spanDecisionAsNumber; // @synthesize spanDecisionAsNumber=_spanDecisionAsNumber;
@property(retain) NSMutableArray *additionalObjectGroups; // @synthesize additionalObjectGroups=_additionalObjectGroups;
@property __weak EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property(retain) NSSet *openContexts; // @synthesize openContexts=_openContexts;
@property(retain) EKObjectGroup *objectGroup; // @synthesize objectGroup=_objectGroup;
- (void).cxx_destruct;
- (id)oldObject:(id)arg1 didUpdateTo:(id)arg2;
- (id)newIdentifierForIdentifier:(id)arg1;
- (void)addAdditionalObjects:(id)arg1;
- (id)originalObjects;
- (id)trackedObjects;
- (id)identifiersToCommit;
- (unsigned long long)earlyCommitDecisionForGroup;
- (BOOL)earlyCommitDecisionForGroupIsSet;
- (void)unspecifyEarlyCommitDecisionForGroup;
- (void)specifyEarlyCommitDecisionForGroup:(unsigned long long)arg1;
- (unsigned long long)spanDecisionForGroup;
- (BOOL)spanDecisionForGroupIsSet;
- (void)unspecifySpanDecisionForGroup;
- (void)specifySpanDecisionForGroup:(unsigned long long)arg1;
- (id)activeEditingContextsExcludingContext:(id)arg1;
- (id)activeEditingContexts;
- (void)removeContext:(id)arg1;
- (void)addContext:(id)arg1;
- (id)initWithObjectGroup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
