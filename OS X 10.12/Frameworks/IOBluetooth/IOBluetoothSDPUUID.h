//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface IOBluetoothSDPUUID : NSData
{
    NSData *mUUIDData;
    void *_mReserved;
}

+ (id)withSDPUUIDRef:(struct OpaqueIOBluetoothObjectRef *)arg1;
+ (id)uuid32:(unsigned int)arg1;
+ (id)uuid16:(unsigned short)arg1;
+ (id)uuidWithData:(id)arg1;
+ (id)uuidWithBytes:(const void *)arg1 length:(unsigned int)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForPortCoder;
- (Class)classForArchiver;
- (Class)classForCoder;
- (BOOL)isEqualToUUID:(id)arg1;
- (BOOL)isEqualToData:(id)arg1;
- (id)getUUIDWithLength:(unsigned int)arg1;
- (unsigned long long)length;
- (const void *)bytes;
- (struct OpaqueIOBluetoothObjectRef *)getSDPUUIDRef;
- (id)initWithUUID32:(unsigned int)arg1;
- (id)initWithUUID16:(unsigned short)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;

@end

