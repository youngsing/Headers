//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CFPDSourceLookUpKey : NSObject
{
    struct __CFString *domain;
    struct __CFString *userName;
    struct __CFString *containerPath;
    struct __CFString *cloudPath;
    BOOL byHost;
    BOOL managed;
    BOOL cloud;
}

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end
