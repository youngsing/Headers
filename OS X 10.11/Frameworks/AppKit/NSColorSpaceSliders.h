//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSSliderViewRequiredMethods-Protocol.h>

@class NSColorPickerSliders, NSColorSpace;

@interface NSColorSpaceSliders : NSObject <NSSliderViewRequiredMethods>
{
    id colorPanel;
    NSColorPickerSliders *controllingPicker;
    NSColorSpace *activeColorSpace;
}

+ (id)genericColorSpace;
- (struct CGSize)requiredMinSize;
- (void)dealloc;
- (void)takeColorSpaceFrom:(id)arg1;
- (id)activeColorSpace;
- (void)setActiveColorSpace:(id)arg1;
- (void)finishProvideNewSubviewSetup;
- (void)adjustControls:(id)arg1;
- (void)_adjustControls:(id)arg1 andSetColor:(BOOL)arg2;
- (void)setColor:(id)arg1;
- (id)regularColorIfPossible:(id)arg1;
- (void)setMatchedColor:(id)arg1;
- (id)provideNewSubview:(id)arg1;
- (id)fieldEditableControl;

@end

