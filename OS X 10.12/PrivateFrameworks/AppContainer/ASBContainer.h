//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASBContainerACL, NSData, NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface ASBContainer : NSObject
{
    NSString *_homeDirPath;
    NSString *_containerPath;
    NSString *_metadataPath;
    NSString *_dataPath;
    NSMutableDictionary *_metadata;
    ASBContainerACL *_acl;
}

+ (id)containerForApplicationAtURL:(id)arg1 error:(id *)arg2;
+ (id)containerForCodeIdentity:(id)arg1 error:(id *)arg2;
+ (id)containerForAppSigningId:(id)arg1 error:(id *)arg2;
+ (id)containerWithURL:(id)arg1 error:(id *)arg2;
+ (id)containerURLForApplicationAtURL:(id)arg1;
+ (id)containerURLForApplicationAtURL:(id)arg1 error:(id *)arg2;
+ (id)containerURLForCodeIdentity:(id)arg1;
+ (id)containerURLForCodeIdentity:(id)arg1 error:(id *)arg2;
+ (id)containerURLForAppSigningId:(id)arg1;
+ (id)containerIdentifierForAppSigningId:(id)arg1;
+ (id)sanitizedPath:(id)arg1;
+ (id)_userHomeDirectory:(id *)arg1;
+ (void)_setUserHomeDirectory:(id)arg1;
+ (unsigned long long)currentVersion;
- (void).cxx_destruct;
- (BOOL)setError:(id *)arg1 message:(id)arg2 forPath:(id)arg3 withDomain:(id)arg4 code:(long long)arg5;
@property(readonly) NSDictionary *sandboxProfileDataValidationInfo; // @dynamic sandboxProfileDataValidationInfo;
@property(readonly) NSData *sandboxProfileData; // @dynamic sandboxProfileData;
- (id)archivedFilesMatchingPath:(id)arg1 error:(id *)arg2;
- (BOOL)tryLoadVersionedContainer:(id *)arg1;
- (BOOL)tryLoadOldContainer:(id *)arg1;
- (id)requirementACL;
- (BOOL)hasLatestSchema;
- (void)resetVersion;
@property(readonly) unsigned long long version; // @dynamic version;
- (id)rebasedFileURL:(id)arg1;
@property(readonly) NSURL *dataURL; // @dynamic dataURL;
@property(readonly) NSURL *baseURL; // @dynamic baseURL;
- (id)initWithApplicationAtURL:(id)arg1 error:(id *)arg2;
- (id)initWithCodeIdentity:(id)arg1 error:(id *)arg2;
- (id)initWithAppSigningId:(id)arg1 error:(id *)arg2;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (id)initWithPath:(id)arg1 error:(id *)arg2;
- (id)userHomeDirectory:(id *)arg1;

@end

