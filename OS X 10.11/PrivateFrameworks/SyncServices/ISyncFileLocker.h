//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ISyncFileLocker : NSObject
{
    NSString *_path;
    NSString *_hostname;
    NSString *_hostuuid;
    NSObject *_delegate;
    double _secondsToTimeout;
    int _lockResult;
}

+ (void)_cleanupStaleLockDirectoriesAtPath:(id)arg1;
+ (id)stringFromISyncLockPotentialAction:(int)arg1;
+ (id)stringFromISyncLockResult:(int)arg1;
+ (void)cleanupStaleLockDirectories;
- (int)actionForApparentlyAbandonedLock:(id)arg1 onAttempt:(int)arg2;
- (BOOL)changeRetainCountIncrementing:(BOOL)arg1 error:(id *)arg2;
- (id)processProfile;
- (BOOL)matchesHostUUIDFromLockDictionary:(id)arg1;
- (BOOL)matchesHostNameFromLockDictionary:(id)arg1;
- (id)computeHostname;
- (BOOL)isOnLocalHost;
- (id)UUIDString;
- (BOOL)createLockDirectory:(id *)arg1;
- (int)actionOnVerifyIfLockInfoFileProcessIsRunning:(id)arg1 reason:(out id *)arg2;
- (BOOL)_checkPIDisRunning:(long long)arg1;
- (int)actionOnVerifyFileAgeAndReturnReason:(out id *)arg1;
- (int)actionOnVerifyLockInfoFileAgainstCurrentProcess:(id)arg1 reason:(out id *)arg2;
- (int)actionTestingDirectoryExistance:(id)arg1;
- (BOOL)removeLockDirectoryAndReturnError:(id *)arg1;
- (BOOL)updateLockFileAndReturnError:(id *)arg1;
- (BOOL)writeLockInfoFile:(id)arg1 error:(id *)arg2;
- (BOOL)isLockStaleOnNFS;
- (int)lockFileResultByAnalyzingLockFile:(id)arg1 reasonIfStealable:(out id *)arg2;
- (id)lockInfoForDelegate:(id)arg1;
- (id)lockFileContentsDictionary;
- (BOOL)decrementCountAndReturnError:(id *)arg1;
- (BOOL)incrementCountAndReturnError:(id *)arg1;
- (unsigned long long)refCount;
- (id)staleLockDirectoryPath;
- (id)lockFilePath;
- (id)lockDirectoryPath;
- (void)cleanupStaleLockDirectories;
- (id)path;
- (void)removeLockDirectory;
- (void)refresh;
- (void)unlock;
- (int)lock;
- (void)dealloc;
- (id)initWithPath:(id)arg1 delegate:(id)arg2 timeout:(double)arg3;

@end

