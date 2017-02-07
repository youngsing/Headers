//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConsoleKit/NSObject-Protocol.h>

@class CSKTableViewController, NSArray, NSSortDescriptor, NSString;

@protocol CSKTableViewControllerDelegate <NSObject>
- (NSArray *)tableViewController:(CSKTableViewController *)arg1 menuItemsForRow:(unsigned long long)arg2 columnIdentifier:(NSString *)arg3;
- (void)tableViewController:(CSKTableViewController *)arg1 entityAtRowDidDoubleClick:(long long)arg2;
- (void)tableViewController:(CSKTableViewController *)arg1 entitiesDidSelect:(NSArray *)arg2;

@optional
- (void)tableViewControllerScrollingPositionDidReachTop:(CSKTableViewController *)arg1;
- (void)tableViewController:(CSKTableViewController *)arg1 needSortingUsingSortDescriptor:(NSSortDescriptor *)arg2;
- (void)tableViewController:(CSKTableViewController *)arg1 lockFocusStateDidChange:(BOOL)arg2;
@end
