//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ATVLegacyContentKit/TVLRootElement.h>

@class NSArray, NSString;

@interface TVLOptionListElement : TVLRootElement
{
    _Bool _autoSelectSingleItem;
    NSString *_title;
    NSString *_footnote;
    NSArray *_items;
}

@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) _Bool autoSelectSingleItem; // @synthesize autoSelectSingleItem=_autoSelectSingleItem;
@property(copy, nonatomic) NSString *footnote; // @synthesize footnote=_footnote;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2;

@end
