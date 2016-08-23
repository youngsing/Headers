//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreBluetooth/NSCopying-Protocol.h>

@class NSData, NSString;

@interface CBUUID : NSObject <NSCopying>
{
    NSData *_data;
    struct _NSRange _range;
}

+ (id)UUIDWithNSUUID:(id)arg1;
+ (id)UUIDWithCFUUID:(struct __CFUUID *)arg1;
+ (id)UUIDWithData:(id)arg1;
+ (id)UUIDWithString:(id)arg1;
+ (BOOL)isBluetoothSIGUUID:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *UUIDString;
@property(readonly, nonatomic) NSData *data; // @dynamic data;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithNSUUID:(id)arg1;
- (id)initWithCFUUID:(struct __CFUUID *)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithString:(id)arg1;

@end

