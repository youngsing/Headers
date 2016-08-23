//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/ABCardViewDataSource-Protocol.h>

@class ABCommandExecutor, AKCardViewDataSource, NSString;

__attribute__((visibility("hidden")))
@interface ABCardViewUndoableDataSource : NSObject <ABCardViewDataSource>
{
    AKCardViewDataSource *_dataSource;
    ABCommandExecutor *_commandExecutor;
}

- (void)createAndExecuteEditCommandWithKey:(id)arg1 value:(id)arg2;
- (void)rejectSuggestedValue:(id)arg1;
- (void)confirmSuggestedValue:(id)arg1;
- (id)accountTypeForImageIdentifier:(id)arg1;
- (id)legacyAddressBook;
- (void)executeCommand:(id)arg1;
- (void)setTexttone:(id)arg1;
- (id)texttone;
- (void)setRingtone:(id)arg1;
- (id)ringtone;
- (void)setPreferredForName:(id)arg1;
- (id)preferredForName;
- (id)linkedLocalPhotoFuturesByIdentifier;
- (id)identifierOfPersonPreferredForPhoto;
- (void)setPersonWithIdentifierPreferredForPhoto:(id)arg1;
- (void)setImage:(id)arg1;
- (id)remotePhotoFuture;
- (id)localThumbnailPhotoFuture;
- (id)localLargePhotoFuture;
- (id)alternateImagePath;
- (void)setAlternateImagePath:(id)arg1;
- (id)alternateImageIDs;
- (void)setAlternateImageIDs:(id)arg1;
- (id)uniqueIdentifiers;
- (id)URL;
@property(getter=isTransient) BOOL transient;
- (BOOL)isDirectoryResult;
- (BOOL)isEmpty;
- (BOOL)isReadOnly;
- (BOOL)isMe;
- (id)initials;
- (void)setDisplayStyle:(unsigned long long)arg1;
- (unsigned long long)displayStyle;
- (void)setJobTitle:(id)arg1;
- (id)jobTitle;
- (id)jobTitlePlaceholder;
- (void)setDepartmentName:(id)arg1;
- (id)departmentName;
- (id)departmentNamePlaceholder;
- (void)setCompanyName:(id)arg1;
- (id)companyName;
- (id)companyNamePlaceholder;
- (id)phoneticCompleteName;
- (id)phoneticCompleteNamePlaceholder;
- (void)setPhoneticLastName:(id)arg1;
- (id)phoneticLastName;
- (id)phoneticLastNamePlaceholder;
- (void)setPhoneticMiddleName:(id)arg1;
- (id)phoneticMiddleName;
- (id)phoneticMiddleNamePlaceholder;
- (void)setPhoneticFirstName:(id)arg1;
- (id)phoneticFirstName;
- (id)phoneticFirstNamePlaceholder;
- (id)completeName;
- (id)completeNamePlaceholder;
- (void)setNickname:(id)arg1;
- (id)nickname;
- (id)nicknamePlaceholder;
- (void)setNameSuffix:(id)arg1;
- (id)nameSuffix;
- (id)nameSuffixPlaceholder;
- (void)setLastName:(id)arg1;
- (id)lastName;
- (id)lastNamePlaceholder;
- (void)setMiddleName:(id)arg1;
- (id)middleName;
- (id)middleNamePlaceholder;
- (void)setFirstName:(id)arg1;
- (id)firstName;
- (id)firstNamePlaceholder;
- (void)setNameTitle:(id)arg1;
- (id)nameTitle;
- (id)nameTitlePlaceholder;
- (id)postalAddresses;
- (void)setPostalAddresses:(id)arg1;
- (id)note;
- (void)setNote:(id)arg1;
- (id)maidenName;
- (void)setMaidenName:(id)arg1;
- (id)relatedNames;
- (void)setRelatedNames:(id)arg1;
- (id)socialProfiles;
- (void)setSocialProfiles:(id)arg1;
- (id)instantMessageAddresses;
- (void)setInstantMessageAddresses:(id)arg1;
- (id)urlAddresses;
- (void)setUrlAddresses:(id)arg1;
- (id)otherDateComponents;
- (void)setOtherDateComponents:(id)arg1;
- (void)setAlternateBirthdayComponents:(id)arg1;
- (id)alternateBirthdayComponents;
- (id)birthdayComponents;
- (void)setBirthdayComponents:(id)arg1;
- (id)emailAddresses;
- (void)setEmailAddresses:(id)arg1;
- (id)phoneNumbers;
- (void)setPhoneNumbers:(id)arg1;
- (id)linkedPeople;
- (void)setLinkedPeople:(id)arg1;
- (void)manuallyAddPropertyKey:(id)arg1;
- (BOOL)hasKeyBeenManuallyAdded:(id)arg1;
- (BOOL)isAvailableForFaceTime;
- (BOOL)keyAvailable:(id)arg1;
- (id)multiValueKeys;
- (BOOL)shouldUseUnifiedPlaceholderForKey:(id)arg1;
- (BOOL)shouldOfferPhoneticName;
- (BOOL)allowsPhotoEditing;
- (id)nameViewKeys;
- (id)phoneticNameKeys;
- (id)nameKeys;
- (BOOL)hasChanges;
- (void)markAsViewed:(id)arg1;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 commandExecutor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

