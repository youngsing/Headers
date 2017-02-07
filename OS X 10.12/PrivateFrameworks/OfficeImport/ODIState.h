//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, OADDrawingTheme, OADGroup, OADOrientedBounds, OADShapeStyle, ODDDiagram;

__attribute__((visibility("hidden")))
@interface ODIState : NSObject
{
    ODDDiagram *mDiagram;
    OADOrientedBounds *mDiagramOrientedBounds;
    struct CGRect mLogicalBounds;
    double mScale;
    OADGroup *mGroup;
    NSMutableArray *mPresentationNames;
    NSMutableArray *mDefaultStyleLabelNames;
    int mPointCount;
    int mPointIndex;
    OADShapeStyle *mTextStyle;
    OADDrawingTheme *mDrawingTheme;
}

- (id)drawingTheme;
- (void)setTextStyle:(id)arg1;
- (id)textStyle;
- (void)setPointIndex:(int)arg1;
- (int)pointIndex;
- (void)setPointCount:(int)arg1;
- (int)pointCount;
- (void)setDefaultStyleLabelName:(id)arg1 forPointType:(int)arg2;
- (id)defaultStyleLabelNameForPointType:(int)arg1;
- (void)setPresentationName:(id)arg1 forPointType:(int)arg2;
- (id)presentationNameForPointType:(int)arg1;
- (void)setGroup:(id)arg1;
- (id)group;
- (void)setLogicalBounds:(struct CGRect)arg1;
- (double)scale;
- (void)setLogicalBounds:(struct CGRect)arg1 maintainAspectRatio:(BOOL)arg2;
- (struct CGRect)logicalBounds;
- (id)diagramOrientedBounds;
- (id)diagram;
- (void)dealloc;
- (id)initWithDiagram:(id)arg1 group:(id)arg2 drawingTheme:(id)arg3;

@end
