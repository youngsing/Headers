//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSCopying-Protocol.h>

@class NSDocInfo, NSString;

@interface NSLeafProxy <NSCopying>
{
    Class isa;
    NSString *dir;
    NSString *file;
    NSDocInfo *docInfo;
    long long refCount;
    id realObject;
}

+ (void)forwardInvocation:(id)arg1;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (BOOL)isProxy;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)autorelease;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)release;
- (id)retain;
- (void)reallyDealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initDir:(id)arg1 file:(id)arg2 docInfo:(id)arg3;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;

@end

