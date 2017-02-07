//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSTStrokeLayerStrokeAndRange-Protocol.h>

@class NSString, TSDStroke;

__attribute__((visibility("hidden")))
@interface TSTStrokeLayerToken : NSObject <TSTStrokeLayerStrokeAndRange>
{
    int _order;
    TSDStroke *_stroke;
    unsigned long long _position;
    struct TSTSimpleRange _range;
}

+ (id)tokenWithStroke:(id)arg1 range:(struct TSTSimpleRange)arg2 order:(int)arg3 andPosition:(unsigned long long)arg4;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(nonatomic) int order; // @synthesize order=_order;
@property(nonatomic) struct TSTSimpleRange range; // @synthesize range=_range;
@property(retain, nonatomic) TSDStroke *stroke; // @synthesize stroke=_stroke;
- (void)dealloc;
- (id)initWithStroke:(id)arg1 range:(struct TSTSimpleRange)arg2 order:(int)arg3 andPosition:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
