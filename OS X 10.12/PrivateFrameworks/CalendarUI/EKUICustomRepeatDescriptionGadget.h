//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarUI/EKUIRepeatGadget.h>

@class EKUICustomRepeatDescriptionField;

@interface EKUICustomRepeatDescriptionGadget : EKUIRepeatGadget
{
    EKUICustomRepeatDescriptionField *_repeatDescriptionField;
}

@property(retain) EKUICustomRepeatDescriptionField *repeatDescriptionField; // @synthesize repeatDescriptionField=_repeatDescriptionField;
- (void).cxx_destruct;
- (double)pixelsBetweenLabelAndControl;
- (void)updateWithChanges:(id)arg1;
- (BOOL)shouldDisplay;
- (BOOL)shouldDisplayWhenNotEditable;
- (id)controlView;
- (id)control;
- (id)labelString;
- (id)initWithViewController:(id)arg1;

@end

