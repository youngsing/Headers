//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSLocking-Protocol.h>

@interface NSMultiReadUniWriteLock : NSObject <NSLocking>
{
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (void)unlock;
- (void)lock;
- (BOOL)lockForWritingBeforeDate:(id)arg1;
- (BOOL)tryLockForWriting;
- (void)lockForWriting;
- (BOOL)lockForReadingBeforeDate:(id)arg1;
- (BOOL)tryLockForReading;
- (void)lockForReading;
- (void)dealloc;
- (id)init;

@end
