//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class ICQLink, ICQOffer;

@interface ICQUpgradeButton : UIButton
{
    ICQOffer *_offer;
    ICQLink *_link;
}

+ (id)attributedStringWithFormat:(id)arg1 attributes:(id)arg2 links:(id)arg3;
+ (id)spaceArrowAttributedStringWithBaseAttributes:(id)arg1;
+ (id)upgradeButton;
+ (id)buttonWithType:(long long)arg1;
+ (_Bool)shouldShowForOffer:(id)arg1;
@property(readonly, nonatomic) ICQLink *link; // @synthesize link=_link;
- (void).cxx_destruct;
- (id)buttonAttributes;
@property(retain, nonatomic) ICQOffer *offer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

