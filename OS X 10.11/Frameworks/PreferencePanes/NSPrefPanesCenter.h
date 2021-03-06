//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface NSPrefPanesCenter : NSObject
{
    NSMutableArray *_ppBundles;
    NSMutableDictionary *_ppByIdentifier;
    unsigned long long _numIOPrefPanes;
    struct IONotificationPort *_notifyPort;
    unsigned int _ioIterator[16];
}

+ (id)pathOfPreferenceWithIdentifier:(id)arg1;
+ (id)sharedPreferencesCenter;
+ (id)preferencesCacheFilePath;
+ (id)cacheFolderPath;
+ (id)prefPanesDirectories;
+ (id)preferencesDirectoryPath;
- (void)updateCache;
- (void)removePrefPaneFromCache:(id)arg1;
- (void)updateCacheFileWithPrefPane:(id)arg1;
- (id)arrayOfPrefPaneIdentifiers;
- (id)orderedPrefPanes;
- (unsigned long long)indexOfPrefPane:(id)arg1;
- (unsigned long long)indexOfPrefPaneWithBundlePath:(id)arg1;
- (id)prefPaneBundleWithIdentifier:(id)arg1;
- (unsigned long long)indexOfPrefPaneWithIdentifier:(id)arg1;
- (id)prefPaneBundleAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfPrefPanes;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)_prefPanesByIdentifier;
- (id)_prefPaneBundles;
- (void)_checkHWForPreferences:(id)arg1;
- (id)_verifyAndReadCache;
- (void)_writeCache:(id)arg1;

@end

