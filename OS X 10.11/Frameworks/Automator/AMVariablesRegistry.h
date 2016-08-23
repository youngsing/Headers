//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface AMVariablesRegistry : NSObject
{
    NSMutableDictionary *_variables;
    NSMutableDictionary *_variablesByCategory;
    NSMutableDictionary *_variablesByApplication;
    NSMutableArray *_customVariables;
    NSMutableDictionary *_variableIdentifiers;
    BOOL _didLoadAllVariables;
}

+ (id)pathForLargeIconForVariableWithIdentifier:(id)arg1;
+ (id)largeIconForVariableWithIdentifier:(id)arg1;
+ (id)iconForVariableWithIdentifier:(id)arg1;
+ (id)sharedVariablesRegistry;
- (void)calculateVariablesByApplication;
- (void)calculateVariablesByCategory;
- (id)variableWithIdentifier:(id)arg1;
- (id)variableWithAllChildrenWithUUID:(id)arg1;
- (id)variableWithUUID:(id)arg1;
- (void)reallyRemoveVariables:(id)arg1;
- (void)removeVariables:(id)arg1;
- (void)removeVariable:(id)arg1;
- (void)reallyAddVariables:(id)arg1;
- (void)addCustomVariableDictionary:(id)arg1;
- (void)addVariablesWithPropertyLists:(id)arg1;
- (void)_setupVariable:(id)arg1;
- (void)addVariables:(id)arg1;
- (void)addVariable:(id)arg1;
- (void)loadVariablesByApplication;
- (void)loadAllVariables;
- (void)createTemplateVariables;
- (void)createBuiltInVariables;
- (id)templateVariableIdentifiers;
- (id)builtInVariableIdentifiers;
- (void)_mapUtilitiesVariableIdentifiers;
- (id)utilitiesVariableIdentifiers;
- (id)textAndDataVariableIdentifiers;
- (void)_mapSystemVariableIdentifiers;
- (id)systemVariableIdentifiers;
- (void)_mapLocationsVariableIdentifiers;
- (id)locationsVariableIdentifiers;
- (void)_mapDateAndTimeVariableIdentifiers;
- (id)dateAndTimeVariableIdentifiers;
- (void)_mapUserVariableIdentifiers;
- (id)userVariableIdentifiers;
- (void)mapVariableIdentifiersToSelectorAndNames;
- (id)variableWithName:(id)arg1 identifier:(id)arg2 value:(id)arg3;
- (id)customVariables;
- (id)variableIdentifiers;
- (id)variablesByApplication;
- (id)variablesByCategory;
- (id)variables;
- (BOOL)didLoadAllVariables;
- (void)dealloc;
- (id)init;
- (void)loadVariablesFromDisk;

@end

