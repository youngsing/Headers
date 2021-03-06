//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVKit/TVTableViewCell.h>

#import <ATVLegacyContentKit/TVLMenuItemCell-Protocol.h>

@class NSString, TVLMenuItemView;

@interface TVLMenuItemListCell : TVTableViewCell <TVLMenuItemCell>
{
    TVLMenuItemView *_menuItemView;
}

@property(readonly) TVLMenuItemView *menuItemView; // @synthesize menuItemView=_menuItemView;
- (void).cxx_destruct;
- (id)labelForMarquee;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)configureWithMenuItemElement:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

