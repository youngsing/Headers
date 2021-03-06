//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistiveControlSupport/ACSHView.h>

@interface ACSHResizeHandleView : ACSHView
{
    int _resizeType;
}

+ (void)initialize;
+ (double)handleSize;
@property(readonly, nonatomic) int resizeType; // @synthesize resizeType=_resizeType;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (int)_cursor;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)updateTrackingAreas;
- (id)initWithSuperFrame:(struct CGRect)arg1 resizeType:(int)arg2;
- (BOOL)isFlipped;

@end

