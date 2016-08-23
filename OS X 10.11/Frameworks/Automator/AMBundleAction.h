//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Automator/AMAction.h>

#import <Automator/NSCoding-Protocol.h>
#import <Automator/NSCopying-Protocol.h>
#import <Automator/NSTokenFieldDelegate-Protocol.h>

@class NSArray, NSBundle, NSMutableDictionary, NSString, NSView;

@interface AMBundleAction : AMAction <NSTokenFieldDelegate, NSCoding, NSCopying>
{
    NSView *_view;
    NSBundle *_bundle;
    NSArray *_topLevelObjects;
    id _reserved;
    id _reserved2;
    id _reserved3;
    id _reserved4;
}

- (id)showWhenRunItems;
- (id)selectedShowWhenRunItems;
- (id)_itemNameFromString:(id)arg1;
- (id)_getAccessibilityTitleUIElementAttributeForView:(id)arg1;
- (id)_findLabelViewForView:(id)arg1;
- (void)_postLoadView:(id)arg1 withStudioScripts:(id)arg2;
- (id)_scriptWithContentsOfURL:(id)arg1;
- (int)validate;
- (void)setDisabled:(BOOL)arg1;
- (void)_updateParameters;
- (id)actionViewClassName;
- (id)iconPath;
- (id)name;
- (void)assignBindingsToVariables;
- (BOOL)containsVariables;
- (id)evaluateParameterValue:(id)arg1;
- (id)createRuntimeParameters;
- (void)setRuntimeParameters:(id)arg1;
- (id)runtimeParameters;
@property(retain) NSMutableDictionary *parameters;
- (void)setBundleIdentifier:(id)arg1;
- (id)bundleIdentifier;
- (void)setBundlePath:(id)arg1;
- (id)bundlePath;
- (void)setBundle:(id)arg1;
@property(readonly) NSBundle *bundle;
- (void)setView:(id)arg1;
@property(readonly) NSView *view;
- (BOOL)_hasNib;
- (id)_view;
- (BOOL)isViewLoaded;
@property(readonly) BOOL hasView;
- (id)bundleVersion;
- (id)version;
- (void)dealloc;
- (void)_releaseTopLevelObjects;
- (void)_closed;
- (void)generateUUIDs;
- (void)loadPropertyList:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)awakeFromBundle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefinition:(id)arg1 fromArchive:(BOOL)arg2;
- (id)initWithBundle:(id)arg1;
- (BOOL)isAMBundleAction__;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

