//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/ABLocking-Protocol.h>

@class NSString;
@protocol ABFileServices, ABLocking;

@interface ABProcessSharedLock : NSObject <ABLocking>
{
    NSString *_lockFilePath;
    NSString *_name;
    id <ABLocking> _localLock;
    long long _localLockCount;
    int _fileDescriptor;
    id <ABFileServices> _fileServices;
}

+ (id)semaphoreSharedLockWithLockFilePath:(id)arg1;
+ (id)recursiveSharedLockWithLockFilePath:(id)arg1;
+ (id)sharedLockWithLockFilePath:(id)arg1;
@property(readonly, copy) NSString *lockFilePath; // @synthesize lockFilePath=_lockFilePath;
@property(copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *description;
- (id)errorUserInfoWithDescription:(id)arg1;
- (id)errorUserInfo;
- (id)exceptionWithName:(id)arg1 reason:(id)arg2;
- (BOOL)isValidFileDescriptor;
- (void)unlock;
- (void)lock;
- (BOOL)isValid;
- (void)invalidate;
- (BOOL)ensureFileIsLocal:(CDUnknownBlockType)arg1;
- (BOOL)openLockFile:(CDUnknownBlockType)arg1;
- (BOOL)ensureFileDescriptorIsInvalid:(CDUnknownBlockType)arg1;
- (BOOL)open:(id *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithLockFilePath:(id)arg1 localLock:(id)arg2 fileServices:(id)arg3;
- (id)initWithLockFilePath:(id)arg1 localLock:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

