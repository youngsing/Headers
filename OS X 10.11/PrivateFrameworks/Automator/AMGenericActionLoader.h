//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AMGenericActionLoader : NSObject
{
}

+ (id)sharedGenericActionLoader;
- (id)actionsFromApplicationDefinition:(id)arg1;
- (id)actionsFromTigerApplicationDefinition:(id)arg1;
- (id)actionsFromLeopardApplicationDefinition:(id)arg1;
- (id)genericActionBundleIdentiferForTigerKey:(id)arg1;
- (id)genericActionBundleIdentiferForLeopardKey:(id)arg1;
- (id)cachingDictionaryForDefinedActionWithGenericActionBundleIdentifier:(id)arg1 applicationDefinition:(id)arg2;
- (id)keywordsForDefinedActionWithGenericActionBundleIdentifier:(id)arg1 leopardApplicationDefinition:(id)arg2;
- (id)keywordsForDefinedActionWithGenericActionBundleIdentifier:(id)arg1 tigerApplicationDefinition:(id)arg2;
- (id)nameForDefinedActionWithGenericActionBundleIdentifier:(id)arg1 applicationDefinition:(id)arg2;
- (BOOL)optionalKeyValueForGenericActionBundleIdentifier:(id)arg1;
- (void)setupGenericAction:(id)arg1 iconsWithDefinition:(id)arg2;
- (id)actionIconForDefinition:(id)arg1 large:(BOOL)arg2;
- (id)definedActionWithGenericActionBundle:(id)arg1 applicationDefinition:(id)arg2;
- (id)definedActionWithGenericActionBundle:(id)arg1 tigerApplicationDefinition:(id)arg2;
- (id)definedActionWithGenericActionBundle:(id)arg1 leopardApplicationDefinition:(id)arg2;
- (id)localizedApplicationNamesForValue:(id)arg1 fromBundle:(id)arg2;

@end

