//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSUKeychainUtils : NSObject
{
}

+ (BOOL)removeGenericItem:(id)arg1 error:(id *)arg2;
+ (BOOL)lookupGenericItem:(id)arg1 account:(id *)arg2 passphrase:(id *)arg3 error:(id *)arg4;
+ (BOOL)lookupGenericItem:(id)arg1 passphrase:(id *)arg2 error:(id *)arg3;
+ (BOOL)setPassphrase:(id)arg1 forGenericItem:(id)arg2 service:(id)arg3 description:(id)arg4 label:(id)arg5 account:(id)arg6 error:(id *)arg7;
+ (BOOL)setPassphrase:(id)arg1 forGenericItem:(id)arg2 service:(id)arg3 description:(id)arg4 label:(id)arg5 error:(id *)arg6;

@end

