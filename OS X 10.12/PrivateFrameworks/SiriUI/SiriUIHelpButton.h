//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/SiriUITranscriptButton.h>

__attribute__((visibility("hidden")))
@interface SiriUIHelpButton : SiriUITranscriptButton
{
    BOOL _animatingEmphasis;
    BOOL _emphasized;
}

- (double)_targetAlpha;
- (double)_alphaForColor:(id)arg1;
- (void)pulse;
- (void)setEmphasized:(BOOL)arg1;
- (BOOL)wantsUpdateLayer;
- (void)awakeFromNib;

@end

