//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class TSPObject;
@protocol TSKCOIntermediateOperationEnumerator;

__attribute__((visibility("hidden")))
@interface TSKCOOperationTransformer : NSObject <NSCopying>
{
    NSObject<TSKCOIntermediateOperationEnumerator> *mEnumerator;
    _Bool mIsHigherPriority;
    TSPObject *mDelegate;
}

@property(readonly, nonatomic) NSObject<TSKCOIntermediateOperationEnumerator> *enumerator; // @synthesize enumerator=mEnumerator;
@property(nonatomic) TSPObject *delegate; // @synthesize delegate=mDelegate;
- (void)saveToArchiver:(id)arg1 message:(struct OperationTransformer *)arg2;
- (id)initWithUnarchiver:(id)arg1 message:(const struct OperationTransformer *)arg2;
- (id)description;
@property(readonly, nonatomic) _Bool hasOperations;
- (void)appendOperation:(id)arg1;
- (id)transformOperations:(id)arg1;
- (id)transformUpdateRangeOperation:(id)arg1;
- (id)transformReplaceRangeOperation:(id)arg1;
- (id)transformUpdateIdOperation:(id)arg1;
- (id)transformIdPlacementBaseOperation:(id)arg1;
- (void)dealloc;
- (id)initWithOperationEnumerator:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOperationEnumerator:(id)arg1 isHigherPriority:(_Bool)arg2;

@end
