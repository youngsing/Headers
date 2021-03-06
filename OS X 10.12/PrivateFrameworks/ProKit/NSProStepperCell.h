//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSStepperCell.h>

@interface NSProStepperCell : NSStepperCell
{
    BOOL _isDrawing;
    void *_proReserved6;
}

- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)updateRenditionKey:(id)arg1 getFocus:(char *)arg2 userInfo:(id)arg3;
- (long long)_currentThemeStateInView:(id)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (BOOL)isValidControlSize:(unsigned long long)arg1;
- (void)_doSingleStep:(BOOL)arg1 inView:(id)arg2;
- (void)_stepInUpDirection:(BOOL)arg1;
- (void)getPeriodicDelay:(float *)arg1 interval:(float *)arg2;
- (BOOL)_sendActionFrom:(id)arg1;
- (BOOL)stepDirectionAtPoint:(struct CGPoint)arg1 inView:(id)arg2;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (struct CGRect)_trackingRectForFrameRect:(struct CGRect)arg1 inView:(id)arg2;
- (id)_baseFacet;
- (BOOL)_useAssetMetrics;
- (int)elementID;

@end

