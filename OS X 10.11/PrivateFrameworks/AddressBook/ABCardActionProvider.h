//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ABCardActionProvider : NSObject
{
    NSMutableDictionary *_actionsByProperty;
}

+ (id)sharedInstance;
@property(readonly) NSMutableDictionary *actionsByProperty; // @synthesize actionsByProperty=_actionsByProperty;
- (void)loadScriptsInDirectory:(id)arg1;
- (BOOL)callbacksAreValid:(CDStruct_014ac2ec *)arg1;
- (id)callbackActionForBundleAtPath:(id)arg1;
- (id)actionForBundleAtPath:(id)arg1;
- (void)loadBundlesInDirectory:(id)arg1;
- (void)makeSureUserPlugInFolderExists;
- (BOOL)shouldLoadExternalActions;
- (void)loadExternalActions;
- (void)loadInternalActions;
- (void)loadActions;
- (void)addDelegatedActionResponderOfClass:(Class)arg1 actionProperty:(id)arg2;
- (void)addDelegatedActionResponderOfClass:(Class)arg1;
- (void)addActionResponder:(id)arg1 forProperty:(id)arg2;
- (void)addActionResponder:(id)arg1;
- (id)actionsForSuggestedValueForProperty:(id)arg1 value:(id)arg2;
- (id)actionsForProperty:(id)arg1;
- (void)dealloc;

@end

