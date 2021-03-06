//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class PerformanceGraphWidgetPrivate;

@interface PerformanceGraphWidget : CALayer
{
    PerformanceGraphWidgetPrivate *_private;
}

+ (id)sharedWidget;
- (void).cxx_destruct;
- (void)removedTile:(int)arg1 forBytes:(int)arg2;
- (void)renderedTile:(int)arg1 withTickTime:(unsigned long long)arg2 forBytes:(int)arg3;
- (void)setPageVisible:(int)arg1 isVisible:(_Bool)arg2;
- (void)setMaxPageCount:(int)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)drawString:(id)arg1 atPosition:(struct CGPoint)arg2 inBounds:(struct CGRect)arg3 toContext:(struct CGContext *)arg4;
- (id)actionForKey:(id)arg1;
- (void)heartbeat;
- (void)addRenderDataPoint:(int)arg1 withTickTime:(unsigned long long)arg2 andIsTile:(_Bool)arg3;
- (void)addDataPoint;
- (void)dealloc;
- (id)init;
- (void)showWidget:(_Bool)arg1;

@end

