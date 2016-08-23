//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/CNDataMapper-Protocol.h>

@class CNCDPersistenceStack, NSString;

__attribute__((visibility("hidden")))
@interface CNCoreDataMapperX : NSObject <CNDataMapper>
{
    CNCDPersistenceStack *_persistenceStack;
}

- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (BOOL)requestAccessForEntityType:(long long)arg1 error:(id *)arg2;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)defaultContainerIdentifier;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)groupsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)accountsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)containersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (BOOL)executeSaveRequest:(id)arg1 error:(id *)arg2;
- (id)meContactIdentifierWithError:(id *)arg1;
- (id)contactsForFetchRequest:(id)arg1 matchInfos:(id *)arg2 error:(id *)arg3;
- (id)contactsForFetchRequest:(id)arg1 error:(id *)arg2;
- (void)setNotificationSource:(id)arg1;
- (void)dealloc;
- (id)initWithPersistenceStack:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
