//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PUFeedViewControllerSpec, PUFontManager, PUPhotoDecoration, PUPhotosAlbumViewControllerSpec, PUPhotosGridViewControllerSpec, PUPhotosPanoramaViewControllerSpec, PUPhotosPickerViewControllerSpec, PXLayoutMetricInterpolator, UIImage;

@interface PUAlbumListViewControllerSpec : NSObject
{
    UIImage *_emptyAlbumPlaceholderImage;
    UIImage *_emptySharedAlbumPlaceholderImage;
    UIImage *_addSharedAlbumPlaceholderImage;
    UIImage *_hiddenAlbumPlaceholderImage;
    UIImage *_recentlyDeletedAlbumPlaceholderImage;
    PUPhotoDecoration *_stackPhotoDecoration;
    PUPhotoDecoration *_emptyStackPhotoDecoration;
    _Bool _shouldUseTableView;
    _Bool _showsDeleteButtonOnCellContentView;
    _Bool _usesStackTransitionToGrid;
    _Bool _shouldUseCollageForCloudFeedPlaceholder;
    _Bool _shouldUseShortTitleForStandInAlbumList;
    PUFontManager *__fontManager;
    unsigned long long _stackViewStyle;
    unsigned long long _folderStackViewStyle;
    double _posterSquareCornerRadius;
    double _posterSubitemCornerRadius;
    long long _collageImageContentMode;
    double _collageSpacing;
    long long _cellContentViewLayout;
    double _sectionHeaderHeight;
    double _sectionFooterHeight;
    double _maxSearchBarWidth;
    long long _albumDeletionConfirmationStyle;
    PUPhotosGridViewControllerSpec *_gridViewControllerSpec;
    PUPhotosAlbumViewControllerSpec *_albumViewControllerSpec;
    PUPhotosPanoramaViewControllerSpec *_panoramaViewControllerSpec;
    PUPhotosPickerViewControllerSpec *_photosPickerViewControllerSpec;
    PUFeedViewControllerSpec *_feedViewControllerSpec;
    struct CGSize _imageSize;
    struct CGSize _stackSize;
    struct UIOffset _stackOffset;
    struct UIOffset _stackPerspectiveOffset;
    struct CGSize _collageImageSize;
    struct UIEdgeInsets _stackPerspectiveInsets;
}

