//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSUUID.h>

__attribute__((visibility("hidden")))
@interface __NSConcreteUUID : NSUUID
{
    unsigned char _uuidBytes[16];
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)classForCoder;
- (id)description;
- (id)UUIDString;
- (CDStruct_bd2f613f)_cfUUIDBytes;
- (void)getUUIDBytes:(unsigned char [16])arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithUUIDBytes:(unsigned char [16])arg1;
- (id)initWithUUIDString:(id)arg1;
- (id)init;

@end

