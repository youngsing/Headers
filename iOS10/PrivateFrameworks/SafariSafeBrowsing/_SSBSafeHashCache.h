//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface _SSBSafeHashCache : NSObject
{
    struct unique_ptr<SafeBrowsing::SafeHashCache, std::__1::default_delete<SafeBrowsing::SafeHashCache>> _cache;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clear;
- (_Bool)containsHashesForURL:(id)arg1;
- (void)addHashesForURL:(id)arg1;
- (id)init;

@end

