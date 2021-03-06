//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSUtility/SFUInputStream-Protocol.h>

@class NSString;
@protocol OS_dispatch_data, OS_dispatch_queue, TSUReadChannel, TSUStreamReadChannel;

@interface TSUReadChannelInputStreamAdapter : NSObject <SFUInputStream>
{
    id <TSUReadChannel> _readChannel;
    id <TSUStreamReadChannel> _streamReadChannel;
    NSObject<OS_dispatch_data> *_leftoverData;
    NSObject<OS_dispatch_queue> *_readQueue;
    long long _offset;
}

- (void).cxx_destruct;
- (id)closeLocalStream;
- (void)enableSystemCaching;
- (void)disableSystemCaching;
- (void)seekToOffset:(long long)arg1;
- (_Bool)canSeek;
- (void)close;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (long long)offset;
- (void)dealloc;
- (id)_initWithReadChannel:(id)arg1 streamReadChannel:(id)arg2;
- (id)initWithStreamReadChannel:(id)arg1;
- (id)initWithReadChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

