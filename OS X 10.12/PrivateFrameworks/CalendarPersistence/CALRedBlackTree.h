//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RBNode;

@interface CALRedBlackTree : NSObject
{
    RBNode *_root;
    long long _count;
}

@property(retain) RBNode *root; // @synthesize root=_root;
- (long long)count;
- (id)description;
- (id)allNodes;
- (id)nodesStartingAt:(id)arg1 endingBefore:(id)arg2;
- (void)removeObjectsStartingAt:(id)arg1 endingBefore:(id)arg2;
- (void)_recursiveTraverseKeysFromNode:(id)arg1 intoArray:(id)arg2 startingAtOrAfterKey:(id)arg3 stoppingBeforeKey:(id)arg4;
- (void)_recursiveTraverseFromNode:(id)arg1 intoArray:(id)arg2 startingAtOrAfterKey:(id)arg3 stoppingBeforeKey:(id)arg4;
- (void)_recursiveTraverseFromNode:(id)arg1 intoArray:(id)arg2;
- (id)nodeAtOrAboveKey:(id)arg1;
- (id)nodeAtOrBelowKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)_recursiveRemoveNodeWithKey:(id)arg1 fromNode:(id)arg2 isDone:(char *)arg3;
- (id)_balanceAfterRemove:(id)arg1 isRight:(BOOL)arg2 isDone:(char *)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)_recursiveSmallestNodeWithKeyGreaterThanOrEqualTo:(id)arg1 fromNode:(id)arg2;
- (id)_recursiveLargestNodeWithKeyLessThanOrEqualTo:(id)arg1 fromNode:(id)arg2;
- (id)_recursiveFindNodeWithKey:(id)arg1 fromNode:(id)arg2;
- (BOOL)_recursiveInsertNode:(id)arg1 fromNode:(id)arg2;
- (void)_rebalanceFromNode:(id)arg1;
- (id)_leftRotate:(id)arg1;
- (id)_rightRotate:(id)arg1;
- (void)dealloc;

@end
