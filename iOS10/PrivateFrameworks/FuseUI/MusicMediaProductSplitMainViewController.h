//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FuseUI/MusicClientContextConsuming-Protocol.h>
#import <FuseUI/MusicLibraryBrowseTableViewControllerDelegate-Protocol.h>
#import <FuseUI/MusicMediaDetailSplitViewController-Protocol.h>
#import <FuseUI/MusicProductAdditionalMetadataViewControllerDelegate-Protocol.h>
#import <FuseUI/MusicVerticalScrollingContainerViewControllerDelegate-Protocol.h>

@class MusicClientContext, MusicEntityValueContext, MusicMediaDetailTintInformation, MusicProductAdditionalMetadataViewController, MusicProductTracklistTableViewConfiguration, MusicProductTracklistTableViewController, MusicVerticalScrollingContainerViewController, NSString, UIImage, UIScrollView;
@protocol MusicEntityProviding, MusicMediaDetailSplitViewControllerDelegate;

@interface MusicMediaProductSplitMainViewController : UIViewController <MusicLibraryBrowseTableViewControllerDelegate, MusicProductAdditionalMetadataViewControllerDelegate, MusicVerticalScrollingContainerViewControllerDelegate, MusicClientContextConsuming, MusicMediaDetailSplitViewController>
{
    long long _presentationSource;
    MusicProductAdditionalMetadataViewController *_productAdditionalMetadataViewController;
    MusicProductTracklistTableViewConfiguration *_tracklistTableViewConfiguration;
    struct UIEdgeInsets _verticalScrollingContainerContentInsetAdditions;
    _Bool _forContentCreation;
    _Bool _trailingSeparatorInsetFollowsLayoutInsets;
    MusicEntityValueContext *_containerEntityValueContext;
    MusicProductTracklistTableViewController *_tracklistTableViewController;
    MusicVerticalScrollingContainerViewController *_verticalScrollingContainerViewController;
    MusicClientContext *_clientContext;
    id <MusicEntityProviding> _containerEntityProvider;
    UIViewController *_headerContentViewController;
    MusicMediaDetailTintInformation *_mediaDetailTintInformation;
    id <MusicMediaDetailSplitViewControllerDelegate> _mediaSplitViewControllerDelegate;
    long long _productDescriptionTextStyle;
    id <MusicEntityProviding> _tracklistEntityProvider;
    unsigned long long _editableComponents;
    UIImage *_editedContentArtworkImage;
    NSString *_editedContentTitle;
    UIViewController *_relatedContentViewController;
    id <MusicEntityProviding> __contextualActionsOverrideTracklistEntityProvider;
}

@property(readonly, nonatomic) id <MusicEntityProviding> _contextualActionsOverrideTracklistEntityProvider; // @synthesize _contextualActionsOverrideTracklistEntityProvider=__contextualActionsOverrideTracklistEntityProvider;
@property(retain, nonatomic) UIViewController *relatedContentViewController; // @synthesize relatedContentViewController=_relatedContentViewController;
@property(copy, nonatomic) NSString *editedContentTitle; // @synthesize editedContentTitle=_editedContentTitle;
@property(retain, nonatomic) UIImage *editedContentArtworkImage; // @synthesize editedContentArtworkImage=_editedContentArtworkImage;
@property(nonatomic) unsigned long long editableComponents; // @synthesize editableComponents=_editableComponents;
@property(nonatomic) _Bool trailingSeparatorInsetFollowsLayoutInsets; // @synthesize trailingSeparatorInsetFollowsLayoutInsets=_trailingSeparatorInsetFollowsLayoutInsets;
@property(readonly, nonatomic) id <MusicEntityProviding> tracklistEntityProvider; // @synthesize tracklistEntityProvider=_tracklistEntityProvider;
@property(nonatomic) long long productDescriptionTextStyle; // @synthesize productDescriptionTextStyle=_productDescriptionTextStyle;
@property(readonly, nonatomic) long long presentationSource; // @synthesize presentationSource=_presentationSource;
@property(nonatomic) __weak id <MusicMediaDetailSplitViewControllerDelegate> mediaSplitViewControllerDelegate; // @synthesize mediaSplitViewControllerDelegate=_mediaSplitViewControllerDelegate;
@property(copy, nonatomic) MusicMediaDetailTintInformation *mediaDetailTintInformation; // @synthesize mediaDetailTintInformation=_mediaDetailTintInformation;
@property(retain, nonatomic) UIViewController *headerContentViewController; // @synthesize headerContentViewController=_headerContentViewController;
@property(readonly, nonatomic, getter=isForContentCreation) _Bool forContentCreation; // @synthesize forContentCreation=_forContentCreation;
@property(readonly, nonatomic) id <MusicEntityProviding> containerEntityProvider; // @synthesize containerEntityProvider=_containerEntityProvider;
@property(retain, nonatomic) MusicClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(readonly, nonatomic) MusicVerticalScrollingContainerViewController *_verticalScrollingContainerViewController; // @synthesize _verticalScrollingContainerViewController;
@property(readonly, nonatomic) MusicProductTracklistTableViewController *_tracklistTableViewController; // @synthesize _tracklistTableViewController;
@property(readonly, nonatomic) MusicEntityValueContext *_containerEntityValueContext; // @synthesize _containerEntityValueContext;
- (void).cxx_destruct;
- (void)_reloadVerticalScrollingContainerItems;
- (void)_reloadContainerEntityValueContextProperties;
- (id)_productAdditionalMetadataViewController;
- (void)_configureWithTintInformation;
- (void)_containerEntityProviderDidInvalidateNotification:(id)arg1;
- (void)_prepareToCommitEditingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_configureProductAdditionalMetadataViewController:(id)arg1;
- (void)_commitEditingWithTracklistEntityProviderChangeRecords:(id)arg1;
- (id)_loadProductTracklistTableViewConfigurationWithTracklistEntityProvider:(id)arg1;
- (id)_loadProductHeaderLockupContentDescriptor;
- (void)commitEditing;
- (void)cancelEditing;
@property(nonatomic) long long prominentTrackStoreID;
@property(readonly, nonatomic) UIScrollView *containerScrollView;
- (void)verticalScrollingContainerViewController:(id)arg1 willEndDraggingWithVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)verticalScrollingContainerViewControllerContentSizeDidChange:(id)arg1;
- (void)verticalScrollingContainerViewControllerDidScroll:(id)arg1;
- (void)productAdditionalMetadataViewControllerWillBeginContentHeightAnimation:(id)arg1;
- (void)productAdditionalMetadataViewControllerDidFinishContentHeightAnimation:(id)arg1;
- (void)libraryBrowseTableViewControllerWillBeginContentHeightAnimation:(id)arg1;
- (void)libraryBrowseTableViewControllerDidFinishContentHeightAnimation:(id)arg1;
- (_Bool)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (id)contentScrollView;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets)arg1;
- (void)viewDidLoad;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithContainerEntityProvider:(id)arg1 tracklistEntityProvider:(id)arg2 clientContext:(id)arg3 presentationSource:(long long)arg4 forContentCreation:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

