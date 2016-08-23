//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock;

@interface NSPrefPaneSearchCenter : NSObject
{
    struct __SKIndex *mIndexRef;
    BOOL mValidated;
    BOOL mDebug;
    NSLock *mSKLock;
}

+ (id)preferencesSearchIndexCacheFilePath;
+ (id)sharedCenter;
- (void)setValidated;
- (id)searchString:(id)arg1 inPreferencePane:(id)arg2;
- (id)searchString:(id)arg1;
- (BOOL)openSearchIndex;
- (void)createSearchIndexForPrefPaneBundles:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

