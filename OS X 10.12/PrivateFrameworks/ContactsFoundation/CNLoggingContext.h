//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface CNLoggingContext : NSObject
{
    NSString *_subsystem;
    NSString *_category;
    void *_aslClient;
    NSObject<OS_dispatch_queue> *_aslQueue;
}

+ (id)loggingContextWithSubsystem:(id)arg1 category:(id)arg2;
@property(readonly, copy, nonatomic) NSString *subsystem; // @synthesize subsystem=_subsystem;
@property(readonly, copy, nonatomic) NSString *category; // @synthesize category=_category;
- (void)setupASL;
- (id)loggingName;
- (id)aslQueue;
- (struct __asl_object_s *)aslClient;
- (void)dealloc;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2;

@end
