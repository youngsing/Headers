//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString;

@interface NonPersistentExclusion : NSObject
{
    NSString *_path;
    NSMutableSet *_processIDs;
}

@property(readonly) NSString *path; // @synthesize path=_path;
@property(readonly) NSSet *claimingProcessIDs;
@property(readonly) unsigned long long claimingProcessCount;
- (void)removeClaimForProcessID:(int)arg1;
- (void)addClaimForProcessID:(int)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1 forProcessID:(int)arg2;

@end
