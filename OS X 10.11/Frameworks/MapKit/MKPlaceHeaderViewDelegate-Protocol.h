//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKPlaceHeaderView;

@protocol MKPlaceHeaderViewDelegate <NSObject>

@optional
- (void)headerViewWasSingleClicked:(MKPlaceHeaderView *)arg1;
- (void)headerViewWasDoubleClicked:(MKPlaceHeaderView *)arg1;
- (BOOL)headerViewshouldShowTitleSubtitleAndStarRatings:(MKPlaceHeaderView *)arg1;
- (void)headerView:(MKPlaceHeaderView *)arg1 didFinishLoadingBackgroundViewOfType:(long long)arg2;
@end

