//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface ISDQuickDirtyCoder : NSObject
{
    NSMutableDictionary *_userInfo;
    id _data;
    const void *_bytes;
    NSMutableDictionary *_classVersionTable;
    NSMutableDictionary *_stringIndexTable;
    NSMutableArray *_strings;
    NSString *_path;
    BOOL _isReading;
    id _delegate;
    id _recordid;
    NSString *_propertyName;
}

- (id)decodeObject;
- (BOOL)isNextObjectOfType:(int)arg1;
- (void)encodeObject:(id)arg1;
- (id)decodeChangeDelta;
- (void)encodeChangeDelta:(id)arg1;
- (id)decodeChange;
- (void)encodeChange:(id)arg1;
- (id)decodeRecordIdMapper;
- (void)encodeRecordIdMapper:(id)arg1;
- (void)encodeGlobalId:(id)arg1;
- (id)decodeGlobalId;
- (id)decodeRecordIdMap;
- (void)encodeRecordIdMap:(id)arg1;
- (id)decodePropertyValue;
- (void)encodePropertyValue:(id)arg1;
- (id)decodeDictionary;
- (void)encodeDictionary:(id)arg1;
- (id)decodeSet;
- (void)encodeSet:(id)arg1;
- (id)decodeArray;
- (void)encodeArray:(id)arg1;
- (id)decodeColor;
- (void)encodeColor:(id)arg1;
- (id)decodeURL;
- (void)encodeURL:(id)arg1;
- (id)decodeCalendarDate;
- (void)encodeCalendarDate:(id)arg1;
- (id)decodeDate;
- (void)encodeDate:(id)arg1;
- (id)decodeDecimalNumber;
- (void)encodeDecimalNumber:(id)arg1;
- (id)decodeNumber;
- (void)encodeNumber:(id)arg1;
- (id)decodeData;
- (void)encodeData:(id)arg1;
- (id)decodeString;
- (void)encodeString:(id)arg1;
- (id)decodeNull;
- (void)encodeNull;
- (void)encodeBytes:(const void *)arg1 ofLength:(unsigned short)arg2;
- (const void *)decodeBytesWithReturnedLength:(unsigned short *)arg1;
- (double)decodeDouble;
- (void)encodeDouble:(double)arg1;
- (long long)decodeSignedInt64;
- (void)encodeSignedInt64:(long long)arg1;
- (int)decodeSignedInt32;
- (void)encodeSignedInt32:(int)arg1;
- (short)decodeSignedInt16;
- (void)encodeSignedInt16:(short)arg1;
- (BOOL)decodeSignedInt8;
- (void)encodeSignedInt8:(BOOL)arg1;
- (unsigned long long)decodeUnsignedInt64;
- (void)encodeUnsignedInt64:(unsigned long long)arg1;
- (unsigned int)decodeUnsignedInt32;
- (void)encodeUnsignedInt32:(unsigned int)arg1;
- (unsigned short)decodeUnsignedInt16;
- (void)encodeUnsignedInt16:(unsigned short)arg1;
- (unsigned char)decodeUnsignedInt8;
- (void)encodeUnsignedInt8:(unsigned char)arg1;
- (void)finishDecoding;
- (BOOL)finishEncoding;
- (BOOL)decodeArchiveHeader;
- (void)encodeArchiveHeader;
- (void)decodeClassVersionTable:(unsigned long long)arg1;
- (void)encodeClassVersionTable;
- (unsigned long long)addClassToClassTable:(Class)arg1;
- (long long)versionForClass:(Class)arg1;
- (void)decodeStringTable:(unsigned long long)arg1;
- (void)encodeStringTable;
- (unsigned long long)addStringToStringTable:(id)arg1;
- (void)setPropertyNameForDelegate:(id)arg1;
- (void)setRecordIdentifierForDelegate:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)userInfo;
- (void)dealloc;
- (id)initForReadingWithFile:(id)arg1;
- (id)initForReadingWithData:(id)arg1;
- (id)initForWritingToFile:(id)arg1;
- (void)resetForWritingWithMutableData:(id)arg1;
- (id)initForWritingWithMutableData:(id)arg1;
- (id)decodeDataWrapper;
- (void)encodeDataWrapper:(id)arg1;

@end

