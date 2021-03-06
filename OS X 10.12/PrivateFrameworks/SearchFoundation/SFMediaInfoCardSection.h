//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/SFCardSection.h>

@class NSArray, NSString, SFActionItem, SFMediaItem;

@interface SFMediaInfoCardSection : SFCardSection
{
    BOOL _isMediaContainer;
    SFMediaItem *_mediaItem;
    NSArray *_details;
    SFActionItem *_playAction;
    NSArray *_offers;
    NSString *_watchListIdentifier;
    NSString *_watchListButtonLabel;
    NSString *_watchListContinuationText;
    NSString *_watchListConfirmationText;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL isMediaContainer; // @synthesize isMediaContainer=_isMediaContainer;
@property(copy, nonatomic) NSString *watchListConfirmationText; // @synthesize watchListConfirmationText=_watchListConfirmationText;
@property(copy, nonatomic) NSString *watchListContinuationText; // @synthesize watchListContinuationText=_watchListContinuationText;
@property(copy, nonatomic) NSString *watchListButtonLabel; // @synthesize watchListButtonLabel=_watchListButtonLabel;
@property(copy, nonatomic) NSString *watchListIdentifier; // @synthesize watchListIdentifier=_watchListIdentifier;
@property(copy, nonatomic) NSArray *offers; // @synthesize offers=_offers;
@property(retain, nonatomic) SFActionItem *playAction; // @synthesize playAction=_playAction;
@property(copy, nonatomic) NSArray *details; // @synthesize details=_details;
@property(retain, nonatomic) SFMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

