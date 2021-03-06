//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CPZone, NSMutableArray;

@interface CPColumnMaker : NSObject
{
    NSMutableArray *columns;
    CPZone *currentZone;
    NSMutableArray *allParagraphs;
    NSMutableArray *thinHorizontalShapes;
    NSMutableArray *otherShapes;
    NSMutableArray *images;
    NSMutableArray *paragraphWrappers;
    struct CGRect pageBounds;
    double maxParagraphDistance;
}

@property struct CGRect pageBounds; // @synthesize pageBounds;
- (void)makeColumnsFrom:(id)arg1 zone:(id)arg2;
- (void)anchorImages;
- (void)splitColumns:(id)arg1;
- (double)averageSpacing:(id)arg1;
- (BOOL)closeImagesBetween:(id)arg1 and:(id)arg2 bounds:(struct CGRect)arg3;
- (void)callOuts;
- (void)intersectionCallout:(id)arg1;
- (BOOL)canSafelyAdd:(id)arg1 to:(id)arg2;
- (BOOL)column:(id)arg1 isLinkedBelowTo:(id)arg2;
- (BOOL)paragraph:(id)arg1 isLinkedBelowTo:(id)arg2;
- (id)chunkAbove:(id)arg1 in:(id)arg2;
- (id)paragraphAbove:(id)arg1 in:(id)arg2;
- (id)paragraphBelow:(id)arg1 in:(id)arg2;
- (BOOL)paragraph:(id)arg1 isBelow:(id)arg2;
- (BOOL)paragraph:(id)arg1 isAbove:(id)arg2;
- (BOOL)paragraph:(id)arg1 notOnSameShapeAs:(id)arg2;
- (BOOL)cuttingShapeBetween:(id)arg1 and:(id)arg2;
- (void)partitionShapes:(id)arg1;
- (BOOL)intervalOverlapLeft:(double)arg1 right:(double)arg2 paragraphs:(id)arg3;
- (id)columns;
- (void)dealloc;
- (id)init;

@end

