//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ATVLegacyContentKit/TVLElement.h>

@class NSArray, TVLHeaderElement;

@interface TVLMenuSectionElement : TVLElement
{
    TVLHeaderElement *_header;
    NSArray *_menuItems;
}

@property(retain, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
@property(retain, nonatomic) TVLHeaderElement *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2;

@end

