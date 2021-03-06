//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPopUpButton.h>

#import <AppKit/NSMenuDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSNavView, NSString;

@interface NSNavNodePopUpButton : NSPopUpButton <NSMenuDelegate>
{
    NSMutableDictionary *_nodeInfoTable;
    NSMutableArray *_groupIdentifiers;
    NSMutableArray *_watchingNodes;
    unsigned int _inMenuTrackingMode:1;
    unsigned int _otherMenuContentsDirty:1;
    unsigned int _otherMenuIconsDirty:1;
    unsigned int _firstItemDirty:1;
    unsigned int _windowOrderedOut:1;
    unsigned int _reserved:27;
    NSNavView *_navView;
}

@property NSNavView *navView; // @synthesize navView=_navView;
- (void)drawRect:(struct CGRect)arg1;
- (void)_updateFirstItemIfNecessary;
- (void)_setContentsDirty:(BOOL)arg1;
- (void)doneTrackingMenu:(id)arg1;
- (void)willPopUpNotification:(id)arg1;
- (BOOL)menuHasKeyEquivalent:(id)arg1 forEvent:(id)arg2 target:(id *)arg3 action:(SEL *)arg4;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)_keyEquivalentsAreActive;
- (void)_loadMenuItemIconsIfNecessary;
- (void)_loadIconlessMenuContentsIfNecessary;
- (void)_appendNodes:(id)arg1 forNodeInfo:(id)arg2 addSeparator:(BOOL)arg3 shouldFilter:(BOOL)arg4;
- (id)_nodesToDisplayForNodeInfo:(id)arg1;
- (void)_popUpItemAction:(id)arg1;
- (id)_newIconlessMenuItemForNavNode:(id)arg1;
- (id)_keyEquivalentForNode:(id)arg1;
- (void)_updateMenuItemIcon:(id)arg1;
- (BOOL)_lastItemIsNonSeparator;
- (id)selectedNavNode;
- (void)replaceNodeWithIdentifier:(id)arg1 withDataFromDelegate:(id)arg2;
- (void)replaceNodeWithIdentifier:(id)arg1 withNode:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)appendDisplayedNode:(id)arg1 identifier:(id)arg2 title:(id)arg3 displaysChildren:(BOOL)arg4;
- (void)_setContentsDirtyForNodeWithIdentifier:(id)arg1;
- (void)windowOrderedIn;
- (void)windowOrderedOut;
- (void)_stopObservingChildrenAndRemoveAll;
- (void)configureForRegularMode;
- (void)configureForCollapsedMode;
- (void)update;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInitNavNodePopUpButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

