//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSATheme.h>

#import <iWorkImport/KNSlideCollection-Protocol.h>
#import <iWorkImport/TSKDocumentObject-Protocol.h>
#import <iWorkImport/TSKTransformableObject-Protocol.h>
#import <iWorkImport/TSSPresetSource-Protocol.h>

@class KNSlideNode, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString, TSUPointerKeyDictionary, TSUWeakReference, TSWPParagraphStyle;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface KNTheme : TSATheme <KNSlideCollection, TSSPresetSource, TSKTransformableObject, TSKDocumentObject>
{
    NSString *mUUID;
    NSArray *mMasters;
    NSObject<OS_dispatch_queue> *mDefaultMasterSlideNodeQueue;
    TSUWeakReference *mDefaultMasterSlideNodeReference;
    _Bool mDefaultMasterSlideNodeIsOurBestGuess;
    long long mSlideStyleIndex;
    NSMutableArray *mClassicThemeRecords;
    NSMutableDictionary *mCustomEffectTimingCurves;
    NSMutableDictionary *mSlideNodesForFormulaReferenceNamesCache;
    TSUPointerKeyDictionary *mFormulaReferenceNamesForSlideNodesCache;
}

+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)presetKinds;
+ (void)registerPresetSourceClasses;
+ (id)themeNameForCustomOrUnknownTheme;
+ (id)classicThemeNameFromTheme:(id)arg1;
+ (id)nativeThemeNameFromTheme:(id)arg1;
+ (id)generateUUID;
+ (void)initialize;
@property(readonly, nonatomic) _Bool defaultMasterSlideNodeIsOurBestGuess; // @synthesize defaultMasterSlideNodeIsOurBestGuess=mDefaultMasterSlideNodeIsOurBestGuess;
@property(retain, nonatomic) NSArray *classicThemeRecords; // @synthesize classicThemeRecords=mClassicThemeRecords;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (id)modelPathComponentForChild:(id)arg1;
- (id)childEnumerator;
- (void)p_cacheSlideNodes;
- (void)invalidateSlideNameCache;
- (id)slideNamesMatchingPrefix:(id)arg1;
- (id)slideNodeForFormulaReferenceName:(id)arg1 caseSensitive:(_Bool)arg2;
- (id)formulaReferenceNameForSlideNode:(id)arg1;
- (void)resolveDefaultMaster;
- (id)p_findDefaultMaster;
- (id)i_findDefaultMaster;
- (void)selectSecondMasterAsDefault;
- (void)p_selectSecondMasterAsDefault;
- (id)p_findSecondMaster;
- (void)removeAllClassicThemeRecords;
- (void)addClassicThemeRecord:(id)arg1;
- (void)addDefaultPresenterNotesStylesIfAbsent;
@property(readonly, nonatomic) TSWPParagraphStyle *defaultPresenterNotesParagraphStyle;
- (id)undeletableStyles;
- (id)mappedMasterForPasteForSlide:(id)arg1;
- (id)mappedMasterForThemeChangeForMaster:(id)arg1;
- (id)mappedMasterForPasteForMaster:(id)arg1;
- (id)p_mappedMasterForMaster:(id)arg1 scoringHeuristic:(CDUnknownBlockType)arg2;
- (int)p_matchScoreForMaster:(id)arg1 toMaster:(id)arg2;
- (id)orderedSlideNodesInSelection:(id)arg1;
- (unsigned long long)indexOfSlideNode:(id)arg1;
- (_Bool)containsSlideNode:(id)arg1;
- (id)defaultSlideNodeForNewSelectionNearestToIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) KNSlideNode *defaultSlideNodeForNewSelection;
- (void)removeAllMasters;
- (void)removeMasterSlideNode:(id)arg1;
- (id)p_nameByIncrementingCounterAfterStringToAppend:(id)arg1 forOriginalName:(id)arg2 testForExistingName:(CDUnknownBlockType)arg3;
- (id)themeCurvesForBuilds:(id)arg1 slideNodes:(id)arg2;
- (id)updatedThemeCurveInfoForPastedThemeCurves:(id)arg1;
- (void)removeCustomTimingCurveWithName:(id)arg1;
- (_Bool)customTimingCurvesContainsName:(id)arg1;
- (id)customTimingCurveWithName:(id)arg1;
- (void)setCustomTimingCurve:(id)arg1 forName:(id)arg2;
- (id)nameForMasterCopyWithName:(id)arg1;
@property(copy, nonatomic) NSDictionary *customEffectTimingCurves; // @synthesize customEffectTimingCurves=mCustomEffectTimingCurves;
- (id)masterWithName:(id)arg1;
- (_Bool)containsMasterWithName:(id)arg1;
- (void)insertMasterSlideNode:(id)arg1 withThumbnails:(id)arg2 atIndex:(unsigned long long)arg3 dolcContext:(id)arg4;
- (void)addMasterSlideNode:(id)arg1 withThumbnails:(id)arg2 dolcContext:(id)arg3;
- (void)addMasterSlideNode:(id)arg1 dolcContext:(id)arg2;
@property(readonly, nonatomic) struct CGSize thumbnailSize;
- (void)dealloc;
- (id)initWithContext:(id)arg1 documentStylesheet:(id)arg2;
- (void)bootstrapWhiteThemeOfSize:(struct CGSize)arg1;
- (void)bootstrapGradientThemeOfSize:(struct CGSize)arg1;
- (void)bootstrapBlackThemeOfSize:(struct CGSize)arg1;
@property(readonly, nonatomic) double cornerRadius;
- (void)bootstrapThemeOfSize:(struct CGSize)arg1 alternate:(int)arg2;
@property(retain, nonatomic) KNSlideNode *defaultMasterSlideNode;
- (void)p_setDefaultMasterSlideNode:(id)arg1;
@property(retain, nonatomic) NSString *UUID;
@property(retain, nonatomic) NSArray *masters;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct ThemeArchive *)arg1 archiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct ThemeArchive *)arg1 unarchiver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

