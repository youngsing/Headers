//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>
#import <HomeUI/HUDisableableCellProtocol-Protocol.h>

@class HFItem, NSString;
@protocol HUSwitchCellDelegate;

@interface HUSwitchCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol>
{
    _Bool _disabled;
    _Bool _on;
    HFItem *_item;
    id <HUSwitchCellDelegate> _delegate;
}

@property(nonatomic) __weak id <HUSwitchCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isOn) _Bool on; // @synthesize on=_on;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)_toggleOn:(id)arg1;
- (id)_switch;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

