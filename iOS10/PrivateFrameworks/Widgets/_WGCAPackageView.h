//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UICAPackageView.h>

@class UILabel;

@interface _WGCAPackageView : _UICAPackageView
{
    UILabel *_debugLabel;
}

@property(nonatomic, getter=_debugLabel, setter=_setDebugLabel:) __weak UILabel *debugLabel; // @synthesize debugLabel=_debugLabel;
- (void).cxx_destruct;
- (void)_setContinuousCornerRadius:(double)arg1;
- (_Bool)_supportsPushingBottomCornerRadiusToSubviews:(double)arg1;
@property(nonatomic) _Bool showsDebugLabel;
- (id)debugLabel;

@end

