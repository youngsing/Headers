//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateModularLargeStandardBody : CLKComplicationTemplate
{
    _Bool _shouldTruncateHeaderLeadingLabelFirst;
    CLKTextProvider *_headerTextProvider;
    CLKTextProvider *_body1TextProvider;
    CLKTextProvider *_body2TextProvider;
    CLKImageProvider *_headerImageProvider;
    CLKImageProvider *_body1ImageProvider;
    CLKTextProvider *_headerTrailingTextProvider;
}

@property(nonatomic) _Bool shouldTruncateHeaderLeadingLabelFirst; // @synthesize shouldTruncateHeaderLeadingLabelFirst=_shouldTruncateHeaderLeadingLabelFirst;
@property(copy, nonatomic) CLKTextProvider *headerTrailingTextProvider; // @synthesize headerTrailingTextProvider=_headerTrailingTextProvider;
@property(copy, nonatomic) CLKImageProvider *body1ImageProvider; // @synthesize body1ImageProvider=_body1ImageProvider;
@property(copy, nonatomic) CLKImageProvider *headerImageProvider; // @synthesize headerImageProvider=_headerImageProvider;
@property(copy, nonatomic) CLKTextProvider *body2TextProvider; // @synthesize body2TextProvider=_body2TextProvider;
@property(copy, nonatomic) CLKTextProvider *body1TextProvider; // @synthesize body1TextProvider=_body1TextProvider;
@property(copy, nonatomic) CLKTextProvider *headerTextProvider; // @synthesize headerTextProvider=_headerTextProvider;
- (void).cxx_destruct;
- (void)_enumerateBOOLKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
