//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AnnotationKit/AKArrowAnnotation.h>

#import <AnnotationKit/AKFilledAnnotationProtocol-Protocol.h>

@class NSColor, NSString;

@interface AKArrowShapeAnnotation : AKArrowAnnotation <AKFilledAnnotationProtocol>
{
    double _arrowLineWidth;
    double _arrowHeadWidth;
    double _arrowHeadLength;
}

+ (BOOL)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
@property double arrowHeadLength; // @synthesize arrowHeadLength=_arrowHeadLength;
@property double arrowHeadWidth; // @synthesize arrowHeadWidth=_arrowHeadWidth;
@property double arrowLineWidth; // @synthesize arrowLineWidth=_arrowLineWidth;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect)hitTestBounds;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (id)displayName;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain) NSColor *fillColor;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

