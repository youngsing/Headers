//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSLock, NSMutableDictionary;

@interface SUDownloadTaskManager : NSObject
{
    NSMutableDictionary *_taskIdentifierToPackageInfo;
    NSMutableDictionary *_errorsToPackageIdentifierDict;
    NSMutableDictionary *_numRetriesToPackageIdentifierDict;
    NSLock *_pkgInfoLock;
    NSLock *_errorLock;
    NSError *_lastError;
}

+ (id)sharedDownloadTaskManager;
@property(retain, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
- (id)description;
- (void)setPackageInfo:(id)arg1 forIdentifier:(id)arg2;
- (id)packageInfoForIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)restoreFromCoder:(id)arg1;
- (void)archiveToCoder:(id)arg1;
- (BOOL)shouldRetryDownloadBasedOnLastErrorForPackageIdentifier:(id)arg1 isNetworkError:(char *)arg2;
- (id)lastErrorForPackageIdentifier:(id)arg1;
- (void)setLastError:(id)arg1 forPackageIdentifier:(id)arg2;

@end
