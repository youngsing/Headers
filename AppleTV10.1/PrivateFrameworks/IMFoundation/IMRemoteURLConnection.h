//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURLRequest;
@protocol OS_xpc_object;

@interface IMRemoteURLConnection : NSObject
{
    NSURLRequest *_request;
    NSString *_bundleIdentifierForDataUsage;
    CDUnknownBlockType _block;
    NSObject<OS_xpc_object> *_connection;
    _Bool _cancelled;
    _Bool _loading;
    _Bool _forceCellularIfPossible;
    _Bool _alwaysForceCellular;
    _Bool _requireIDSHost;
    int _retries;
    _Bool _shouldUsePipelining;
    int _concurrentConnections;
    _Bool _disableKeepAlive;
    int _keepAliveWifi;
    int _keepAliveCell;
}

@property(copy) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain) NSURLRequest *request; // @synthesize request=_request;
@property _Bool alwaysForceCellular; // @synthesize alwaysForceCellular=_alwaysForceCellular;
@property int keepAliveCell; // @synthesize keepAliveCell=_keepAliveCell;
@property int keepAliveWifi; // @synthesize keepAliveWifi=_keepAliveWifi;
@property _Bool disableKeepAlive; // @synthesize disableKeepAlive=_disableKeepAlive;
@property int concurrentConnections; // @synthesize concurrentConnections=_concurrentConnections;
@property _Bool shouldUsePipelining; // @synthesize shouldUsePipelining=_shouldUsePipelining;
@property _Bool requireIDSHost; // @synthesize requireIDSHost=_requireIDSHost;
@property(retain) NSString *bundleIdentifierForDataUsage; // @synthesize bundleIdentifierForDataUsage=_bundleIdentifierForDataUsage;
@property _Bool forceCellularIfPossible; // @synthesize forceCellularIfPossible=_forceCellularIfPossible;
- (void)cancel;
- (void)load;
- (void)dealloc;
- (id)initWithURLRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)_connect;
- (_Bool)_disconnect;
- (void)_disconnected;

@end

