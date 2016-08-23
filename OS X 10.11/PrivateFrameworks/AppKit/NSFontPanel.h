//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class NSArray, NSFontManager, NSView;

@interface NSFontPanel : NSPanel
{
    NSFontManager *_manager;
    NSArray *_collectionNames;
    id _selection;
    void *_carbonNotification;
    id _targetObject;
    id _familyList;
    id _faceList;
    id _sizeList;
    id _mainCollectionList;
    id _sizeField;
    id _sizeSlider;
    id _sizeSliderBox;
    id _preview;
    id _previewContainer;
    id _mainSplitView;
    id _mmCollectionList;
    id _mmFamilyList;
    id _mmFaceList;
    id _mmSizeList;
    id _fullSizeHeightConstraint;
    id _searchField;
    id _fixedListButton;
    id _sliderButton;
    id _accessoryView;
    struct __fpFlags {
        unsigned int setFontChange:1;
        unsigned int setFontAttributeChange:1;
        unsigned int _delRespFamily:1;
        unsigned int _delRespFace:1;
        unsigned int _delRespSize:1;
        unsigned int _delRespColl:1;
        unsigned int _collectionDisabled:1;
        unsigned int _sizeDisabled:1;
        unsigned int _faceDisabled:1;
        unsigned int showEffects:1;
        unsigned int _uiMode:8;
        unsigned int _miniMode:1;
        unsigned int _reserved:13;
    } _fpFlags;
    id _regularModeBox;
    id _miniModeBox;
    id _sizeBox;
    id _collectionLabel;
    id _sizeLabel;
    id _faceDivider;
    id _familyLabel;
    id _sizeStyleButton;
    id _newSizeField;
    id _editSizeList;
    id _editSizeListBox;
    id _editSizeSliderBox;
    id _editSizeSliderMaxField;
    id _editSizeSliderMinField;
    id _sizeEditWindow;
    id _availableSizes;
    id _addCollectionButton;
    id _removeCollectionButton;
    double _fontPanelPreviewHeight;
    id _typographyPanel;
    id _actionButton;
    id _fontEffectsBox;
    int _sizeStyle;
}

+ (id)_createFontPanelSizeRep;
+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)sharedFontPanel;
+ (BOOL)sharedFontPanelExists;
- (BOOL)removeItemForTableView:(id)arg1 pasteboard:(id)arg2 operation:(unsigned long long)arg3;
- (unsigned long long)draggingSourceOperationMaskForTableView:(id)arg1;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (void)_openExtrasPopup:(id)arg1;
- (void)_chooseSizeFromSlider:(id)arg1;
- (void)_chooseSize:(id)arg1;
- (void)_chooseSizeFromField:(id)arg1;
- (void)_chooseFamily:(id)arg1;
- (void)_chooseFace:(id)arg1;
- (void)_chooseCollection:(id)arg1;
- (void)collectionButtonPressed:(id)arg1;
- (void)_fontPanelRemoveCollectionSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_validateExtrasButton:(id)arg1;
- (void)_setPreviewFont:(id)arg1;
- (void)_updateFontPreviewFont;
- (void)_updateFontPreview;
- (void)_togglePreview:(BOOL)arg1 animated:(BOOL)arg2;
- (id)_fontAttributes;
- (void)_setFont:(id)arg1;
- (void)_reflectFont;
- (id)_currentFont;
- (id)_typographyPanel;
- (void)_toggleTypographyPanel;
- (void)_notifyTypographyPanel;
- (void)_collectionsChanged:(id)arg1;
- (void)_sizeListChanged:(id)arg1;
- (id)convertAttributes:(id)arg1;
- (void)_validateFontPanelFontAttributes;
- (void)_setAttributes:(id)arg1 isMultiple:(BOOL)arg2;
- (id)panelConvertFont:(id)arg1;
- (void)setPanelFont:(id)arg1 isMultiple:(BOOL)arg2;
- (BOOL)_inHideFaceMode;
- (BOOL)_inHideCollectionsMode;
- (void)_checkCollectionMoveOut:(long long)arg1;
- (void)_reflectSize;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (void)_toggleCollections:(long long)arg1 animate:(BOOL)arg2;
- (void)_validateFaces:(long long)arg1;
- (void)_validateSizes:(long long)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)windowDidUpdate:(id)arg1;
- (void)_populateMiniMode;
- (void)_populatePopup:(id)arg1 withTableView:(id)arg2;
- (void)_checkMiniMode:(double)arg1;
- (BOOL)_inMiniMode;
- (void)_chooseSizeFromList:(id)arg1;
- (void)_changeSizeStyle:(id)arg1;
- (void)_resetSizeList:(id)arg1;
- (void)_removeSizeFromList:(id)arg1;
- (void)_addSizeToList:(id)arg1;
- (void)_sizeEditDone:(id)arg1;
- (unsigned long long)comboBox:(id)arg1 indexOfItemWithStringValue:(id)arg2;
- (id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInComboBox:(id)arg1;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (struct CGRect)tableView:(id)arg1 frameOfCellAtColumn:(long long)arg2 row:(long long)arg3 originalFrame:(struct CGRect)arg4;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(getter=isEnabled) BOOL enabled;
@property BOOL worksWhenModal;
- (void)setChooser:(id)arg1;
- (void)setSizeTitle:(id)arg1;
- (void)setSize:(id)arg1;
- (void)_chooseBestMatchingFace;
- (void)loadFaces:(id)arg1;
- (void)_setRecents:(id)arg1;
- (id)_createFontPanelSizeRep;
- (void)_sortCollections;
- (void)setDelegate:(id)arg1;
@property(retain) NSView *accessoryView;
- (void)reloadDefaultFontFamilies;
- (id)_selectedSize;
- (BOOL)_showEffects;
- (BOOL)_canShowEffects;
- (void)_searchChanged:(id)arg1;
- (void)_sendCarbonNotification;
- (void)setCarbonNotification:(void *)arg1;
- (void *)_carbonNotification;
- (oneway void)release;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (void)_setup;
- (id)_currentFamilyName;
- (id)_currentCollectionName;

@end
