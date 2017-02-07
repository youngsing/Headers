//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriTVUI/SiriTVUITemplateItem.h>

@class NSArray, NSDictionary, NSString;

@interface SiriTVUIImageViewTemplateItem : SiriTVUITemplateItem
{
    NSDictionary *_imageURLs;
    double _alpha;
    unsigned long long _imageStyle;
    NSString *_monogramText;
    NSArray *_monogramNames;
    struct CGSize _pixelSize;
}

@property(copy, nonatomic) NSArray *monogramNames; // @synthesize monogramNames=_monogramNames;
@property(copy, nonatomic) NSString *monogramText; // @synthesize monogramText=_monogramText;
@property(nonatomic) unsigned long long imageStyle; // @synthesize imageStyle=_imageStyle;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
@property(copy, nonatomic) NSDictionary *imageURLs; // @synthesize imageURLs=_imageURLs;
- (void).cxx_destruct;
- (id)initWithImageURLs:(id)arg1 pixelSize:(struct CGSize)arg2;
- (id)initWithImageURLs:(id)arg1 pixelSize:(struct CGSize)arg2 alpha:(double)arg3;
- (id)initWithImageURLs:(id)arg1 pixelSize:(struct CGSize)arg2 alpha:(double)arg3 monogramText:(id)arg4;
- (id)initWithImageURLs:(id)arg1 pixelSize:(struct CGSize)arg2 alpha:(double)arg3 monogramNames:(id)arg4;

@end
