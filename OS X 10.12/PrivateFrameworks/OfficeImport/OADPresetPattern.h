//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OADPattern.h>

__attribute__((visibility("hidden")))
@interface OADPresetPattern : OADPattern
{
    int mType;
    BOOL mIsTypeOverridden;
}

+ (id)namedBitmapDataForPresetPatternType:(int)arg1;
+ (id)nameForPresetPatternType:(int)arg1;
+ (id)defaultProperties;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (BOOL)isAnythingOverridden;
- (BOOL)isTypeOverridden;
- (void)setType:(int)arg1;
- (int)type;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
