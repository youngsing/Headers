//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>

@class NSArray, NSMenuItem, NSPopover, NSView;

@protocol NSMenuImpl <NSObject>
- (struct OpaqueMenuRef *)_principalMenuRef;
- (void)_menuItem:(NSMenuItem *)arg1 atIndex:(unsigned long long)arg2 didChangeDestructiveFrom:(BOOL)arg3 to:(BOOL)arg4;
- (void)_menuItem:(NSMenuItem *)arg1 atIndex:(unsigned long long)arg2 didChangeAlternateFrom:(BOOL)arg3 to:(BOOL)arg4;
- (void)_showPopover:(NSPopover *)arg1 forMenuItem:(NSMenuItem *)arg2;
- (void)_menuDidRemoveAllItems:(NSArray *)arg1;
- (void)_cancelTrackingWithAnimation:(BOOL)arg1;
- (NSMenuItem *)targetedItem;

@optional
- (NSView *)_presentingView;
@end

