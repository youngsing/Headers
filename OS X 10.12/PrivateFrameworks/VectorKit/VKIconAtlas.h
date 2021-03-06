//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMapTable, VKPIconPack;

__attribute__((visibility("hidden")))
@interface VKIconAtlas : NSObject
{
    VKPIconPack *_iconPack;
    struct _GEOGenericContainer<md::IconCacheKey, id, std::__1::hash<md::IconCacheKey>, std::__1::equal_to<md::IconCacheKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type> _artworkPool;
    NSMapTable *_atlasToImages;
    NSLock *_atlasToImagesLock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGImage *)_createImageForIconInfo:(id)arg1 contentScale:(double)arg2;
- (struct CGImage *)_createImageForName:(id)arg1 contentScale:(double)arg2 size:(long long)arg3;
- (id)artworkForName:(id)arg1 style:(struct VKIconStyleInfo *)arg2 contentScale:(double)arg3 size:(long long)arg4 hasText:(_Bool)arg5 includeFullBleedColor:(BOOL)arg6;
- (id)artworkForStyleAttributeKey:(unsigned int)arg1 value:(unsigned int)arg2 style:(struct VKIconStyleInfo *)arg3 contentScale:(double)arg4 size:(long long)arg5 hasText:(_Bool)arg6 includeFullBleedColor:(BOOL)arg7;
- (id)artworkForStyleAttributeKey:(unsigned int)arg1 longValue:(unsigned long long)arg2 style:(struct VKIconStyleInfo *)arg3 contentScale:(double)arg4 size:(long long)arg5 includeFullBleedColor:(BOOL)arg6;
- (struct CGColor *)_newFullBleedColorForName:(id)arg1 contentScale:(double)arg2;
- (id)_artworkForBaseImage:(struct CGImage *)arg1 additionalImage:(struct CGImage *)arg2 fullBleedColor:(struct CGColor *)arg3 style:(struct VKIconStyleInfo *)arg4 contentScale:(double)arg5 hasText:(_Bool)arg6;
- (void)dealloc;
- (id)initWithIconPack:(id)arg1;
- (id)init;

@end

