//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ATVLegacyContentKit/TVLElement.h>

@class NSArray, TVLImageElement;

@interface TVLImageWithLabelsElement : TVLElement
{
    TVLImageElement *_image;
    NSArray *_labels;
}

@property(copy, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(retain, nonatomic) TVLImageElement *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2;

@end

