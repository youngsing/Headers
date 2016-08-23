//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexPath, NSMutableArray;

@interface NSTreeNode : NSObject
{
    id _childNodesProxy;
    id _representedObject;
    void *_observationInfo;
    id _reserved2;
    NSMutableArray *_childNodes;
    NSTreeNode *_parentNode;
    struct __NSTreeNodeFlags {
        unsigned int ignoreObserving:1;
        unsigned int reserved:31;
    } _NSTreeNodeFlags;
}

+ (id)treeNodeWithRepresentedObject:(id)arg1;
- (id)objectAtIndexPath:(id)arg1;
- (id)_descendantNodeWithRepresentedObjectLineage:(id)arg1;
- (void)sortWithSortDescriptors:(id)arg1 recursively:(BOOL)arg2;
@property(readonly) NSIndexPath *indexPath;
- (id)_indexPath;
- (void)startObservingModelKeyPath:(id)arg1;
- (unsigned long long)countOfSubNodes;
- (unsigned long long)count;
- (unsigned long long)childCountForKeyPath:(id)arg1;
- (id)objectInSubNodesAtIndex:(unsigned long long)arg1;
- (id)subnodeAtIndex:(unsigned long long)arg1;
- (id)subNodesAtIndexes:(id)arg1;
- (void)getSubNodes:(id *)arg1 range:(struct _NSRange)arg2;
@property(readonly, getter=isLeaf) BOOL leaf;
- (void)willAccessChildNodes;
- (id)descendantNodeAtIndexPath:(id)arg1;
@property(readonly) NSMutableArray *mutableChildNodes;
@property(readonly, copy) NSArray *childNodes;
- (id)_privateChildNodes;
@property(readonly) NSTreeNode *parentNode;
- (void)setParentNode:(id)arg1;
- (void)_detachFromParent;
- (void)setRepresentedObject:(id)arg1;
@property(readonly) id representedObject;
- (id)observedObject;
- (BOOL)_ignoreObserving;
- (void)_enableObserving;
- (void)_disableObserving;
- (BOOL)hasAncestor:(id)arg1;
- (void)removeSubNodesAtIndexes:(id)arg1;
- (void)_removeSubNodesAtIndexes:(id)arg1;
- (void)removeObjectFromSubNodesAtIndex:(unsigned long long)arg1;
- (void)_removeObjectFromSubNodesAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inSubNodesAtIndex:(unsigned long long)arg2;
- (void)_insertObject:(id)arg1 inSubNodesAtIndex:(unsigned long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void *)observationInfo;
- (void)setObservationInfo:(void *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithRepresentedObject:(id)arg1;
- (id)init;

@end

