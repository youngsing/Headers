//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FinderKit/NSObject-Protocol.h>

@class FI_TBaseBrowserViewController, FI_TTagColumnTableViewController;

@protocol TTagColumnTableViewControllerDelegate <NSObject>
- (void)tagColumnTableViewController:(FI_TTagColumnTableViewController *)arg1 selectedTagNodeChanged:(const struct TFENode *)arg2;
- (FI_TBaseBrowserViewController *)browserViewControllerForTagColumn:(FI_TTagColumnTableViewController *)arg1;
@end

