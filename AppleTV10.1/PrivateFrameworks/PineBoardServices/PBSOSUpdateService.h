//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PBSOSUpdateService : NSObject
{
}

+ (id)sharedInstance;
- (void)obliterateDataPreservingPaths:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)cancelUpdate;
- (void)isUpdateRunningWithCompletion:(CDUnknownBlockType)arg1;
- (void)restore;
- (void)checkForUpdate;
- (void)setDelegate:(id)arg1;

@end

