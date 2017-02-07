//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SiriTVUITemplateItem, UIView;
@protocol SiriTVUITemplateItemView, SiriTVUITemplateItemViewControllerDelegate;

@interface SiriTVUITemplateItemViewController : UIViewController
{
    SiriTVUITemplateItem *_templateItem;
    id <SiriTVUITemplateItemViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SiriTVUITemplateItemViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SiriTVUITemplateItem *templateItem; // @synthesize templateItem=_templateItem;
- (void).cxx_destruct;
- (_Bool)supportsSwipeDismissal;
- (struct CGRect)highlightedTemplateItemFrame;
@property(readonly, nonatomic) _Bool prefersFocus;
- (void)templateItemViewController:(id)arg1 didHighlightTemplateItem:(id)arg2 atIndexPath:(id)arg3 hasStopped:(_Bool)arg4;
- (void)willEndInteractiveTransitionFromFullScreenFraction:(double)arg1 toFullScreenFraction:(double)arg2 velocity:(struct CGPoint)arg3;
- (void)didUpdateInteractiveTransitionWithFullScreenFraction:(double)arg1;
- (id)initWithTemplateItem:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(retain, nonatomic) UIView<SiriTVUITemplateItemView> *view; // @dynamic view;

@end
