//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3MusicLibrary;

__attribute__((visibility("hidden")))
@interface ML3SpotlightNameCache : NSObject
{
    struct unordered_map<long long, NSString *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, NSString *>>> _map;
    _Bool _idle;
    ML3MusicLibrary *_library;
}

+ (id)copyFromLibrary:(id)arg1 cancelHandler:(CDUnknownBlockType)arg2;
+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_initWithLibrary:(id)arg1 cancelHandler:(CDUnknownBlockType)arg2;

@end

