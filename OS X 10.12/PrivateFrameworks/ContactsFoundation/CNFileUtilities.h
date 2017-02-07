//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CNFileServices;

@interface CNFileUtilities : NSObject
{
    id <CNFileServices> _services;
}

+ (id)requestSharedLockDirectoryURLWithFileServices:(id)arg1;
+ (id)sharedLockDirectoryURLWithFileServices:(id)arg1;
+ (id)sharedInstance;
- (id)proxyLockUrlForFileAtUrl:(id)arg1;
- (id)sharedLockUrlWithName:(id)arg1;
- (id)sharedLockDirectoryUrl;
- (BOOL)isFileAtUrlOnARemoteFileSystem:(id)arg1;
- (void)dealloc;
- (id)initWithFileServices:(id)arg1;
- (id)init;

@end
