//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSPNetworkAgent, NSUUID;

@interface NPKey : NSObject
{
    unsigned int _session_counter;
    NSData *_info;
    NSUUID *_uuid;
}

@property(retain) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain) NSData *info; // @synthesize info=_info;
@property unsigned int session_counter; // @synthesize session_counter=_session_counter;
- (void).cxx_destruct;
@property(readonly) NSPNetworkAgent *agentForKey;
- (id)data;
- (id)initWithData:(id)arg1;

@end

