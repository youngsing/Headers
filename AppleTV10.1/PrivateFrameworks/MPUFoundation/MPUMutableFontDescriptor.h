//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPUFoundation/MPUFontDescriptor.h>

@interface MPUMutableFontDescriptor : MPUFontDescriptor
{
}

- (void)_resetToDefaultValues;
- (id)_copyAllowingGlobalCacheLookup:(_Bool)arg1;
@property(nonatomic) _Bool wantsMonospaceNumbers; // @dynamic wantsMonospaceNumbers;
@property(nonatomic) _Bool usesItalic; // @dynamic usesItalic;
@property(nonatomic) long long weight; // @dynamic weight;
@property(nonatomic) long long textStyle; // @dynamic textStyle;
@property(nonatomic) double systemFontSize; // @dynamic systemFontSize;
@property(nonatomic) long long leadingAdjustment; // @dynamic leadingAdjustment;
@property(nonatomic) double defaultPointSizeAdjustment; // @dynamic defaultPointSizeAdjustment;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
