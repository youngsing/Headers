//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _PFExternalReferenceData : NSData
{
    NSData *_originalData;
    void *_bytesPtrForStore;
    unsigned long long _bytesLengthForStore;
    void *_bytesPtrForExternalReference;
    unsigned long long _bytesLengthForExternalReference;
    NSString *_externalReferenceLocation;
    NSString *_safeguardLocation;
    id _ubiquitousLocation;
    struct __externalDataFlags {
        unsigned int _isStoredExternally:1;
        unsigned int _hasMappedData:1;
        unsigned int _cleanupOnDealloc:1;
        unsigned int _dataProtectionLevel:3;
        unsigned int _isStoredUbiquitously:1;
        unsigned int _createdByUbiquityImport:1;
        unsigned int _reserved:24;
    } _externalDataFlags;
}

+ (BOOL)_releaseReservedMapFileDescriptor;
+ (BOOL)_reserveMapFileDescriptor;
+ (BOOL)_updateFileDescriptorsInUseReserveNew:(BOOL)arg1;
- (BOOL)_createdByUbiquityImport;
- (BOOL)isEqualToData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)_isEqualHelper:(id)arg1;
- (id)subdataWithRange:(struct _NSRange)arg1;
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;
- (void)doCleanupOnDealloc;
- (id)UUID;
- (id)databaseValue;
- (id)filename;
- (id)externalReferenceLocationString;
- (int)preferredProtectionLevel;
- (id)_safeguardLocationString;
- (const char *)_safeguardLocation;
- (id)_externalReferenceLocationString;
- (const char *)_externalReferenceLocation;
- (unsigned long long)_bytesLengthForExternalReference;
- (const void *)_bytesPtrForExternalReference;
- (unsigned long long)_bytesLengthForStore;
- (const void *)_bytesPtrForStore;
- (unsigned long long)length;
- (const void *)bytes;
- (id)description;
- (BOOL)hasExternalReferenceContent;
- (void)_deleteExternalReferenceFromPermanentLocation;
- (void)_moveExternalReferenceToPermanentLocation;
- (void)_writeExternalReferenceToInterimLocation;
- (const void *)_retrieveExternalData;
- (id)_exceptionForReadError:(id)arg1;
- (BOOL)_attemptToMapData:(id *)arg1;
- (void)_setBytesForExternalReference:(const void *)arg1;
- (id)_originalData;
- (id)mutableCopy;
- (id)copy;
- (void)finalize;
- (void)dealloc;
- (Class)classForArchiver;
- (Class)classForCoder;
- (void)_doCleanup;
- (id)initWithStoreBytes:(const void *)arg1 length:(unsigned long long)arg2 externalLocation:(id)arg3 safeguardLocation:(id)arg4 protectionLevel:(int)arg5 ubiquitousLocation:(id)arg6;
- (id)initWithStoreBytes:(const void *)arg1 length:(unsigned long long)arg2 externalLocation:(id)arg3 safeguardLocation:(id)arg4 protectionLevel:(int)arg5;
- (id)initForExternalLocation:(id)arg1 safeguardLocation:(id)arg2 data:(id)arg3 protectionLevel:(int)arg4;
- (id)initForUbiquityDictionary:(id)arg1 store:(id)arg2;
- (id)constructSafeguardStringFromString:(id)arg1;

@end

