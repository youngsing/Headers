//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class TSTCellRegion, TSTMergeListWrapper;

@protocol TSTLayoutDynamicContentProtocol <NSObject>
- (_Bool)dynamicContentMustDrawOnMainThread;
- (_Bool)cell:(id *)arg1 forCellID:(struct TSUCellCoord)arg2;

@optional
- (TSTMergeListWrapper *)mergesIntersectingCellRegion:(TSTCellRegion *)arg1;
- (_Bool)mergeRange:(struct TSUCellRect *)arg1 forCellID:(struct TSUCellCoord)arg2;
@end
