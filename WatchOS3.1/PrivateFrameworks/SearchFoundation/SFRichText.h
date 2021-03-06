//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/SFText.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface SFRichText : SFText <NSSecureCoding>
{
    double _starRating;
    NSString *_contentAdvisory;
    NSArray *_icons;
    NSArray *_formattedTextPieces;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSArray *formattedTextPieces; // @synthesize formattedTextPieces=_formattedTextPieces;
@property(copy, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property(copy, nonatomic) NSString *contentAdvisory; // @synthesize contentAdvisory=_contentAdvisory;
@property(nonatomic) double starRating; // @synthesize starRating=_starRating;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)loadRichTextWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithCoder:(id)arg1;

@end

