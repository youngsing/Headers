//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Parsec/PRSBaseCardSection.h>

@class NSArray, NSString;

@interface PRSFUSEAlbumListCardSection : PRSBaseCardSection
{
    NSString *_title;
    NSArray *_albums;
}

+ (BOOL)isAlbum:(id)arg1;
@property(readonly, nonatomic) NSArray *albums; // @synthesize albums=_albums;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithSFSearchResult:(id)arg1 cardSection:(id)arg2;
- (id)initWithTitle:(id)arg1 albums:(id)arg2;

@end

