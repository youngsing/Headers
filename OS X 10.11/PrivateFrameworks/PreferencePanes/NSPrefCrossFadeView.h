//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PreferencePanes/NSPrefAnimatedView.h>

@interface NSPrefCrossFadeView : NSPrefAnimatedView
{
    struct CGImage *mDestImage;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)setDestCGImage:(struct CGImage *)arg1;
- (void)setSourceCGImage:(struct CGImage *)arg1;
- (void)didStopAnimation;
- (void)willStartAnimation;
- (BOOL)isOpaque;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

