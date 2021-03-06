//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVB17221AECPMessage, AVBMACAddress;

@interface AVB17221AECPPendingResponse : NSObject
{
    AVBMACAddress *destMAC;
    BOOL responseReceived;
    AVB17221AECPMessage *message;
    CDUnknownBlockType completionHandler;
    BOOL inProgressReceived;
    BOOL retried;
    BOOL addedControlRoutingID;
}

@property BOOL retried; // @synthesize retried;
@property BOOL inProgressReceived; // @synthesize inProgressReceived;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler;
@property(copy) AVB17221AECPMessage *message; // @synthesize message;
@property BOOL responseReceived; // @synthesize responseReceived;
@property(copy) AVBMACAddress *destMAC; // @synthesize destMAC;
- (void)dealloc;

@end

