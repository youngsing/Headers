//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraKit/NSObject-Protocol.h>

@class CMKTopBar;

@protocol CMKTopBarDelegate <NSObject>
- (_Bool)topBarShouldHideTimerButton:(CMKTopBar *)arg1;
- (_Bool)topBarShouldHideFlipButton:(CMKTopBar *)arg1;
- (_Bool)topBarShouldHideElapsedTimeView:(CMKTopBar *)arg1;
- (_Bool)topBarShouldHideHDRButton:(CMKTopBar *)arg1;
- (_Bool)topBarShouldHideFlashButton:(CMKTopBar *)arg1;
@end

