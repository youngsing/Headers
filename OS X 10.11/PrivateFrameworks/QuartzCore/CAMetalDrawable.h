//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuartzCore/CAMetalDrawable-Protocol.h>

@class CAMetalLayer, NSString;
@protocol MTLTexture;

@interface CAMetalDrawable : NSObject <CAMetalDrawable>
{
    CAMetalLayer *_layer;
    struct _CAMetalDrawablePrivate *_priv;
}

@property(readonly) CAMetalLayer *layer;
- (void)presentAtTime:(double)arg1;
- (void)present;
@property(readonly) id <MTLTexture> texture;
- (struct _CAMetalDrawablePrivate *)priv;
- (void)dealloc;
- (id)initWithDrawablePrivate:(struct _CAMetalDrawablePrivate *)arg1 layer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

