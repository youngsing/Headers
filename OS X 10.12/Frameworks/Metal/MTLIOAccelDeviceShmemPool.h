//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MTLIOAccelDeviceShmemPool : NSObject
{
    struct _MTLIOAccelDeviceShmemPoolPrivate _priv;
}

- (void)prune;
- (void)setShmemSize:(unsigned int)arg1;
- (unsigned int)shmemSize;
- (void)purge;
- (int)availableCount;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 resourceClass:(Class)arg2 shmemSize:(unsigned int)arg3 options:(id)arg4;

@end
