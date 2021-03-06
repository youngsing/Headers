//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersistentConnection/NSLocking-Protocol.h>

@class NSString;

@interface PCDistributedLock : NSObject <NSLocking>
{
    NSString *_path;
    int _fd;
}

- (void)unlock;
- (void)lock;
- (BOOL)tryLock;
- (BOOL)_lockBlocking:(BOOL)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)initWithPath:(id)arg1;

@end

