//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet;

__attribute__((visibility("hidden")))
@interface ABMetadataIgnoredDirectories : NSObject
{
    NSCountedSet *_ignoredDirectories;
}

- (BOOL)shouldIngoreDirectory:(id)arg1;
- (void)removeDirectory:(id)arg1;
- (void)addDirectory:(id)arg1;
- (void)runWithIgnoredDirectory:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

