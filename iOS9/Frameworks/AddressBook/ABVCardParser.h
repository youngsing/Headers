//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ABVCardLexer, ABVCardValueSetter, NSData, NSMutableArray, NSMutableDictionary, NSMutableString, NSString;

@interface ABVCardParser : NSObject
{
    ABVCardValueSetter *_valueSetter;
    void *_source;
    ABVCardLexer *_lexer;
    NSData *_data;
    unsigned long long _defaultEncoding;
    _Bool _hasImportErrors;
    _Bool _30vCard;
    NSString *_first;
    NSString *_last;
    NSString *_org;
    NSString *_formattedName;
    NSMutableArray *_emails;
    NSMutableArray *_dates;
    NSMutableArray *_phones;
    NSMutableArray *_addresses;
    NSMutableArray *_aims;
    NSMutableArray *_jabbers;
    NSMutableArray *_msns;
    NSMutableArray *_yahoos;
    NSMutableArray *_icqs;
    NSMutableArray *_untypedIMs;
    NSMutableArray *_instantMessengers;
    NSMutableArray *_socialProfiles;
    NSMutableArray *_relatedNames;
    NSMutableArray *_urls;
    NSMutableDictionary *_activityAlerts;
    NSMutableString *_notes;
    NSMutableString *_otherNotes;
    NSMutableDictionary *_extensions;
    NSString *_uid;
    NSData *_imageData;
    NSString *_imageURI;
    int _cropRectX;
    int _cropRectY;
    int _cropRectWidth;
    int _cropRectHeight;
    NSData *_cropRectChecksum;
    NSMutableArray *_itemParameters;
    NSString *_grouping;
    unsigned long long _encoding;
    _Bool _quotedPrintable;
    _Bool _base64;
}

+ (struct __CFArray *)supportedProperties;
- (id)_valueSetter;
- (id)sortedPeopleAndProperties:(const struct __CFArray **)arg1;
- (struct __CFArray *)peopleAndProperties:(const struct __CFArray **)arg1;
- (void *)copyNextPersonWithLength:(int *)arg1 foundProperties:(const struct __CFArray **)arg2;
- (_Bool)importToValueSetter:(id)arg1;
- (_Bool)importToPerson:(void *)arg1 foundProperties:(const struct __CFArray **)arg2;
- (_Bool)parseItem;
- (_Bool)_usesRemainingLineForExternalPropKey:(id)arg1;
- (_Bool)_usesArrayForExternalPropKey:(id)arg1;
- (_Bool)_handleUnknownTag:(id)arg1 withValue:(id)arg2;
- (_Bool)parseABReleatedNames;
- (void)parseABOrder;
- (void)parseABShowAs;
- (void)parseABPhoto;
- (_Bool)parsePhoto:(id)arg1;
- (_Bool)parseABDATE;
- (_Bool)parseAlternateBirthday;
- (_Bool)parseBDAY;
- (id)dateFromISO8601String:(id)arg1;
- (_Bool)parseActivityAlerts;
- (_Bool)addIMValueTo:(id)arg1;
- (_Bool)parseIMPP;
- (id)parseInstantMessengerProfile:(id)arg1;
- (_Bool)parseSocialProfiles;
- (id)_socialProfileService;
- (id)_socialProfileDisplayName;
- (id)_socialProfileUsername;
- (id)_socialProfileUserId;
- (_Bool)parseABExtensionType:(id)arg1;
- (_Bool)parseADD;
- (_Bool)parseADR;
- (_Bool)parseTEL;
- (_Bool)parseEMAIL;
- (_Bool)parseUID;
- (_Bool)parseABUID;
- (id)phoneLabel;
- (id)defaultURLLabel;
- (id)defaultADRLabel;
- (id)defaultLabel;
- (id)genericLabel;
- (id)_genericLabel;
- (id)parseURL;
- (id)parseValueArray;
- (id)parseRemainingLine;
- (id)parseSingleValue;
- (_Bool)parseORG;
- (_Bool)parseABMaiden;
- (_Bool)parseNICKNAME;
- (_Bool)parseN;
- (_Bool)_setMultiValuesOrNoteIfNull:(id)arg1 forProperty:(unsigned int)arg2 valueComparator:(CDUnknownBlockType)arg3;
- (_Bool)_setStringValueOrNoteIfNull:(id)arg1 forProperty:(unsigned int)arg2;
- (_Bool)_setDataValueOrNoteIfNull:(id)arg1 forProperty:(unsigned int)arg2;
- (_Bool)_setIntValueOrNoteIfNull:(int)arg1 forProperty:(int)arg2;
- (void)setLocalRecordHasAdditionalProperties:(_Bool)arg1;
- (void)noteLackOfValueForImageData;
- (void)noteLackOfValueForProperty:(unsigned int)arg1;
- (_Bool)parseVERSION;
- (void)addActivityAlertMultiValues;
- (_Bool)_setPersonSounds:(void *)arg1 identifier:(int)arg2 fromActivity:(id)arg3 alert:(id)arg4 otherValue:(id)arg5;
- (void)addInstantMessageMultiValues;
- (int)_addIMPPProfiles:(id)arg1 multiValue:(void *)arg2 uniquenessCheckingMultiValue:(void *)arg3;
- (int)_addIMHandles:(id)arg1 toService:(struct __CFString *)arg2 multiValue:(void *)arg3 uniquenessCheckingMultiValue:(void *)arg4;
- (void)addSocialProfileMultiValues;
- (void)addAddressMultiValues;
- (void)addMultiValues:(id)arg1 toProperty:(unsigned int)arg2 valueComparator:(CDUnknownBlockType)arg3;
@property(nonatomic) void *source;
- (void)cleanUpCardState;
- (_Bool)hasImportErrors;
- (void)finalize;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end

