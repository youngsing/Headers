//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ABBuddyStatus : NSObject
{
    Class IMService;
    NSMutableDictionary *cache;
}

+ (BOOL)showStatus;
+ (id)sharedBuddyStatus;
- (void)updateStatus:(id)arg1;
- (void)statusUpdate:(id)arg1;
- (id)abServiceKeyForHandle:(id)arg1;
- (BOOL)isHandleAvailable:(id)arg1;
- (BOOL)isAvailable:(id)arg1;
- (id)statusImageForPerson:(id)arg1;
- (unsigned long long)statusForPerson:(id)arg1;
- (void)dealloc;
- (id)init;

@end
