//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSObjectController.h>

@class NSArray, NSIndexSet, NSMutableArray, NSMutableIndexSet, NSPredicate;

@interface NSArrayController : NSObjectController
{
    void *_reserved4;
    id _rearrangementExtensions;
    NSMutableArray *_temporaryWorkObjects;
    struct __arrayControllerFlags {
        unsigned int _avoidsEmptySelection:1;
        unsigned int _preservesSelection:1;
        unsigned int _selectsInsertedObjects:1;
        unsigned int _alwaysUsesMultipleValuesMarker:1;
        unsigned int _refreshesAllModelObjects:1;
        unsigned int _filterRestrictsInsertion:1;
        unsigned int _overridesArrangeObjects:1;
        unsigned int _overridesDidChangeArrangementCriteria:1;
        unsigned int _explicitlyCannotInsert:1;
        unsigned int _generatedEmptyArray:1;
        unsigned int _isObservingKeyPathsThroughArrangedObjects:1;
        unsigned int _arrangedObjectsIsMutable:1;
        unsigned int _clearsFilterPredicateOnInsertion:1;
        unsigned int _skipSortingAfterFetch:1;
        unsigned int _automaticallyRearrangesObjects:1;
        unsigned int _reservedArrayController:17;
    } _arrayControllerFlags;
    unsigned long long _observedIndexHint;
    NSMutableIndexSet *_selectionIndexes;
    NSMutableArray *_objects;
    NSIndexSet *_cachedSelectedIndexes;
    NSArray *_cachedSelectedObjects;
    NSArray *_arrangedObjects;
}

