//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MTLToolsObject : NSObject
{
    MTLToolsObject *_strongParent;
    MTLToolsObject *_parent;
    id _baseObject;
    struct ILayerLockingPolicy *_lockingPolicy;
}

+ (void)visitObjects:(id)arg1 withVisitor:(id)arg2;
+ (id)dispatchQueue;
@property(nonatomic) struct ILayerLockingPolicy *lockingPolicy; // @synthesize lockingPolicy=_lockingPolicy;
@property(retain, nonatomic) id baseObject; // @synthesize baseObject=_baseObject;
- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
- (id)parent;
- (id)strongParent;
- (void)setOriginalObject:(id)arg1;
- (id)originalObject;
- (id)baseObjectWithClass:(Class)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 lockingPolicy:(struct ILayerLockingPolicy *)arg3;
- (id)initWithBaseObject:(id)arg1 strongParent:(id)arg2;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;

@end
