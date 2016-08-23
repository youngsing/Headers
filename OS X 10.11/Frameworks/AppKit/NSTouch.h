//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCopying-Protocol.h>

@class NSView;
@protocol NSObject><NSCopying;

@interface NSTouch : NSObject <NSCopying>
{
    long long _index;
    id _identity;
    unsigned long long _phase;
    struct CGPoint _normalizedPosition;
    long long _privateFlags;
    NSView *_view;
    id _reserved1;
    id _device;
    struct CGSize _deviceSize;
}

@property(readonly) struct CGSize deviceSize; // @synthesize deviceSize=_deviceSize;
@property(readonly) id device; // @synthesize device=_device;
@property(readonly) struct CGPoint normalizedPosition; // @synthesize normalizedPosition=_normalizedPosition;
@property(readonly) unsigned long long phase; // @synthesize phase=_phase;
@property(readonly) id <NSObject><NSCopying> identity; // @synthesize identity=_identity;
- (double)_force;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, getter=isResting) BOOL resting;
- (id)_initWithIdentity:(id)arg1 index:(long long)arg2 phase:(unsigned long long)arg3 position:(struct CGPoint)arg4 isResting:(BOOL)arg5 view:(id)arg6 device:(id)arg7 deviceSize:(struct CGSize)arg8 force:(double)arg9;
- (void)dealloc;
- (id)_view;
- (long long)_index;
- (id)_initWithPreviousTouch:(id)arg1 newPhase:(unsigned long long)arg2 position:(struct CGPoint)arg3 isResting:(BOOL)arg4 force:(double)arg5;
- (id)_initWithIndex:(long long)arg1 phase:(unsigned long long)arg2 position:(struct CGPoint)arg3 isResting:(BOOL)arg4 view:(id)arg5 device:(id)arg6 deviceSize:(struct CGSize)arg7 force:(double)arg8;

@end
