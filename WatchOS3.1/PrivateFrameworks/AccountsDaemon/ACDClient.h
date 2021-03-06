//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACDDatabase, NSMutableDictionary, NSNumber, NSString, NSXPCConnection;

@interface ACDClient : NSObject
{
    NSXPCConnection *_connection;
    ACDDatabase *_database;
    struct __CFBundle *_bundle;
    NSString *_bundleID;
    _Bool _didManuallySetBundleID;
    NSNumber *_pid;
    NSString *_localizedAppName;
    NSString *_name;
    NSMutableDictionary *_entitlementChecks;
}

+ (id)_bundleForPID:(int)arg1;
+ (id)_bundleIDForPID:(int)arg1;
+ (id)_bundleForNonPlugInPID:(int)arg1;
+ (id)clientWithBundleID:(id)arg1;
@property(readonly, nonatomic) ACDDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)longDebugDescription;
- (id)shortDebugDescription;
- (id)debugDescription;
- (id)description;
- (_Bool)hasEntitlement:(id)arg1;
@property(readonly, nonatomic) struct __CFBundle *bundle;
@property(readonly, nonatomic) NSString *adamOrDisplayID;
@property(readonly, nonatomic) NSString *name;
- (id)_displayNameFromBundleInfoDictionaryForPID:(int)arg1;
- (id)_displayNameFromSpringBoardForPID:(int)arg1;
@property(readonly, nonatomic) NSString *localizedAppName;
@property(retain, nonatomic) NSString *bundleID;
@property(readonly, nonatomic) NSNumber *pid;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 database:(id)arg2;
- (id)initWithConnection:(id)arg1;

@end