@property(readonly, nonatomic) PUFeedViewControllerSpec *feedViewControllerSpec; // @synthesize feedViewControllerSpec=_feedViewControllerSpec;
@property(readonly, nonatomic) PUPhotosPickerViewControllerSpec *photosPickerViewControllerSpec; // @synthesize photosPickerViewControllerSpec=_photosPickerViewControllerSpec;
@property(readonly, nonatomic) PUPhotosPanoramaViewControllerSpec *panoramaViewControllerSpec; // @synthesize panoramaViewControllerSpec=_panoramaViewControllerSpec;
@property(readonly, nonatomic) PUPhotosAlbumViewControllerSpec *albumViewControllerSpec; // @synthesize albumViewControllerSpec=_albumViewControllerSpec;
@property(readonly, nonatomic) PUPhotosGridViewControllerSpec *gridViewControllerSpec; // @synthesize gridViewControllerSpec=_gridViewControllerSpec;
@property(readonly, nonatomic) long long albumDeletionConfirmationStyle; // @synthesize albumDeletionConfirmationStyle=_albumDeletionConfirmationStyle;
@property(readonly, nonatomic) double maxSearchBarWidth; // @synthesize maxSearchBarWidth=_maxSearchBarWidth;
@property(readonly, nonatomic) _Bool shouldUseShortTitleForStandInAlbumList; // @synthesize shouldUseShortTitleForStandInAlbumList=_shouldUseShortTitleForStandInAlbumList;
@property(readonly, nonatomic) _Bool shouldUseCollageForCloudFeedPlaceholder; // @synthesize shouldUseCollageForCloudFeedPlaceholder=_shouldUseCollageForCloudFeedPlaceholder;
@property(readonly, nonatomic) double sectionFooterHeight; // @synthesize sectionFooterHeight=_sectionFooterHeight;
@property(readonly, nonatomic) double sectionHeaderHeight; // @synthesize sectionHeaderHeight=_sectionHeaderHeight;
@property(readonly, nonatomic) _Bool usesStackTransitionToGrid; // @synthesize usesStackTransitionToGrid=_usesStackTransitionToGrid;
@property(readonly, nonatomic) long long cellContentViewLayout; // @synthesize cellContentViewLayout=_cellContentViewLayout;
@property(readonly, nonatomic) _Bool showsDeleteButtonOnCellContentView; // @synthesize showsDeleteButtonOnCellContentView=_showsDeleteButtonOnCellContentView;
@property(readonly, nonatomic) double collageSpacing; // @synthesize collageSpacing=_collageSpacing;
@property(readonly) long long collageImageContentMode; // @synthesize collageImageContentMode=_collageImageContentMode;
@property(readonly) struct CGSize collageImageSize; // @synthesize collageImageSize=_collageImageSize;
@property(readonly, nonatomic) double posterSubitemCornerRadius; // @synthesize posterSubitemCornerRadius=_posterSubitemCornerRadius;
@property(readonly, nonatomic) double posterSquareCornerRadius; // @synthesize posterSquareCornerRadius=_posterSquareCornerRadius;
@property(readonly, nonatomic) struct UIOffset stackPerspectiveOffset; // @synthesize stackPerspectiveOffset=_stackPerspectiveOffset;
@property(readonly, nonatomic) struct UIEdgeInsets stackPerspectiveInsets; // @synthesize stackPerspectiveInsets=_stackPerspectiveInsets;
@property(readonly, nonatomic) struct UIOffset stackOffset; // @synthesize stackOffset=_stackOffset;
@property(readonly, nonatomic) struct CGSize stackSize; // @synthesize stackSize=_stackSize;
@property(readonly, nonatomic) PUPhotoDecoration *emptyStackPhotoDecoration; // @synthesize emptyStackPhotoDecoration=_emptyStackPhotoDecoration;
@property(readonly, nonatomic) PUPhotoDecoration *stackPhotoDecoration; // @synthesize stackPhotoDecoration=_stackPhotoDecoration;
@property(readonly, nonatomic) unsigned long long folderStackViewStyle; // @synthesize folderStackViewStyle=_folderStackViewStyle;
@property(readonly, nonatomic) unsigned long long stackViewStyle; // @synthesize stackViewStyle=_stackViewStyle;
@property(readonly) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly) _Bool shouldUseTableView; // @synthesize shouldUseTableView=_shouldUseTableView;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldShowSectionHeaders;
@property(readonly, nonatomic) _Bool canShowVirtualCollections;
- (void)configureGridLayout:(id)arg1 forLayoutReferenceSize:(struct CGSize)arg2;
@property(readonly, nonatomic) PUAlbumListViewControllerSpec *standInAlbumListViewControllerSpec;
@property(readonly, nonatomic) _Bool displaysSearchInPopover;
@property(readonly, nonatomic) _Bool canDisplaySearchActionInNavigationBar;
- (struct CGPoint)_pixelRoundedOriginForCenteredImage:(id)arg1 inRect:(struct CGRect)arg2;
- (id)_centeredGlyphImage:(id)arg1 withBackgroundColor:(id)arg2 size:(struct CGSize)arg3 imageAlpha:(double)arg4;
- (id)_centeredTintedGlyphImage:(id)arg1 withBackgroundColor:(id)arg2 size:(struct CGSize)arg3;
- (id)_nameOfRecentlyDeletedAlbumPlaceholderImage;
- (id)_nameOfHiddenAlbumPlaceholderImage;
- (id)_nameOfEmptySharedAlbumPlaceholderImage;
- (id)_nameOfAddSharedAlbumPlaceholderImage;
- (id)_nameOfEmptyAlbumPlaceholderImage;
@property(readonly, nonatomic) UIImage *recentlyDeletedAlbumPlaceholderImage;
@property(readonly, nonatomic) UIImage *hiddenAlbumPlaceholderImage;
@property(readonly, nonatomic) UIImage *addSharedAlbumPlaceholderImage;
@property(readonly, nonatomic) UIImage *emptySharedAlbumPlaceholderImage;
@property(readonly, nonatomic) UIImage *emptyAlbumPlaceholderImage;
- (struct CGSize)tileSizeForLayoutReferenceSize:(struct CGSize)arg1 stackViewStyle:(unsigned long long)arg2;
- (struct CGSize)imageSizeForLayoutReferenceSize:(struct CGSize)arg1;
- (struct CGSize)stackSizeForLayoutReferenceSize:(struct CGSize)arg1;
- (struct UIEdgeInsets)sectionInsetsForLayoutReferenceSize:(struct CGSize)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (void)configureStackViewWithGridStyle:(id)arg1;
- (void)configureCollectionViewAlbumListLayout:(id)arg1 forBounds:(struct CGRect)arg2;
@property(readonly, nonatomic) struct CGSize contentSizeForViewInPopover;
@property(readonly) long long imageContentMode;
@property(readonly, nonatomic) PXLayoutMetricInterpolator *_stackWidthInterpolator;
@property(readonly, nonatomic) PXLayoutMetricInterpolator *_insetsInterpolator;
@property(readonly, nonatomic) PUFontManager *_fontManager; // @synthesize _fontManager=__fontManager;

@end

