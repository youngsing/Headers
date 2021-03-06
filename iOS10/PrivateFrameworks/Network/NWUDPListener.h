//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NWEndpoint, NWParameters;
@protocol OS_nw_udp_listener;

@interface NWUDPListener : NSObject
{
    NWEndpoint *_localEndpoint;
    NSError *_error;
    NSObject<OS_nw_udp_listener> *_internalListener;
    NWParameters *_parameters;
    NWEndpoint *_endpoint;
    id _delegate;
}

@property __weak id delegate; // @synthesize delegate=_delegate;
@property(retain) NWEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(retain) NWParameters *parameters; // @synthesize parameters=_parameters;
@property(retain) NSObject<OS_nw_udp_listener> *internalListener; // @synthesize internalListener=_internalListener;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NWEndpoint *localEndpoint; // @synthesize localEndpoint=_localEndpoint;
- (void).cxx_destruct;
- (id)initWithParameters:(id)arg1 delegate:(id)arg2;
- (void)handleError:(int)arg1;
- (void)handleConnectedSocket:(int)arg1;

@end

