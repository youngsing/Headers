//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Automator/AMGenericAction.h>

@class AMApplicationDefinition, AMWhoseListView, NSArray, NSBox, NSMutableArray, NSPopUpButton, NSTextField;

@interface AMFindItemsAction : AMGenericAction
{
    NSPopUpButton *_findingPopUpButton;
    NSTextField *_findingLabel;
    NSBox *_whoseBox;
    NSTextField *_whoseLabel;
    AMWhoseListView *_whoseListView;
    AMApplicationDefinition *_applicationDefinition;
    NSArray *_applicationNames;
    NSArray *_findingNames;
    NSMutableArray *_whoseItems;
}

- (void)removeWhoseItem:(id)arg1;
- (void)addWhoseItem:(id)arg1;
- (void)changeFinding:(id)arg1;
- (void)changeFindingType:(id)arg1;
- (void)updateName;
- (void)updateNameForApplication:(id)arg1 findingName:(id)arg2;
- (void)_addLocalizedItemsWithTitles:(id)arg1 toPopUpButton:(id)arg2;
- (id)_applicationDefinitionBundle;
- (id)_propertyWithName:(id)arg1 inProperties:(id)arg2;
- (void)_setProperties:(id)arg1 andSettings:(id)arg2 ofWhoseItemAtIndex:(unsigned long long)arg3;
- (void)_removeAllWhoseItems;
- (void)_removeWhoseItemAtIndex:(unsigned long long)arg1;
- (void)_insertWhoseItemAtIndex:(unsigned long long)arg1 withSettings:(id)arg2;
- (void)_adjustView;
- (id)_elementOfElements:(id)arg1 withName:(id)arg2 usingKey:(id)arg3;
- (id)_elementNamesFromElements:(id)arg1 usingKey:(id)arg2;
- (void)_addSettings:(id)arg1;
- (void)_insertSettings:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_settingsAtIndex:(unsigned long long)arg1;
- (id)_defaultSettings;
- (void)setWhoseItems:(id)arg1;
- (id)whoseItems;
- (void)setFindingNames:(id)arg1;
- (id)findingNames;
- (id)providesDictionary;
- (id)applicationNames;
- (void)setApplicationDefinition:(id)arg1;
- (id)applicationDefinition;
- (id)script;
- (void)awakeFromNib;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDefinition:(id)arg1 fromArchive:(BOOL)arg2;
- (id)initWithBundle:(id)arg1;

@end

