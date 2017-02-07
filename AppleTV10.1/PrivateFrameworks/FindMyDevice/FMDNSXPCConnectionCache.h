//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FMDNSXPCConnectionCache : NSObject
{
    NSObject<OS_dispatch_queue> *_modsSerialQueue;
    NSXPCConnection *_xpcHelperConnection;
}

+ (id)sharedCache;
@property(retain, nonatomic) NSXPCConnection *xpcHelperConnection; // @synthesize xpcHelperConnection=_xpcHelperConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *modsSerialQueue; // @synthesize modsSerialQueue=_modsSerialQueue;
- (void).cxx_destruct;
- (id)connectionToXPCHelper;
- (id)init;

@end
