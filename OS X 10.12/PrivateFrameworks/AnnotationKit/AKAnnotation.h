//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnnotationKit/NSCopying-Protocol.h>
#import <AnnotationKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface AKAnnotation : NSObject <NSSecureCoding, NSCopying>
{
    CDUnknownBlockType _appearanceOverride;
    BOOL _shouldUseAppearanceOverride;
    BOOL _isObservingForAppearance;
    BOOL _isObservingForIsEdited;
    BOOL _isReallyObservingForIsEdited;
    BOOL _editsDisableAppearanceOverride;
    BOOL _isEdited;
    BOOL _isTranslating;
    BOOL _isDraggingHandle;
    BOOL _isEditingText;
    BOOL _textIsFixedWidth;
    BOOL _textIsFixedHeight;
    BOOL _textIsClipped;
    BOOL _shouldUsePlaceholderText;
    NSString *_UUID;
    NSString *_customPlaceholderText;
    double _originalModelBaseScaleFactor;
    long long _originalExifOrientation;
    long long _akSerializationVersion;
    long long _akSerializationPlatform;
    AKAnnotation *_parentAnnotation;
    AKAnnotation *_childAnnotation;
    struct CGRect _initialDrawingBoundsForAppearanceOverride;
}

+ (BOOL)supportsSecureCoding;
+ (id)annotationWithData:(id)arg1;
+ (id)defaultPlaceholderText;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
@property struct CGRect initialDrawingBoundsForAppearanceOverride; // @synthesize initialDrawingBoundsForAppearanceOverride=_initialDrawingBoundsForAppearanceOverride;
@property __weak AKAnnotation *childAnnotation; // @synthesize childAnnotation=_childAnnotation;
@property __weak AKAnnotation *parentAnnotation; // @synthesize parentAnnotation=_parentAnnotation;
@property BOOL shouldUsePlaceholderText; // @synthesize shouldUsePlaceholderText=_shouldUsePlaceholderText;
@property BOOL textIsClipped; // @synthesize textIsClipped=_textIsClipped;
@property BOOL textIsFixedHeight; // @synthesize textIsFixedHeight=_textIsFixedHeight;
@property BOOL textIsFixedWidth; // @synthesize textIsFixedWidth=_textIsFixedWidth;
@property BOOL isEditingText; // @synthesize isEditingText=_isEditingText;
@property long long akSerializationPlatform; // @synthesize akSerializationPlatform=_akSerializationPlatform;
@property long long akSerializationVersion; // @synthesize akSerializationVersion=_akSerializationVersion;
@property BOOL isDraggingHandle; // @synthesize isDraggingHandle=_isDraggingHandle;
@property BOOL isTranslating; // @synthesize isTranslating=_isTranslating;
@property BOOL isEdited; // @synthesize isEdited=_isEdited;
@property BOOL editsDisableAppearanceOverride; // @synthesize editsDisableAppearanceOverride=_editsDisableAppearanceOverride;
@property(nonatomic) long long originalExifOrientation; // @synthesize originalExifOrientation=_originalExifOrientation;
@property(nonatomic) double originalModelBaseScaleFactor; // @synthesize originalModelBaseScaleFactor=_originalModelBaseScaleFactor;
@property(copy) NSString *customPlaceholderText; // @synthesize customPlaceholderText=_customPlaceholderText;
@property(readonly) NSString *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property BOOL shouldUseAppearanceOverride;
@property(readonly) BOOL isUsingAppearanceOverride;
@property(copy) CDUnknownBlockType appearanceOverride;
@property BOOL shouldObserveEdits;
- (void)translateBy:(struct CGPoint)arg1;
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(struct CGSize)arg2;
@property(readonly) struct CGRect integralDrawingBounds;
@property(readonly) struct CGRect drawingBounds;
@property(readonly) struct CGRect hitTestBounds;
- (void)adjustModelToCompensateForOriginalExif;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
@property(readonly) NSString *displayName;
- (id)dataRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

