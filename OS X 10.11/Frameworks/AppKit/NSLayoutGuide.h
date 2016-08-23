//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCoding-Protocol.h>
#import <AppKit/NSUserInterfaceItemIdentification-Protocol.h>

@class NSISVariable, NSLayoutDimension, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSString, NSView;

@interface NSLayoutGuide : NSObject <NSCoding, NSUserInterfaceItemIdentification>
{
    NSView *_owningView;
    NSString *_identifier;
    NSISVariable *_minYVariable;
    NSISVariable *_minXVariable;
    NSISVariable *_widthVariable;
    NSISVariable *_heightVariable;
    NSLayoutXAxisAnchor *_left;
    NSLayoutXAxisAnchor *_right;
    NSLayoutXAxisAnchor *_leading;
    NSLayoutXAxisAnchor *_trailing;
    NSLayoutYAxisAnchor *_top;
    NSLayoutYAxisAnchor *_bottom;
    NSLayoutDimension *_width;
    NSLayoutDimension *_height;
    NSLayoutXAxisAnchor *_centerX;
    NSLayoutYAxisAnchor *_centerY;
    struct CGRect _frame;
    id _reserved1;
    id _reserved2;
    unsigned int _shouldBeArchived:1;
    unsigned int _weakHelper:1;
    unsigned int _frameNeedsUpdate:1;
    unsigned int _frameIsObserved:1;
    unsigned int _reservedFlags:28;
}

@property(readonly) NSLayoutYAxisAnchor *centerYAnchor;
@property(readonly) NSLayoutXAxisAnchor *centerXAnchor;
@property(readonly) NSLayoutDimension *heightAnchor;
@property(readonly) NSLayoutDimension *widthAnchor;
@property(readonly) NSLayoutYAxisAnchor *bottomAnchor;
@property(readonly) NSLayoutYAxisAnchor *topAnchor;
@property(readonly) NSLayoutXAxisAnchor *rightAnchor;
@property(readonly) NSLayoutXAxisAnchor *leftAnchor;
@property(readonly) NSLayoutXAxisAnchor *trailingAnchor;
@property(readonly) NSLayoutXAxisAnchor *leadingAnchor;
- (id)centerY;
- (id)centerX;
- (id)height;
- (id)width;
- (id)bottom;
- (id)top;
- (id)right;
- (id)left;
- (id)trailing;
- (id)leading;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (BOOL)nsis_shouldIntegralizeVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (BOOL)nsli_isCollectingConstraintChangesForLaterCoordinatedFlush:(id)arg1;
- (id)nsli_heightVariable;
- (id)nsli_widthVariable;
- (id)nsli_minYVariable;
- (id)nsli_minXVariable;
- (id)nsli_installedConstraints;
- (double)nsli_marginOffsetForAttribute:(long long)arg1;
- (BOOL)nsli_removeConstraint:(id)arg1;
- (void)nsli_addConstraint:(id)arg1;
- (BOOL)nsli_isFlipped;
- (unsigned long long)nsli_autoresizingMask;
- (BOOL)nsli_descriptionIncludesPointer;
- (id)nsli_description;
- (BOOL)nsli_resolvedValue:(double *)arg1 forSymbolicConstant:(id)arg2 inConstraint:(id)arg3 error:(id *)arg4;
- (id)nsli_superitem;
- (struct CGSize)nsli_convertSizeFromEngineSpace:(struct CGSize)arg1;
- (struct CGSize)nsli_convertSizeToEngineSpace:(struct CGSize)arg1;
- (id)nsli_layoutEngine;
- (void)_updateFrameIfNeeded;
- (id)ancestorSharedWithView:(id)arg1;
- (void)setShouldBeArchived:(BOOL)arg1;
- (BOOL)shouldBeArchived;
@property(copy) NSString *identifier;
- (void)_snipReferencingConstraints;
@property __weak NSView *owningView;
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
- (struct CGRect)bounds;
- (struct CGRect)_alignmentFrame;
- (void)setFrame:(struct CGRect)arg1;
@property(readonly) struct CGRect frame;
- (void)setObservationInfo:(void *)arg1;
- (BOOL)_isDescendantOf:(id)arg1;
- (BOOL)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 container:(id)arg4;
- (BOOL)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 forConstraint:(id)arg4;
- (BOOL)_isRTL;
- (void)removeFromOwningView;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)allowsNegativeSize;
- (id)initAllowingNegativeSize;
- (void)dealloc;
- (id)init;
- (id)ns_containerWidgetType;
- (id)ns_widgetType;

@end

