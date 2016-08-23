//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <AddressBook/ABScrollViewDelegate-Protocol.h>
#import <AddressBook/ABShareKitTransitionProvider-Protocol.h>

@class ABAddressBook, ABCardCollectionView, ABCardCollectionViewController, ABCardHeaderView, ABCardViewImageLoading, ABCardViewSeparator, ABCardViewStyleProvider, ABManagedObjectContext, ABNameFrameView, ABOverlayView, ABProfilePictureView, ABScrollView, NSArray, NSDictionary, NSMutableDictionary, NSObjectController, NSOperationQueue, NSScrollView, NSString, NSTextField, NSTimer;
@protocol ABCardViewDataSource, ABCardViewDelegate, CNCancelable;

@interface ABCardView : NSView <ABScrollViewDelegate, ABShareKitTransitionProvider>
{
    ABCardHeaderView *mHeaderView;
    ABNameFrameView *mNameView;
    ABProfilePictureView *mUserImageView;
    ABScrollView *mScrollView;
    ABCardCollectionView *mCollectionView;
    ABCardViewSeparator *_topContentIndicator;
    ABCardViewSeparator *_bottomContentIndicator;
    ABCardViewImageLoading *_imageLoadingHelper;
    ABOverlayView *_overlayView;
    NSView *mNextKeyView;
    NSTextField *mNoCardLabelTextField;
    NSObjectController *mBindingsController;
    NSArray *_constraints;
    BOOL mEditMode;
    BOOL mHighlightingSearchTerms;
    BOOL mImportMode;
    NSOperationQueue *_remoteImageLoaderQueue;
    BOOL mHasCustomImageData;
    struct CGSize mLastCardSize;
    double mCardHeight;
    NSMutableDictionary *mDisplayAttributes;
    ABCardViewStyleProvider *_styleProvider;
    BOOL loaded;
    NSArray *_alternateImageIDs;
    NSString *_alternateImagePath;
    NSDictionary *_changes;
    NSTimer *_lastViewedTimer;
    ABAddressBook *_scratchBook;
    ABManagedObjectContext *_scratchContext;
    NSMutableDictionary *_contributingSources;
    NSString *_contributingSourcesOverride;
    CDUnknownBlockType _aggregationInjectionBlock;
    BOOL _editable;
    BOOL _selectable;
    BOOL _showsUpdateDate;
    double _leftDividerMargin;
    double _rightDividerMargin;
    BOOL _canEditContact;
    BOOL _canSelectContact;
    BOOL _isDirectoryResult;
    BOOL _makingChangesOutsideOfEditMode;
    BOOL _endEditingWhenChangingContacts;
    BOOL _showsPlusButtons;
    BOOL _showsShowInMapsButtons;
    BOOL _suggestedCardMode;
    id <ABCardViewDelegate> _delegate;
    id <ABCardViewDataSource> _dataSource;
    ABCardCollectionViewController *_collectionViewController;
    id <CNCancelable> _imageLoaderCancelable;
}

