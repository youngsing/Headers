//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCoding-Protocol.h>
#import <AppKit/NSCopying-Protocol.h>
#import <AppKit/NSImmediateActionAnimationController-Protocol.h>
#import <AppKit/NSMenuItem-Protocol.h>
#import <AppKit/NSPopoverPresenting-Protocol.h>
#import <AppKit/NSValidatedUserInterfaceItem-Protocol.h>

@class NSAttributedString, NSImage, NSMenu, NSString, NSView;

@interface NSMenuItem : NSObject <NSImmediateActionAnimationController, NSPopoverPresenting, NSMenuItem, NSCopying, NSCoding, NSValidatedUserInterfaceItem>
{
    NSMenu *_menu;
    NSString *_title;
    NSString *_keyEquivalent;
    NSString *_uiid;
    id _repObject;
    NSMenu *_submenu;
    id _extraData;
    id _target;
    SEL _action;
    long long _tag;
    unsigned char _keyEquivalentModifierMask;
    struct __miFlags {
        unsigned int keGenerationCount:8;
        unsigned int disabled:1;
        unsigned int isSeparator:1;
        unsigned int hidden:1;
        unsigned int alternate:1;
        unsigned int moreAlternate:1;
        unsigned int singleAlternate:1;
        unsigned int indent:4;
        unsigned int keShareMode:3;
        unsigned int state:2;
        unsigned int destructive:1;
        unsigned int RESERVED1:1;
        unsigned int limitedView:1;
        unsigned int nextItemIsAlternate:1;
        unsigned int blockKE:1;
        unsigned int ignoredForAccessibility:1;
        unsigned int hiddenActiveKE:1;
        unsigned int noRepeatKEs:1;
        unsigned int targetWeak:1;
    } _miFlags;
}

