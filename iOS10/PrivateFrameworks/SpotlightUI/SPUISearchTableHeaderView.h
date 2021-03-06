//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSLayoutConstraint, SFResultSection, UIButton, UILabel;
@protocol SPUISearchTableHeaderViewDelegate;

@interface SPUISearchTableHeaderView : UITableViewHeaderFooterView
{
    id <SPUISearchTableHeaderViewDelegate> _delegate;
    unsigned long long _sectionHeaderType;
    UILabel *_titleLabel;
    UIButton *_moreButton;
    SFResultSection *_section;
    NSLayoutConstraint *_moreButtonHiddenConstraint;
    NSLayoutConstraint *_moreButtonVisibleConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *moreButtonVisibleConstraint; // @synthesize moreButtonVisibleConstraint=_moreButtonVisibleConstraint;
@property(retain, nonatomic) NSLayoutConstraint *moreButtonHiddenConstraint; // @synthesize moreButtonHiddenConstraint=_moreButtonHiddenConstraint;
@property(retain, nonatomic) SFResultSection *section; // @synthesize section=_section;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly) unsigned long long sectionHeaderType; // @synthesize sectionHeaderType=_sectionHeaderType;
@property __weak id <SPUISearchTableHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setFloating:(_Bool)arg1;
- (void)moreButtonPressed;
- (_Bool)supportsShowMoreInApp;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateShowMoreButtonVisibility;
- (id)moreResultsPunchout;
- (void)updateWithSection:(id)arg1 isExpanded:(_Bool)arg2;
- (id)initWithReuseIdentifier:(id)arg1;

@end

