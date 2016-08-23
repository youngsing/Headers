//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSArray, NSMenu, NSMenuItem, NSString;

@interface NSPopUpButton : NSButton
{
    struct __pbFlags {
        unsigned int needsPullsDownFromTemplate:1;
        unsigned int RESERVED:31;
    } _pbFlags;
    id _popupReserved;
}

+ (void)initialize;
- (struct NSEdgeInsets)alignmentRectInsets;
@property(readonly) long long selectedTag;
- (long long)state;
- (id)image;
- (id)title;
- (void)_windowChangedKeyState;
- (void)_setWindow:(id)arg1;
- (void)_updateMenuUniquing;
- (BOOL)_allowsContextMenus;
- (void)moveUp:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)performClick:(id)arg1;
- (void)sizeToFit;
@property(readonly, copy) NSString *titleOfSelectedItem;
@property(readonly, copy) NSArray *itemTitles;
- (id)itemTitleAtIndex:(long long)arg1;
- (void)synchronizeTitleAndSelectedItem;
@property(readonly) long long indexOfSelectedItem;
@property(readonly) NSMenuItem *selectedItem;
- (void)setTitle:(id)arg1;
- (BOOL)selectItemWithTag:(long long)arg1;
- (void)selectItemWithTitle:(id)arg1;
- (void)selectItemAtIndex:(long long)arg1;
- (void)selectItem:(id)arg1;
@property(readonly) NSMenuItem *lastItem;
- (id)itemWithTitle:(id)arg1;
- (id)itemAtIndex:(long long)arg1;
- (long long)indexOfItemWithTarget:(id)arg1 andAction:(SEL)arg2;
- (long long)indexOfItemWithRepresentedObject:(id)arg1;
- (long long)indexOfItemWithTag:(long long)arg1;
- (long long)indexOfItemWithTitle:(id)arg1;
- (long long)indexOfItem:(id)arg1;
@property(readonly) long long numberOfItems;
@property(readonly, copy) NSArray *itemArray;
- (void)removeAllItems;
- (void)removeItemAtIndex:(long long)arg1;
- (void)removeItemWithTitle:(id)arg1;
- (void)insertItemWithTitle:(id)arg1 atIndex:(long long)arg2;
- (void)addItemsWithTitles:(id)arg1;
- (void)addItemWithTitle:(id)arg1;
@property unsigned long long preferredEdge;
@property BOOL autoenablesItems;
@property BOOL pullsDown;
@property(retain) NSMenu *menu;
- (void)_fixTargetsForMenu:(id)arg1;
- (void)instantiateWithObjectInstantiator:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 pullsDown:(BOOL)arg2;
- (id)ns_widgetType;

@end

