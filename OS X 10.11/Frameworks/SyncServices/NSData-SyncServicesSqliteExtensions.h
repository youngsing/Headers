//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (SyncServicesSqliteExtensions)
+ (id)isd_propertyValueWithType:(int)arg1 bytesEncodedForSqlite:(const void *)arg2;
- (int)isd_sqlitePropertyValueType;
- (void *)isd_bytesEncodedForSqlite;
- (id)isd_initWithBytesEncodedForSqlite:(const void *)arg1;
@end

