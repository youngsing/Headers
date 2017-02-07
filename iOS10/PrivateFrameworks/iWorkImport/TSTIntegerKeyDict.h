//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSTIntegerKeyDict : NSObject
{
    struct hash_map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, TSTIntHasher, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject>>>> *mMap;
}

- (id)description;
- (id)allValues;
- (long long)count;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)transformWithFunction:(CDUnknownFunctionPointerType)arg1 withState:(void *)arg2;
- (void)applyFunction:(CDUnknownFunctionPointerType)arg1 withState:(void *)arg2 andState:(void *)arg3;
- (void)applyFunction:(CDUnknownFunctionPointerType)arg1 withState:(void *)arg2;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(unsigned int)arg1;
- (void)removeFirstObject;
- (void)setObject:(id)arg1 forKey:(unsigned int)arg2;
- (id)objectForKey:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end