+ (struct __CFString *)_menuItemViewerHIViewClassName;
+ (BOOL)_hasTitlePathBasedUserKeyEquivalent;
+ (void)_updateUserKEsAfterActivation:(id)arg1;
+ (id)standardQuickLookMenuItem;
+ (id)standardShareMenuItemWithItems:(id)arg1;
+ (id)standardShareMenuItemForItems:(id)arg1;
+ (id)standardDeleteMenuItem;
+ (id)standardPasteMenuItem;
+ (id)standardCopyMenuItem;
+ (id)separatorItem;
+ (BOOL)usesUserKeyEquivalents;
+ (void)setUsesUserKeyEquivalents:(BOOL)arg1;
+ (void)initialize;
+ (id)_defaultWindowMenuStateImageDirtyWindow;
+ (id)_defaultWindowMenuStateImageKeyWindow;
+ (id)_defaultWindowMenuStateImageMinimizedWindow;
+ (id)_menuItemForItem:(id)arg1 view:(id)arg2 itemFrame:(struct CGRect)arg3 aimFrame:(struct CGRect)arg4 options:(id)arg5;
+ (void)_dispatchActionBlockFor:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)setUserInterfaceItemIdentifier:(id)arg1;
- (id)userInterfaceItemIdentifier;
- (id)_bindingAdaptor;
- (void)_setBindingAdaptor:(id)arg1;
- (BOOL)_requiresModifiersToBeVisible;
- (void)_setRequiresModifiersToBeVisible:(BOOL)arg1;
- (BOOL)_isAlternateDespiteNonmatchingModifiers;
- (void)_setIsAlternateDespiteNonmatchingModifiers:(BOOL)arg1;
- (BOOL)_respectsKeyEquivalentForRepeatKeys;
- (void)_setRespectsKeyEquivalentForRepeatKeys:(BOOL)arg1;
- (BOOL)_respectsKeyEquivalentWhileHidden;
- (void)_setRespectsKeyEquivalentWhileHidden:(BOOL)arg1;
- (void)_setIgnoredForAccessibility:(BOOL)arg1;
- (BOOL)_ignoredForAccessibility;
- (id)_startingWindowForSendAction:(SEL)arg1;
- (id)_menuItemViewer;
@property(retain) NSView *view;
- (BOOL)_viewHandlesEvents;
- (void)_setViewHandlesEvents:(BOOL)arg1;
- (void)_setViewNeedsDisplayInRect:(struct CGRect)arg1;
- (long long)_changedFlags;
- (void)_setChangedFlags:(long long)arg1;
- (BOOL)_isHelpMenuAppKitOnly;
- (BOOL)_isHelpMenu;
@property(copy) NSString *toolTip;
@property(retain) id representedObject;
@property long long tag;
@property SEL action;
@property __weak id target;
@property long long indentationLevel;
- (void)_setNextItemIsAlternate:(BOOL)arg1;
- (BOOL)_nextItemIsAlternate;
- (BOOL)isDestructive;
- (void)setDestructive:(BOOL)arg1;
@property(getter=isAlternate) BOOL alternate;
- (BOOL)_isEnabled;
@property(readonly, getter=isHighlighted) BOOL highlighted;
- (BOOL)_canBeHighlighted;
@property(getter=isEnabled) BOOL enabled;
@property(retain) NSImage *mixedStateImage;
@property(retain) NSImage *offStateImage;
@property(retain) NSImage *onStateImage;
@property long long state;
- (long long)_currentStateImageEnumeration;
- (id)_imageForState:(long long)arg1;
- (void)_setIconRef:(struct OpaqueIconRef *)arg1;
- (struct OpaqueIconRef *)_iconRef;
@property(retain) NSImage *image;
- (void)setTitleWithMnemonic:(id)arg1;
- (id)mnemonic;
- (unsigned long long)mnemonicLocation;
- (void)setMnemonicLocation:(unsigned long long)arg1;
- (void)_setMenuItemBelongsToContextualMenu:(BOOL)arg1;
- (BOOL)_canShareKeyEquivalentWithItem:(id)arg1;
- (long long)keyEquivalentSharingMode;
- (void)setKeyEquivalentSharingMode:(long long)arg1;
- (BOOL)_requiresKERegistration;
- (unsigned long long)_keyEquivalentPriority;
- (unsigned long long)_defaultKeyEquivalentPriority;
- (void)_setDefaultKeyEquivalentPriority:(unsigned long long)arg1;
- (BOOL)_blockKE;
- (void)_setBlockKE:(BOOL)arg1;
- (BOOL)_menuTitleMayBeInvolvedInMenuPaths;
- (void)_recursivelyUpdateKeyEquivalents;
- (unsigned long long)_desiredKeyEquivalentModifierMask;
- (id)_desiredKeyEquivalent;
- (unsigned long long)_rawKeyEquivalentModifierMask;
- (id)_rawKeyEquivalent;
- (BOOL)_mayBeInvolvedInMenuItemPath;
- (void)_recacheUserKeyEquivalentOnlyIfStale:(BOOL)arg1;
- (unsigned long long)userKeyEquivalentModifierMask;
@property(readonly, copy) NSString *userKeyEquivalent;
- (void)_internalPerformActionThroughMenuIfPossible;
- (void)_corePerformAction;
- (void)_sendItemSelectedNote;
- (BOOL)_canSendAction:(SEL)arg1;
- (unsigned short)_keyEquivalentVirtualKeyCode;
- (void)_setKeyEquivalentVirtualKeyCode:(unsigned short)arg1;
- (BOOL)_shouldForceShiftModifierWithKeyEquivalent:(id)arg1;
- (id)_applicableImage;
- (unsigned long long)_applicableKeyEquivalentModifierMask;
@property unsigned long long keyEquivalentModifierMask;
@property(copy) NSString *keyEquivalent;
- (void)_cacheUserKeyEquivalentInfo:(struct NSMenuUserKeyEquivalentInfo_t)arg1;
- (struct NSMenuUserKeyEquivalentInfo_t)_fetchFreshUserKeyEquivalentInfo;
@property(readonly, getter=isSeparatorItem) BOOL separatorItem;
- (struct CGSize)_cachedAttributedTitleSizeForMeasuring:(BOOL)arg1 hasAttachment:(char *)arg2;
- (struct CGSize)_computeBoundingRectSizeForTitle:(id)arg1 hasAttachment:(char *)arg2;
- (void)setFont:(id)arg1;
- (id)font;
- (void)_setNewItemsCount:(unsigned long long)arg1;
- (unsigned long long)_newItemsCount;
- (id)_alternateAttributedTitle;
- (void)_setAlternateAttributedTitle:(id)arg1;
@property(copy) NSAttributedString *attributedTitle;
@property(copy) NSString *title;
- (id)_titlePathForUserKeyEquivalents;
- (id)_titleForUserKeyEquivalents;
- (void)_configureAsSeparatorItem;
@property(readonly, getter=isHiddenOrHasHiddenAncestor) BOOL hiddenOrHasHiddenAncestor;
@property(getter=isHidden) BOOL hidden;
- (BOOL)_isHidden;
- (void)_setHidden:(BOOL)arg1;
@property(retain) NSMenu *submenu;
- (void)_setSubmenu:(id)arg1;
@property(readonly) BOOL hasSubmenu;
@property NSMenu *menu;
@property(readonly) NSMenuItem *parentItem;
- (id)_superitem;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (long long)backgroundStyle;
- (id)init;
- (id)initWithTitle:(id)arg1 action:(SEL)arg2 keyEquivalent:(id)arg3;
- (void)recognizerDidDismissAnimation:(id)arg1;
- (void)recognizerDidCompleteAnimation:(id)arg1;
- (void)recognizerDidCancelAnimation:(id)arg1;
- (void)recognizerDidUpdateAnimation:(id)arg1;
- (void)recognizerWillBeginAnimation:(id)arg1;
- (void)_releaseDeepAnimation;
- (void)_completeDeepAnimation;
- (void)_cancelPredeepAnimation;
- (void)_doPredeepAnimationWithProgress:(double)arg1;
- (void)_beginPredeepAnimationAgainstPoint:(struct CGPoint)arg1 inView:(id)arg2;
@property(readonly) BOOL _wantsDeepAnimationCallbacks;
- (void)showPopover:(id)arg1;
- (void)setActionBlock:(CDUnknownBlockType)arg1;
- (void)invokeActionBlock:(id)arg1;
- (id)controlView;
- (void)setControlView:(id)arg1;
- (id)_menuCellInitWithCoder:(id)arg1;
- (id)_buttonCellInitWithCoder:(id)arg1;
- (id)_actionCellInitWithCoder:(id)arg1;
- (id)_cellInitWithCoder:(id)arg1;
- (BOOL)accessibilitySetOverrideValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilitySupportsOverriddenAttributes;
- (BOOL)accessibilityIsIgnored;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

