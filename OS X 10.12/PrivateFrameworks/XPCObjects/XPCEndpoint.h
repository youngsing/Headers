//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XPCObjects/NSCoding-Protocol.h>

@protocol OS_xpc_object;

@interface XPCEndpoint : NSObject <NSCoding>
{
    NSObject<OS_xpc_object> *_endpoint;
}

@property(nonatomic) NSObject<OS_xpc_object> *endpoint; // @synthesize endpoint=_endpoint;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)createConnection;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (id)_initWithEndpoint:(id)arg1;
- (id)init;

@end

