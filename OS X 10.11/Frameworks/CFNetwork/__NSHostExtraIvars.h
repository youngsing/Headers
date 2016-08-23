//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface __NSHostExtraIvars : NSObject
{
    NSString *thingToResolve;
    int resolveType;
    struct dispatch_queue_s *resolveQueue;
    struct dispatch_queue_s *cacheAccessQueue;
    struct dispatch_queue_s *callbackQueue;
    BOOL startedResolving;
}

@property BOOL startedResolving; // @synthesize startedResolving;
@property(retain, nonatomic) NSString *thingToResolve; // @synthesize thingToResolve;
@property(nonatomic) int resolveType; // @synthesize resolveType;
@property(readonly, retain, nonatomic) struct dispatch_queue_s *callbackQueue;
@property(readonly, retain, nonatomic) struct dispatch_queue_s *cacheAccessQueue;
@property(readonly, retain, nonatomic) struct dispatch_queue_s *resolveQueue;
- (void)dealloc;
- (void)finalize;
- (void)cleanup;
- (id)init;

@end
