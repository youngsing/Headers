//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNContact.h>

@class CNActivityAlert, NSArray, NSData, NSDate, NSDateComponents, NSDictionary, NSSet, NSString;

@interface CNMutableContact : CNContact
{
    BOOL _hasChanges;
}

+ (id)unifyContacts:(id)arg1;
@property(readonly) BOOL hasChanges; // @synthesize hasChanges=_hasChanges;
@property(copy, nonatomic) NSArray *linkedContacts; // @dynamic linkedContacts;
@property(copy, nonatomic) NSSet *availableKeys;
@property(copy, nonatomic) CNContact *snapshot; // @dynamic snapshot;
- (void)setNilValueForKey:(id)arg1;
@property(copy, nonatomic) NSDictionary *storeInfo; // @dynamic storeInfo;
@property(copy, nonatomic) NSString *storeIdentifier; // @dynamic storeIdentifier;
@property(copy, nonatomic) NSArray *calendarURIs; // @dynamic calendarURIs;
@property(copy) NSArray *postalAddresses; // @dynamic postalAddresses;
@property(copy) NSArray *socialProfiles; // @dynamic socialProfiles;
@property(copy) NSArray *contactRelations; // @dynamic contactRelations;
@property(copy) NSArray *instantMessageAddresses; // @dynamic instantMessageAddresses;
@property(copy) NSArray *dates; // @dynamic dates;
@property(copy) NSArray *urlAddresses; // @dynamic urlAddresses;
@property(copy) NSArray *emailAddresses; // @dynamic emailAddresses;
@property(copy) NSArray *phoneNumbers; // @dynamic phoneNumbers;
@property(copy, nonatomic) NSDictionary *activityAlerts; // @dynamic activityAlerts;
@property(copy) NSString *mapsData;
@property(copy) CNActivityAlert *textAlert; // @dynamic textAlert;
@property(copy) CNActivityAlert *callAlert; // @dynamic callAlert;
@property(copy) NSString *phonemeData; // @dynamic phonemeData;
@property(copy, nonatomic) NSString *accountIdentifier; // @dynamic accountIdentifier;
@property(copy, nonatomic) NSString *cardDAVUID; // @dynamic cardDAVUID;
@property long long displayNameOrder; // @dynamic displayNameOrder;
@property long long contactType; // @dynamic contactType;
@property(nonatomic, getter=isPreferredForImage) BOOL preferredForImage; // @dynamic preferredForImage;
- (BOOL)preferredForImage;
@property(nonatomic, getter=isPreferredForName) BOOL preferredForName; // @dynamic preferredForName;
- (BOOL)preferredForName;
@property(copy, nonatomic) NSString *linkIdentifier; // @dynamic linkIdentifier;
@property(copy) NSData *thumbnailImageData;
@property struct CGRect cropRect;
@property(copy) NSData *imageData;
@property(copy) NSString *note; // @dynamic note;
@property(copy) NSDate *creationDate; // @dynamic creationDate;
@property(copy) NSDateComponents *nonGregorianBirthday; // @dynamic nonGregorianBirthday;
@property(copy) NSDateComponents *birthday; // @dynamic birthday;
@property(copy) NSString *jobTitle; // @dynamic jobTitle;
@property(copy) NSString *departmentName; // @dynamic departmentName;
@property(copy) NSString *organizationName; // @dynamic organizationName;
@property(copy) NSString *sortingFamilyName; // @dynamic sortingFamilyName;
@property(copy) NSString *sortingGivenName; // @dynamic sortingGivenName;
@property(copy) NSString *phoneticFamilyName; // @dynamic phoneticFamilyName;
@property(copy) NSString *phoneticMiddleName; // @dynamic phoneticMiddleName;
@property(copy) NSString *phoneticGivenName; // @dynamic phoneticGivenName;
@property(copy) NSString *nickname; // @dynamic nickname;
@property(copy) NSString *previousFamilyName; // @dynamic previousFamilyName;
@property(copy) NSString *nameSuffix; // @dynamic nameSuffix;
@property(copy) NSString *familyName; // @dynamic familyName;
@property(copy) NSString *middleName; // @dynamic middleName;
@property(copy) NSString *givenName; // @dynamic givenName;
@property(copy) NSString *namePrefix; // @dynamic namePrefix;
- (id)freezeWithSelfAsSnapshot;
- (id)freeze;
- (id)copyWithSelfAsSnapshot;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContact:(id)arg1;
@property(copy) NSArray *relatedNames;
@property(copy) NSString *companyName; // @dynamic companyName;
@property(copy) NSString *phoneticLastName; // @dynamic phoneticLastName;
@property(copy) NSString *phoneticFirstName; // @dynamic phoneticFirstName;
@property(copy) NSString *maidenName; // @dynamic maidenName;
@property(copy) NSString *lastName; // @dynamic lastName;
@property(copy) NSString *firstName; // @dynamic firstName;
@property(copy) NSString *nameTitle; // @dynamic nameTitle;

// Remaining properties
@property(copy) NSData *fullscreenImageData; // @dynamic fullscreenImageData;
@property(copy) NSString *pronunciationFamilyName; // @dynamic pronunciationFamilyName;
@property(copy) NSString *pronunciationGivenName; // @dynamic pronunciationGivenName;

@end

