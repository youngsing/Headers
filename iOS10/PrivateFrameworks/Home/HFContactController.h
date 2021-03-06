//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;
@protocol HFContactControllerDelegate;

@interface HFContactController : NSObject
{
    id <HFContactControllerDelegate> _delegate;
    NSMutableDictionary *_recipientAvailabilities;
    unsigned long long _familyMembersState;
    NSArray *_familyMembers;
    NSMutableDictionary *_familyMemberDsidToContact;
    NSArray *_descriptors;
    NSMutableArray *_familyMemberCallbacks;
}

+ (id)contactForPhoneNumber:(id)arg1 keyDescriptors:(id)arg2;
+ (id)contactForEmailAddress:(id)arg1 keyDescriptors:(id)arg2;
+ (id)stringForRecipientStatus:(unsigned long long)arg1;
@property(copy, nonatomic) NSMutableArray *familyMemberCallbacks; // @synthesize familyMemberCallbacks=_familyMemberCallbacks;
@property(copy, nonatomic) NSArray *descriptors; // @synthesize descriptors=_descriptors;
@property(copy, nonatomic) NSMutableDictionary *familyMemberDsidToContact; // @synthesize familyMemberDsidToContact=_familyMemberDsidToContact;
@property(copy, nonatomic) NSArray *familyMembers; // @synthesize familyMembers=_familyMembers;
@property(nonatomic) unsigned long long familyMembersState; // @synthesize familyMembersState=_familyMembersState;
@property(retain, nonatomic) NSMutableDictionary *recipientAvailabilities; // @synthesize recipientAvailabilities=_recipientAvailabilities;
@property(nonatomic) __weak id <HFContactControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_downloadFamilyMemberPhotos;
- (void)_loadFamilyMembersWithCompletion:(CDUnknownBlockType)arg1;
- (id)contactForFamilyMemberWithDsid:(id)arg1;
- (void)fetchFamilyMembersWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)statusForDestination:(id)arg1;
- (void)markDestinationsPending:(id)arg1;
- (void)entriesUpdated:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *pendingDestinations;
- (id)initWithKeyDescriptors:(id)arg1;
- (id)init;

@end

