//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriTVUI/SiriTVUITemplateItemViewController.h>

@class SiriTVUIButtonTemplateItem, SiriTVUITemplateButton;

@interface SiriTVUITemplateButtonController : SiriTVUITemplateItemViewController
{
}

- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)prefersFocus;
- (void)_buttonPressed:(id)arg1;
- (void)_updateContentForUserInterfaceStyle:(long long)arg1;
- (void)loadView;

// Remaining properties
@property(retain, nonatomic) SiriTVUIButtonTemplateItem *templateItem; // @dynamic templateItem;
@property(retain, nonatomic) SiriTVUITemplateButton *view; // @dynamic view;

@end

