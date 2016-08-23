//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ASKEventHandlerRegistry : NSObject
{
    NSMutableDictionary *_classes;
    NSMutableDictionary *_descriptions;
    NSMutableDictionary *_terminologies;
}

+ (void)setSharedRegistry:(id)arg1;
+ (id)sharedRegistry;
+ (void)_forceLoadDescriptions;
+ (void)load;
- (void)_loadDescriptionsForLoadedBundle:(id)arg1;
- (void)_loadDescriptionsForExistingBundles;
- (void)loadDescriptionsFromBundle:(id)arg1;
- (void)loadDescriptionsWithDictionary:(id)arg1 fromBundle:(id)arg2;
- (void)registerDescription:(id)arg1 withClassName:(id)arg2;
- (BOOL)isEventHandlerName:(id)arg1 supportedBy:(id)arg2;
- (BOOL)isEventHandler:(id)arg1 supportedBy:(id)arg2;
- (id)descriptionWithTerminologyName:(id)arg1;
- (id)descriptionWithName:(id)arg1 forObject:(id)arg2;
- (id)descriptionWithName:(id)arg1 forClassName:(id)arg2;
- (id)descriptionWithName:(id)arg1;
- (id)descriptionsForClass:(Class)arg1 includingSuperClasses:(BOOL)arg2;
- (id)descriptionsForClass:(Class)arg1;
- (id)descriptionsForClassName:(id)arg1 includingSuperClasses:(BOOL)arg2;
- (id)descriptionsForClassName:(id)arg1;
- (id)descriptionsForObject:(id)arg1;
- (void)removeExcludedEventHandlersFormDescriptions:(id)arg1 forClassName:(id)arg2;
- (void)addExcludedEventHandlers:(id)arg1 forClassName:(id)arg2;
- (void)addDescriptions:(id)arg1 forClassName:(id)arg2;
- (id)_classDescriptionForClassName:(id)arg1;
- (id)terminologies;
- (id)descriptions;
- (id)classes;
- (void)dealloc;
- (id)init;

@end

