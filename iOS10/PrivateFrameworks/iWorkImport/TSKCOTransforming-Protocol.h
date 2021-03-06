//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class TSKCOAbstractOperation, TSKCOIdPlacementBaseOperation, TSKCOReplaceRangeOperation, TSKCOUpdateIdOperation, TSKCOUpdateRangeOperation;
@protocol TSKCOTransforming;

@protocol TSKCOTransforming
- (TSKCOAbstractOperation<TSKCOTransforming> *)transformDynamicByAnyOperation:(TSKCOAbstractOperation<TSKCOTransforming> *)arg1 byHigherPriority:(_Bool)arg2;
- (TSKCOUpdateRangeOperation *)transformUpdateRangeOperation:(TSKCOUpdateRangeOperation *)arg1 isHigherPriority:(_Bool)arg2;
- (TSKCOReplaceRangeOperation *)transformReplaceRangeOperation:(TSKCOReplaceRangeOperation *)arg1 isHigherPriority:(_Bool)arg2;
- (TSKCOUpdateIdOperation *)transformUpdateIdOperation:(TSKCOUpdateIdOperation *)arg1 isHigherPriority:(_Bool)arg2;
- (TSKCOIdPlacementBaseOperation *)transformIdPlacementBaseOperation:(TSKCOIdPlacementBaseOperation *)arg1 isHigherPriority:(_Bool)arg2;
@end

