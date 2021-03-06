//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIKBKeyView.h>

@class UIDictationView;

__attribute__((visibility("hidden")))
@interface UIKBDictationDisplayView : UIKBKeyView
{
    UIDictationView *_dictationView;
}

@property(retain, nonatomic) UIDictationView *dictationView; // @synthesize dictationView=_dictationView;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)prepareForDisplay;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (void)updateDictationColor;
- (void)setRenderConfig:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;

@end

