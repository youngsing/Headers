//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSXPCConnection;
@protocol CRCarKitService;

@interface CRCarKitServiceClient : NSObject
{
    NSXPCConnection *_serviceConnection;
    id <CRCarKitService> _service;
    NSMutableArray *_outstandingSemaphores;
}

@property(retain, nonatomic) NSMutableArray *outstandingSemaphores; // @synthesize outstandingSemaphores=_outstandingSemaphores;
@property(retain, nonatomic) id <CRCarKitService> service; // @synthesize service=_service;
@property(retain, nonatomic) NSXPCConnection *serviceConnection; // @synthesize serviceConnection=_serviceConnection;
- (void).cxx_destruct;
- (void)performServiceCallBlock:(CDUnknownBlockType)arg1;
- (void)_releaseAllServiceSemaphores;
- (void)_blockOnServiceSemaphore:(id)arg1;
- (id)_serviceSemaphore;
- (id)init;

@end