+ (id)keyPathsForValuesAffectingContentSize;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (Class)collectionViewClass;
+ (BOOL)requiresConstraintBasedLayout;
@property(nonatomic) BOOL endEditingWhenChangingContacts; // @synthesize endEditingWhenChangingContacts=_endEditingWhenChangingContacts;
@property(readonly) BOOL isMakingChangesOutsideOfEditMode; // @synthesize isMakingChangesOutsideOfEditMode=_makingChangesOutsideOfEditMode;
@property(retain) ABCardViewStyleProvider *styleProvider; // @synthesize styleProvider=_styleProvider;
@property(readonly) BOOL isDirectoryResult; // @synthesize isDirectoryResult=_isDirectoryResult;
@property(retain, nonatomic) id <ABCardViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property id <ABCardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL showsShowInMapsButtons; // @synthesize showsShowInMapsButtons=_showsShowInMapsButtons;
@property(readonly) BOOL showsPlusButtons; // @synthesize showsPlusButtons=_showsPlusButtons;
@property(readonly) BOOL canSelectContact; // @synthesize canSelectContact=_canSelectContact;
@property BOOL canEditContact; // @synthesize canEditContact=_canEditContact;
@property double rightDividerMargin; // @synthesize rightDividerMargin=_rightDividerMargin;
@property double leftDividerMargin; // @synthesize leftDividerMargin=_leftDividerMargin;
@property(getter=isLoaded) BOOL loaded; // @synthesize loaded;
@property BOOL showsUpdateDate; // @synthesize showsUpdateDate=_showsUpdateDate;
@property double cardHeight; // @synthesize cardHeight=mCardHeight;
@property(getter=isSelectable) BOOL selectable; // @synthesize selectable=_selectable;
@property(copy) NSDictionary *changes; // @synthesize changes=_changes;
@property BOOL importMode; // @synthesize importMode=mImportMode;
@property BOOL editMode; // @synthesize editMode=mEditMode;
- (id)hostWindowForShareSheet;
- (id)profilePhotoImage;
- (struct CGRect)profilePhotoScreenRect;
- (void)setNoteInsertionPoints:(id)arg1;
- (id)noteInsertionPoints;
- (BOOL)mouseDownCanMoveWindow;
- (void)refreshNoCardLabel;
- (void)displayNoCardInfo;
- (id)noCardLabelFont;
- (void)setNoCardLabel:(id)arg1;
- (void)updateFaceTimeAvailability:(BOOL)arg1;
- (void)updateShareLabel;
- (void)reloadNameDataForKey:(id)arg1;
- (void)reloadNameData;
- (void)reloadCollectionData;
- (void)reloadData;
- (void)mouseDown:(id)arg1;
- (void)scrollViewDidScroll;
- (void)executeSetImageCommandWithImage:(id)arg1;
- (void)clearCustomImage;
- (void)setCustomImage:(id)arg1 largeImage:(id)arg2 clippingRect:(struct CGRect)arg3;
- (void)setCustomImage:(id)arg1;
- (void)closeImagePicker;
- (void)profilePictureViewDidStopEditing:(id)arg1;
- (void)profilePictureViewWillStartEditing:(id)arg1 fromDrop:(BOOL)arg2;
- (void)profilePictureView:(id)arg1 didSelectPreferredImage:(id)arg2;
- (void)profilePictureView:(id)arg1 didSelectCustomImage:(id)arg2;
- (void)profilePictureView:(id)arg1 attributedImageDidChange:(id)arg2;
- (void)beginEditingCustomImage;
- (id)colorForProperty:(id)arg1 identifier:(id)arg2;
- (id)colorForProperty:(id)arg1;
- (void)editExistingKey:(id)arg1 identifier:(id)arg2 yOffset:(double)arg3;
- (void)editKey:(id)arg1;
- (void)editKey:(id)arg1 label:(id)arg2;
- (BOOL)isContactEditable;
- (BOOL)isAvailableKey:(id)arg1;
- (BOOL)isPictureEditable;
- (void)updateNoteEditability;
- (BOOL)isNoteEditable;
- (void)updateSilhouetteImage;
- (id)defaultUserImage;
- (void)updateUserImageWithResult:(id)arg1;
- (void)setImageLoaderCancelable:(id)arg1;
- (void)cancelImageLoader;
- (struct CGRect)cropRectForPhoto:(id)arg1;
- (id)imageForPhoto:(id)arg1;
- (BOOL)isValidPhoto:(id)arg1;
- (id)localLargePhotoFuture;
@property(copy) NSString *alternateImagePath;
@property(copy) NSArray *alternateImageIDs;
- (void)configureProfileViewToUpdateRecents;
- (void)configureProfileViewWithLinkedImages;
- (void)configureProfileViewForiPhotoFaces;
- (void)configureProfileViewForCurrentPhoto;
- (id)localizedTitleForLinkedPhotoSource;
- (void)setUserImageViewLoaded:(BOOL)arg1;
- (id)requestObservable;
- (void)requestImageData;
- (void)loadImageData;
- (struct CGRect)imageFrame;
- (BOOL)isEditingPicture;
- (void)highlightSearchTerms:(id)arg1;
- (void)frameFinishedChanging:(id)arg1;
- (void)frameDidChange:(id)arg1;
- (void)scrollTextViewSelectionToVisible:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)editedContactDidSynchronize:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)finalizeEditing;
- (void)prepareForEditing;
- (void)firstResponderDidChange:(id)arg1;
- (BOOL)shouldDisableSuddenTerminationDuringEdition;
- (void)dealloc;
- (void)removeObservers;
- (void)addObservers;
- (void)windowWillClose:(id)arg1;
- (void)tearDownBindingsController;
- (void)setupBindingsController;
- (void)windowDidOrderOffScreen:(id)arg1;
- (void)windowWillOrderOnScreen:(id)arg1;
- (void)commit;
- (void)changeContactToCompanyIfNeeded;
- (double)cardWidth;
@property(readonly) struct CGSize contentSize;
- (void)preferencesChanged:(id)arg1;
- (void)delayedSelectFirstKeyViewIfNecessary;
- (void)selectFirstKeyViewIfNecessary;
- (id)updateKeyViewLoop;
- (void)layoutViewsAffectingScrollView;
- (BOOL)scrollSubviewHasVisibleVerticalScroller;
- (BOOL)hasVisibleVerticalScroller;
- (id)displayAttributesForProperty:(id)arg1 identifier:(id)arg2;
- (void)setDisplayAttributes:(id)arg1 forProperty:(id)arg2 identifier:(id)arg3;
- (void)applyDisplayAttributes;
- (id)_displayAttributeKeyForProperty:(id)arg1 identifier:(id)arg2;
- (void)ab_layout;
- (void)updateCardHeightIfNeeded;
- (void)layout;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
@property(readonly) BOOL hasChanges;
@property(readonly) BOOL isPrivateMeEnabled;
@property(readonly) BOOL isUnified;
@property(readonly) BOOL isTemplate;
- (BOOL)isFlipped;
- (void)performLayoutSelectorOnSuperview:(SEL)arg1;
- (void)forceFullLayout;
- (void)queueFullLayout;
- (double)firstColumnWidth;
- (void)drawRect:(struct CGRect)arg1;
- (id)shadowLineConstraints;
- (id)centeredNoCardsLabelConstraints;
- (id)constrainCollectionViewToScrollView;
- (id)constrainLabelsToProfilePhoto;
- (id)privacyCheckboxConstraints;
- (id)minimumSizingConstraints;
@property(readonly) struct CGSize preferredMinimumSize;
- (id)primaryLayoutConstraints;
- (void)updateConstraints;
- (void)updateBorderOverlayView;
@property(readonly) double rightMargin;
@property(readonly) double leftMargin;
@property(readonly) double bottomMargin;
@property(readonly) double topMargin;
@property BOOL suggestedCardMode;
@property long long backgroundStyle;
- (void)scrollWheel:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)focusNotesField:(id)arg1;
- (BOOL)accessibilityIsIgnored;
@property(readonly, retain) NSScrollView *scrollView;
- (void)ABCardView_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)awakeFromNib;
@property(getter=isEditable) BOOL editable;
- (void)setContactDataIsTransient:(BOOL)arg1;
@property(readonly) BOOL isEditing;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
