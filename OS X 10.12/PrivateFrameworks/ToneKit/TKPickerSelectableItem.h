//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ToneKit/TKPickerRowItem.h>

@class NSString;

@interface TKPickerSelectableItem : TKPickerRowItem
{
    BOOL _textCentered;
    BOOL _showsCheckmark;
    BOOL _showsDisclosureIndicator;
    NSString *_text;
    NSString *_detailText;
}

@property(nonatomic, setter=_setShowsDisclosureIndicator:) BOOL showsDisclosureIndicator; // @synthesize showsDisclosureIndicator=_showsDisclosureIndicator;
@property(nonatomic, setter=_setShowsCheckmark:) BOOL showsCheckmark; // @synthesize showsCheckmark=_showsCheckmark;
@property(copy, nonatomic, setter=_setDetailText:) NSString *detailText; // @synthesize detailText=_detailText;
@property(nonatomic, getter=isTextCentered, setter=_setTextCentered:) BOOL textCentered; // @synthesize textCentered=_textCentered;
@property(copy, nonatomic, setter=_setText:) NSString *text; // @synthesize text=_text;
- (void)_appendDescriptionOfAttributesToString:(id)arg1;
- (void)dealloc;

@end
