//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSLayoutGuide, NSMutableArray, NSTextField;

__attribute__((visibility("hidden")))
@interface AVExternalPlaybackIndicatorView : NSView
{
    NSView *_containerView;
    NSTextField *_titleTextField;
    NSTextField *_subtitleTextField;
    NSLayoutGuide *_preferredContentAreaLayoutGuide;
    NSMutableArray *_preferredContentAreaLayoutConstraints;
}

- (void).cxx_destruct;
- (void)_updatePreferredContentAreaLayoutConstraints;
- (void)setTitleString:(id)arg1 subtitleString:(id)arg2;
@property(retain) NSLayoutGuide *preferredContentAreaLayoutGuide;
- (id)makeBackingLayer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

