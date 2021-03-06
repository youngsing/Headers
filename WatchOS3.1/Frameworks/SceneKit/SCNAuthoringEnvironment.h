//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableOrderedSet, NSSet, SCNAuthoringEnvironment2, SCNManipulator;
@protocol SCNAuthoringEnvironmentDelegate, SCNSceneRenderer;

@interface SCNAuthoringEnvironment : NSObject
{
    struct __C3DEngineContext *_engineContext;
    id <SCNSceneRenderer> _sceneRenderer;
    struct __C3DFXProgram *_noColorProgram;
    struct __C3DFXProgram *_colorOnlyProgram;
    struct __C3DFXProgram *_colorAndTextureProgram;
    struct __C3DFXProgram *_lightProbesProgram;
    struct __C3DFXProgram *_wireframeProgram;
    CDStruct_4aabc75a _logsInfo;
    CDStruct_4aabc75a _boldLogsInfo;
    CDStruct_4aabc75a _upArrowInfo;
    CDStruct_4aabc75a _xyQuadrantInfo;
    CDStruct_4aabc75a _xyQuadrantRingInfo;
    CDStruct_4aabc75a _dynamicLinesInfo;
    CDStruct_4aabc75a _dynamicTrianglesInfo;
    CDStruct_4aabc75a _overlayDynamicLinesInfo;
    CDStruct_4aabc75a _overlayDynamicTriangleInfo;
    CDStruct_4aabc75a _textInfo;
    CDStruct_4aabc75a _lightProbesInfo;
    CDStruct_c23cf450 _normalTextInfo;
    CDStruct_c23cf450 _boldTextInfo;
    struct __C3DRasterizerStates *_depthOnCullOnStates;
    struct __C3DRasterizerStates *_depthOffCullOnStates;
    struct __C3DRasterizerStates *_depthOnCullOffStates;
    struct __C3DRasterizerStates *_depthOffCullOffStates;
    const void *_arrowIndicesOffset;
    unsigned short _arrowIndicesCount;
    const void *_quadrantIndicesOffset;
    unsigned short _quadrantIndicesCount;
    const void *_quadrantRingIndicesOffset;
    unsigned short _quadrantRingIndicesCount;
    long long _authoringDisplayMask;
    unsigned int _hasLighting:1;
    _Bool _shouldSnapOnGrid;
    _Bool _shouldSnapToAlign;
    _Bool _selectionIsReadonly;
    long long _editingSpace;
    _Bool _graphicalSelectionEnabled;
    // Error parsing type: , name: _selectionP0
    // Error parsing type: , name: _selectionP1
    _Bool _selecting;
    _Bool _surroundToSelect;
    NSSet *_initialSelection;
    NSMutableOrderedSet *_selection;
    NSArray *_selectedNodes;
    float _lastGridDistance;
    double _gridUnit;
    NSMutableArray *_visibleManipulableItems;
    void *_wireframeRenderer;
    struct {
        _Bool initialized;
        _Bool showFullStatistics;
        float fps;
        float waitDisplayLinkTime;
        long long pressedButtonIndex;
        struct __CFString *fpsString;
        struct __CFString *shortString;
        unsigned int lightingStatistics[9];
        struct __C3DEngineStats stats;
    } _statisticsInfo;
    float _drawScale;
    SCNManipulator *_manipulator;
    struct __C3DFXPass *_pass;
    id _delegate;
    SCNAuthoringEnvironment2 *_authEnv2;
}

+ (id)authoringEnvironmentForSceneRenderer:(id)arg1;
+ (long long)defaultAuthoringDisplayMask;
@property(readonly, nonatomic) _Bool selecting; // @synthesize selecting=_selecting;
@property(nonatomic) _Bool surroundToSelect; // @synthesize surroundToSelect=_surroundToSelect;
@property(nonatomic) _Bool graphicalSelectionEnabled; // @synthesize graphicalSelectionEnabled=_graphicalSelectionEnabled;
@property(nonatomic) __weak id <SCNAuthoringEnvironmentDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long editingSpace; // @synthesize editingSpace=_editingSpace;
@property(readonly, nonatomic) double gridUnit; // @synthesize gridUnit=_gridUnit;
@property(nonatomic) _Bool shouldSnapToAlign; // @synthesize shouldSnapToAlign=_shouldSnapToAlign;
@property(nonatomic) _Bool shouldSnapOnGrid; // @synthesize shouldSnapOnGrid=_shouldSnapOnGrid;
- (_Bool)isEditingSubComponent;
- (void)dealloc;
- (void)drawString:(id)arg1 atPoint:(struct CGPoint)arg2 color:(id)arg3;
- (void)drawLineFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 color:(id)arg3;
- (_Bool)didTapAtPoint:(struct CGPoint)arg1;
- (void)saveInitialSelection;
- (void)_updateManipulatorTargets;
- (void)beginEditingNodes:(id)arg1;
- (void)beginEditingNode:(id)arg1;
- (id)selectedItems;
@property(readonly, nonatomic) NSArray *selectedNodes;
- (void)cancelEdition;
@property(nonatomic) long long authoringDisplayMask;
@property(readonly, nonatomic) SCNManipulator *manipulator;
- (void)update;
@property(nonatomic) _Bool selectionIsReadonly;
@property(readonly, nonatomic) struct SCNMatrix4 viewMatrix;
@property(readonly) id <SCNSceneRenderer> sceneRenderer;
- (id)_initWithEngineContext:(struct __C3DEngineContext *)arg1;
- (id)init;

@end

