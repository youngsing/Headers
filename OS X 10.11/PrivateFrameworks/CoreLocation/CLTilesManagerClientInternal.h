//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CLTilesManagerClientInternal : NSObject
{
    struct _xpc_connection_s *fXpcConnection;
    struct dispatch_queue_s *fQueue;
    NSDictionary *fNotificationHandlers;
}

@end
