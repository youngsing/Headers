//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistiveControlSupport/ACSHView.h>

@class NSView;

@interface ACSHPanelBackgroundView : ACSHView
{
    struct CGImage *_cachedImage;
    struct CGSize _cachedImageSize;
    NSView *_background;
}

- (void)dealloc;
- (void)updateLayer;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGImage *)_image;
- (BOOL)wantsUpdateLayer;
- (void)awakeFromNib;

@end
