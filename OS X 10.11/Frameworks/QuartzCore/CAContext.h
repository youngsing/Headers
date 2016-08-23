//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, NSDictionary;

@interface CAContext : NSObject
{
}

+ (id)objectForSlot:(unsigned int)arg1;
+ (BOOL)allowsCGSConnections;
+ (void)setAllowsCGSConnections:(BOOL)arg1;
+ (id)contextWithCGSConnection:(unsigned int)arg1 options:(id)arg2;
+ (void)setClientPort:(unsigned int)arg1;
+ (id)remoteContextWithOptions:(id)arg1;
+ (id)remoteContext;
+ (id)localContextWithOptions:(id)arg1;
+ (id)localContext;
+ (id)currentContext;
+ (id)allContexts;
- (void)setObject:(id)arg1 forSlot:(unsigned int)arg2;
- (void)deleteSlot:(unsigned int)arg1;
- (unsigned int)createSlot;
- (void)invalidateFences;
- (void)setFence:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)setFencePort:(unsigned int)arg1 commitHandler:(CDUnknownBlockType)arg2;
- (void)setFencePort:(unsigned int)arg1;
- (unsigned int)createFencePort;
- (void)invalidate;

// Remaining properties
@property BOOL colorMatchUntaggedContent; // @dynamic colorMatchUntaggedContent;
@property struct CGColorSpace *colorSpace; // @dynamic colorSpace;
@property(readonly) unsigned int contextId; // @dynamic contextId;
@property unsigned int displayMask; // @dynamic displayMask;
@property unsigned int displayNumber; // @dynamic displayNumber;
@property unsigned int eventMask; // @dynamic eventMask;
@property(retain) CALayer *layer; // @dynamic layer;
@property(readonly) NSDictionary *options; // @dynamic options;
@property int restrictedHostProcessId; // @dynamic restrictedHostProcessId;
@property(readonly) BOOL valid; // @dynamic valid;

@end
