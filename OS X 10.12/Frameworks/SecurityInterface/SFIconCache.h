//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SFIconCache : NSObject
{
    id _reserved_SFIconCache;
}

+ (id)sharedIconCache;
- (id)cachedImageForItemClass:(unsigned int)arg1;
- (id)cachedImageForItem:(struct OpaqueSecKeychainItemRef *)arg1;
- (id)cachedImageNamed:(id)arg1;
- (void)dealloc;
- (id)init;

@end

