//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/MTLDepthStencilStateSPI-Protocol.h>

@class NSString;
@protocol MTLDevice;

@interface _MTLDepthStencilState : NSObject <MTLDepthStencilStateSPI>
{
    id <MTLDevice> _device;
    NSString *_label;
}

@property(readonly) NSString *label; // @synthesize label=_label;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
@property(readonly) _Bool writesStencil;
@property(readonly) _Bool readsStencil;
@property(readonly) _Bool writesDepth;
@property(readonly) _Bool readsDepth;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 depthStencilDescriptor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

