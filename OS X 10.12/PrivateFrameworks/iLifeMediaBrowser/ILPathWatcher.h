//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ILPathWatcher : NSObject
{
}

+ (id)sharedPathWatcher;
- (void)watchQuery:(id)arg1 observer:(id)arg2 queryScope:(id)arg3 queryRunMode:(int)arg4;
- (BOOL)watchedQueryIsUnique:(id)arg1 observer:(id)arg2;
- (BOOL)isSavedQuery:(id)arg1;
- (void)refreshAllPaths:(id)arg1;
- (void)refreshPath:(id)arg1 observer:(id)arg2;
- (BOOL)watchPathIsUnique:(id)arg1 observer:(id)arg2;
- (void)removeAllPaths:(id)arg1;
- (void)removePath:(id)arg1 observer:(id)arg2;
- (void)watchPath:(id)arg1 observer:(id)arg2;
- (id)_init;
- (id)init;

@end
