//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FinderKit/FI_TInfoWindowViewController.h>

@class FI_TColumnQLPreviewViewController;

__attribute__((visibility("hidden")))
@interface FI_TColumnPreviewViewController : FI_TInfoWindowViewController
{
    FI_TColumnQLPreviewViewController *_qlPreviewViewController;
}

- (void)targetNodesChanged;
- (void)targetNodesChanging;
- (void)setSubviewsHidden:(_Bool)arg1;
- (_Bool)expandedDefaultValue;
- (_Bool)expanded;
- (void)loadValueControllers;

@end

