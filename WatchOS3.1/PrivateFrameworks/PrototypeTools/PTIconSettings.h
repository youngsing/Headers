//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UISettings.h>

@interface PTIconSettings : _UISettings
{
    _Bool _on;
    double _alphaStrength;
    double _radiusStrength;
}

+ (id)archivedSettingsGroup;
@property(nonatomic) double radiusStrength; // @synthesize radiusStrength=_radiusStrength;
@property(nonatomic) double alphaStrength; // @synthesize alphaStrength=_alphaStrength;
@property(nonatomic) _Bool on; // @synthesize on=_on;
- (id)settingsHUDConfiguration;
- (void)settingsResetByHUD;
- (void)setDefaultValues;

@end

