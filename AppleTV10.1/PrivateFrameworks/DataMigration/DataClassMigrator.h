//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface DataClassMigrator : NSObject
{
    NSDictionary *_context;
    _Bool _didUpgrade;
}

+ (id)dataClassMigratorForBundleAtPath:(id)arg1;
@property(nonatomic) _Bool didUpgrade; // @synthesize didUpgrade=_didUpgrade;
@property(retain, nonatomic) NSDictionary *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (float)migrationProgress;
- (float)estimatedDuration;
- (_Bool)performMigration;
- (id)dataClassName;
@property(readonly, nonatomic) _Bool wasPasscodeSetInBackup;
@property(readonly, nonatomic) _Bool shouldPreserveSettingsAfterRestore;
@property(readonly, nonatomic) _Bool didRestoreFromCloudBackup;
@property(readonly, nonatomic) _Bool didMigrateBackupFromDifferentDevice;
@property(readonly, nonatomic) _Bool didRestoreFromBackup;

@end

