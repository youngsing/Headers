//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CN : NSObject
{
}

+ (id)writableContainerProperties;
+ (id)allContainerProperties;
+ (id)containerEnabledDescription;
+ (id)containerTypeDescription;
+ (id)containerNameDescription;
+ (id)containerIdentifierDescription;
+ (void)addLinkedIdentifier:(id)arg1 toLabeledValue:(id)arg2;
+ (unsigned long long)indexOfUnifiedIdentifier:(id)arg1 onNonUnifiedMultiValue:(id)arg2 withIdentifierMap:(id)arg3;
+ (id)groupIdentifiersByLabeledValue:(id)arg1 forProperty:(id)arg2;
+ (id)identifierMapForUnifiedMultiValue:(id)arg1 backingMultiValues:(id)arg2 forProperty:(id)arg3;
+ (id)identifierMapForUnifiedContact:(id)arg1 backingContacts:(id)arg2;
+ (id)unifyContactMatchInfos:(id)arg1 linkedContacts:(id)arg2;
+ (id)unifyMultivalues:(id)arg1 forProperty:(id)arg2;
+ (id)unifyContacts:(id)arg1 includingMainStoreContacts:(BOOL)arg2;
+ (unsigned long long)indexOfPreferredContactsForUnifying:(id)arg1 includingMainStoreContacts:(BOOL)arg2;
+ (id)mapsDataDescription;
+ (id)callAlertDescription;
+ (id)textAlertDescription;
+ (id)phonemeDataDescription;
+ (id)calendarURIsDescription;
+ (id)postalAddressesDescription;
+ (id)socialProfilesDescription;
+ (id)contactRelationsDescription;
+ (id)instantMessagAddressesDescription;
+ (id)datesDescription;
+ (id)urlAddressesDescription;
+ (id)emailAddressesDescription;
+ (id)phoneNumbersDescription;
+ (id)displayNameOrderDescription;
+ (id)contactTypeDescription;
+ (id)preferredForImageDescription;
+ (id)preferredForNameDescription;
+ (id)linkIdentifierDescription;
+ (id)thumbnailImageDataDescription;
+ (id)cropRectDescription;
+ (id)imageDataDescription;
+ (id)noteDescription;
+ (id)creationDateDescription;
+ (id)nonGregorianBirthdayDescription;
+ (id)birthdayDescription;
+ (id)jobTitleDescription;
+ (id)departmentDescription;
+ (id)organizationNameDescription;
+ (id)sortingFamilyNameDescription;
+ (id)sortingGivenNameDescription;
+ (id)phoneticFamilyNameDescription;
+ (id)phoneticMiddleNameDescription;
+ (id)phoneticGivenNameDescription;
+ (id)nicknameDescription;
+ (id)previousFamilyNameDescription;
+ (id)nameSuffixDescription;
+ (id)familyNameDescription;
+ (id)middleNameDescription;
+ (id)givenNameDescription;
+ (id)namePrefixDescription;
+ (id)identifierDescription;
+ (id)contactPropertiesByKey;
+ (id)writableMultiValueContactProperties;
+ (id)writableSingleValueContactProperties;
+ (id)writableContactProperties;
+ (id)multiValueContactProperties;
+ (id)singleValueContactProperties;
+ (id)allNameComponentRelatedProperties;
+ (id)allImageDataPropertyKeys;
+ (id)allImageDataProperties;
+ (id)writableAlwaysFetchedProperties;
+ (id)alwaysFetchedProperties;
+ (id)allContactPropertyKeys;
+ (id)allContactProperties;
+ (CDUnknownBlockType)dateComponentsToDictionaryTransform;
+ (CDUnknownBlockType)dateComponentsFromDictionaryTransform;
+ (CDUnknownBlockType)relatedContactToStringTransform;
+ (CDUnknownBlockType)relatedContactFromStringTransform;
+ (CDUnknownBlockType)postalAddressToDictionaryTransform;
+ (CDUnknownBlockType)postalAddressFromDictionaryTransform;
+ (CDUnknownBlockType)instantMessageAddressToDictionaryTransform;
+ (CDUnknownBlockType)instantMessageAddressFromDictionaryTransform;
+ (CDUnknownBlockType)socialProfileToFoundationProfileTransform;
+ (CDUnknownBlockType)socialProfileToDictionaryTransform;
+ (CDUnknownBlockType)socialProfileFromDictionaryTransform;
+ (CDUnknownBlockType)phoneNumberToStringTransform;
+ (CDUnknownBlockType)phoneNumberFromStringTransform;
+ (CDUnknownBlockType)nullTransform;
+ (BOOL)areValidNonGregorianDayComponents:(id)arg1 error:(id *)arg2;
+ (BOOL)areValidGregorianDayComponents:(id)arg1 error:(id *)arg2;
+ (BOOL)areValidDayComponents:(id)arg1 error:(id *)arg2;
+ (BOOL)areValidKeyPaths:(id)arg1 forObject:(id)arg2 expectedClasses:(id)arg3 allowNil:(id)arg4 error:(id *)arg5;
+ (id)joinNonEmptyContactProperties:(id)arg1 onContact:(id)arg2 withDelimiter:(id)arg3;
+ (id)joinNonEmptyContactProperties:(id)arg1 onContact:(id)arg2;
+ (id)requiredPropertiesForPhoneticNameScriptDetection;
+ (id)requiredPropertiesForNameScriptDetection;
+ (BOOL)isEmptyNameContact:(id)arg1 phonetic:(BOOL)arg2 includingPrefixAndSuffix:(BOOL)arg3;
+ (id)orderForContactName:(id)arg1 phonetic:(BOOL)arg2;
+ (id)orderForContactPhoneticName:(id)arg1;
+ (id)orderForContactName:(id)arg1;
+ (id)localizedPhoneticNameDelimiterForContact:(id)arg1;
+ (id)localizedNameDelimiterForContact:(id)arg1;
+ (BOOL)hasContactChineseJapaneseKoreanPhoneticName:(id)arg1;
+ (BOOL)hasContactChineseJapaneseKoreanName:(id)arg1;
+ (Class)defaultDataMapperClass;

@end