+ (id)_modelAndProxyKeys;
+ (id)_keyValueBindingAccessPoints;
+ (id)_nonAutomaticObservingKeys;
+ (void)initialize;
@property(readonly) id arrangedObjects;
- (id)_controllerKeys;
- (BOOL)_validateSingleValue:(id *)arg1 forKeyPath:(id)arg2 error:(id *)arg3;
- (BOOL)_validateSingleValue:(id *)arg1 forKey:(id)arg2 error:(id *)arg3;
- (void)_invokeSingleSelector:(SEL)arg1 withArguments:(id)arg2 onKeyPath:(id)arg3;
- (void)_setSingleValue:(id)arg1 forKeyPath:(id)arg2;
- (void)_setSingleValue:(id)arg1 forKey:(id)arg2;
- (id)_singleValueForKeyPath:(id)arg1;
- (id)_singleValueForKey:(id)arg1;
- (id)_singleMutableArrayValueForKeyPath:(id)arg1;
- (id)_singleMutableArrayValueForKey:(id)arg1;
- (id)_singleValueForKeyPath:(id)arg1 operationType:(long long)arg2;
- (BOOL)_validateMultipleValue:(id *)arg1 forKeyPath:(id)arg2 atIndex:(unsigned long long)arg3 error:(id *)arg4;
- (void)_invokeMultipleSelector:(SEL)arg1 withArguments:(id)arg2 onKeyPath:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)_setMultipleValue:(id)arg1 forKeyPath:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_setMultipleValue:(id)arg1 forKey:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)_multipleMutableArrayValueForKeyPath:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_multipleMutableArrayValueForKey:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_multipleValueForKeyPath:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_multipleValueForKey:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_multipleValuesObjectsAtIndexes:(id)arg1;
- (id)_multipleValuesObjectAtIndex:(unsigned long long)arg1;
- (unsigned long long)_multipleValuesObjectCount;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)selectPrevious:(id)arg1;
- (void)_executeSelectPrevious:(id)arg1 didCommitSuccessfully:(BOOL)arg2 actionSender:(id)arg3;
@property(readonly) BOOL canSelectPrevious;
- (void)selectNext:(id)arg1;
- (void)_executeSelectNext:(id)arg1 didCommitSuccessfully:(BOOL)arg2 actionSender:(id)arg3;
@property(readonly) BOOL canSelectNext;
- (BOOL)canRemove;
- (BOOL)canAdd;
@property(readonly) BOOL canInsert;
- (BOOL)_explicitlyCannotInsert;
- (void)_setExplicitlyCannotAdd:(BOOL)arg1 insert:(BOOL)arg2 remove:(BOOL)arg3;
- (void)_changeEditable:(BOOL)arg1;
- (void)remove:(id)arg1;
- (void)add:(id)arg1;
- (void)_executeAdd:(id)arg1 didCommitSuccessfully:(BOOL)arg2 actionSender:(id)arg3;
- (void)insert:(id)arg1;
- (void)_executeInsert:(id)arg1 didCommitSuccessfully:(BOOL)arg2 actionSender:(id)arg3;
- (void)removeObjects:(id)arg1;
- (void)_removeObjects:(id)arg1 objectHandler:(id)arg2;
- (void)removeObject:(id)arg1;
- (void)removeObjectsAtArrangedObjectIndexes:(id)arg1;
- (void)_removeObjectsAtArrangedObjectIndexes:(id)arg1 contentIndexes:(id)arg2 objectHandler:(id)arg3;
- (void)removeObjectAtArrangedObjectIndex:(unsigned long long)arg1;
- (void)_removeObjectAtArrangedObjectIndex:(unsigned long long)arg1 objectHandler:(id)arg2;
- (void)_ensureSelectionAfterRemoveWithPreferredIndex:(unsigned long long)arg1 sendObserverNotifications:(BOOL)arg2;
- (void)insertObjects:(id)arg1 atArrangedObjectIndexes:(id)arg2;
- (void)_insertObjects:(id)arg1 atArrangedObjectIndexes:(id)arg2 objectHandler:(id)arg3;
- (void)insertObject:(id)arg1 atArrangedObjectIndex:(unsigned long long)arg2;
- (void)_insertObject:(id)arg1 atArrangedObjectIndex:(unsigned long long)arg2 objectHandler:(id)arg3;
- (void)addObjects:(id)arg1;
- (void)addObject:(id)arg1;
- (void)_assertFilterRestrictsInsertionOfObjects:(id)arg1 atArrangedObjectIndexes:(id)arg2;
- (BOOL)_filterRestrictsInsertion;
- (void)_setFilterRestrictsInsertion:(BOOL)arg1;
- (void)_removeNumberOfIndexes:(unsigned long long)arg1 fromSelectionIndexesAtIndex:(unsigned long long)arg2 sendObserverNotifications:(BOOL)arg3;
- (void)_addNumberOfIndexes:(unsigned long long)arg1 toSelectionIndexesAtIndex:(unsigned long long)arg2 sendObserverNotifications:(BOOL)arg3;
- (void)_modifySelectionIndexes:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 addOrRemove:(BOOL)arg3 sendObserverNotifications:(BOOL)arg4;
@property(readonly, copy) NSArray *selectedObjects;
- (void)_cacheSelectedObjectsIfNecessary;
- (BOOL)removeSelectedObjects:(id)arg1;
- (BOOL)addSelectedObjects:(id)arg1;
- (BOOL)setSelectedObjects:(id)arg1;
- (BOOL)_modifySelectedObjects:(id)arg1 useExistingIndexesAsStartingPoint:(BOOL)arg2 avoidsEmptySelection:(BOOL)arg3 addOrRemove:(BOOL)arg4 sendObserverNotifications:(BOOL)arg5 forceUpdate:(BOOL)arg6;
- (BOOL)removeSelectionIndexes:(id)arg1;
- (BOOL)addSelectionIndexes:(id)arg1;
@property(readonly) unsigned long long selectionIndex;
- (BOOL)setSelectionIndex:(unsigned long long)arg1;
@property(readonly, copy) NSIndexSet *selectionIndexes;
- (BOOL)setSelectionIndexes:(id)arg1;
- (BOOL)_selectObjectsAtIndexes:(id)arg1 avoidsEmptySelection:(BOOL)arg2 sendObserverNotifications:(BOOL)arg3 forceUpdate:(BOOL)arg4;
- (BOOL)_selectObjectsAtIndexesNoCopy:(id)arg1 avoidsEmptySelection:(BOOL)arg2 sendObserverNotifications:(BOOL)arg3 forceUpdate:(BOOL)arg4;
- (unsigned long long)_selectionIndexesCount;
@property BOOL alwaysUsesMultipleValuesMarker;
@property BOOL clearsFilterPredicateOnInsertion;
@property BOOL selectsInsertedObjects;
@property BOOL preservesSelection;
@property BOOL avoidsEmptySelection;
- (void)rearrangeObjects;
- (void)_prepareContentWithNewObject:(id)arg1;
- (id)_arrayContent;
- (BOOL)_sendsContentChangeNotifications;
- (void)setUsesLazyFetching:(BOOL)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (void)_setContentInBackground:(id)arg1;
- (void)didChangeArrangementCriteria;
- (void)_didChangeArrangementCriteriaWithOperationsMask:(unsigned long long)arg1 useBasis:(id)arg2;
@property(readonly, copy) NSArray *automaticRearrangementKeyPaths;
- (void)_addKeyPathsFromPredicate:(id)arg1 toSet:(id)arg2;
@property BOOL automaticallyRearrangesObjects;
- (void)_setUpAutomaticRearrangingOfObjects;
- (void)_updateAutomaticRearrangementKeysPaths;
@property(copy) NSArray *sortDescriptors;
@property(retain) NSPredicate *filterPredicate;
- (void)_arrangeObjectsWithSelectedObjects:(id)arg1 avoidsEmptySelection:(BOOL)arg2 operationsMask:(unsigned long long)arg3 useBasis:(id)arg4;
- (void)_updateObservingForAutomaticallyRearrangingObjects;
- (void)_ensureObjectsAreMutable;
- (void)_setObjects:(id)arg1;
- (id)arrangeObjects:(id)arg1;
- (id)_sortObjects:(id)arg1;
- (id)_filterObjects:(id)arg1;
- (void)didChangeValuesForArrangedKeys:(BOOL)arg1 objectKeys:(BOOL)arg2 indexKeys:(BOOL)arg3;
- (void)willChangeValuesForArrangedKeys:(BOOL)arg1 objectKeys:(BOOL)arg2 indexKeys:(BOOL)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)_shouldSendObserverNotificationForModelOrProxyKey:(id)arg1 keyPath:(id)arg2 ofObject:(id)arg3;
- (BOOL)_refreshesAllModelObjects;
- (void)_setRefreshesAllModelObjects:(BOOL)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)_stopObservingSelectionIfNecessary;
- (void)_startObservingSelectionIfNecessary;
- (BOOL)_registerObservingForAllModelObjects;
- (id)description;
- (void)_dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_init;
- (id)_rearrangementExtensions:(BOOL)arg1;
- (void)_reactToMatchingInsertions:(id)arg1 deletions:(id)arg2 refreshed:(id)arg3;
- (void)addRangeOfInterest:(struct _NSRange)arg1;
- (BOOL)_performFetchWithRequest:(id)arg1 merge:(BOOL)arg2 error:(id *)arg3;
- (id)defaultFetchRequest;
- (void)setManagedObjectContext:(id)arg1;

@end

