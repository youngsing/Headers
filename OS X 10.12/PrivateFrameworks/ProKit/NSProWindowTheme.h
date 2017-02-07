//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProKit/NSProWindowCustomLookSupport-Protocol.h>

@interface NSProWindowTheme : NSObject <NSProWindowCustomLookSupport>
{
}

+ (BOOL)_drawWindowBackgroundInterior:(id)arg1 inRect:(struct CGRect)arg2 clip:(struct CGRect)arg3 withState:(id)arg4;
+ (BOOL)_drawTitleStringInRect:(struct CGRect)arg1 forWindow:(id)arg2 withState:(id)arg3;
+ (BOOL)_drawTitlebarInRect:(struct CGRect)arg1 forWindow:(id)arg2 withState:(id)arg3;
+ (BOOL)_drawWindowBackground:(id)arg1 inRect:(struct CGRect)arg2 withState:(id)arg3;
+ (id)_titleFontForStyleMask:(unsigned long long)arg1 isKey:(BOOL)arg2 isMain:(BOOL)arg3;
+ (double)_titleFontSizeForStyleMask:(unsigned long long)arg1;
+ (double)_roundedCornerRadiusForStyleMask:(unsigned long long)arg1;
+ (double)_windowBorderThicknessForStyleMask:(unsigned long long)arg1;
+ (id)_metricsFacetForStyleMask:(unsigned long long)arg1;
+ (id)_resizeCornerFacetForStyleMask:(unsigned long long)arg1;
+ (id)_controlFacetForButton:(int)arg1 styleMask:(unsigned long long)arg2;
+ (id)_titlebarFacetForStyleMask:(unsigned long long)arg1;
+ (id)_windowBorderFacetForStyleMask:(unsigned long long)arg1;
+ (BOOL)isLargeGray:(unsigned long long)arg1;
+ (BOOL)isLarge:(unsigned long long)arg1;
+ (BOOL)isUtility:(unsigned long long)arg1;
+ (BOOL)isTextured:(unsigned long long)arg1;
+ (BOOL)isHUD:(unsigned long long)arg1;

@end
