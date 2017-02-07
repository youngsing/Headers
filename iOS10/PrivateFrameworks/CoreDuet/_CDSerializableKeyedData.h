//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface _CDSerializableKeyedData : NSObject
{
    NSData *_encodedKey;
    unsigned char _keyChecksum;
    unsigned char _dataChecksum;
    _Bool _dataChecksumNeedsUpdate;
    NSString *_key;
    NSData *_data;
}

+ (id)dataDeseralizedFrom:(void *)arg1 maxSize:(unsigned long long)arg2 checksum:(char *)arg3 bytesRead:(unsigned long long *)arg4;
+ (id)log;
+ (id)errorForInvalidKeyEncoding;
+ (unsigned char)byteChecksumOfData:(id)arg1;
+ (id)keyedDataDeserializedFrom:(void *)arg1 maxSize:(unsigned long long)arg2;
@property(readonly) NSData *data; // @synthesize data=_data;
@property(readonly) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (unsigned long long)serializeData:(id)arg1 withChecksum:(unsigned char)arg2 to:(void *)arg3;
- (unsigned long long)serializeTo:(void *)arg1 maxSize:(unsigned long long)arg2;
- (unsigned long long)sizeWhenSerialized;
- (_Bool)setData:(id)arg1;
- (id)initWithKey:(id)arg1 data:(id)arg2 error:(id *)arg3;

@end
