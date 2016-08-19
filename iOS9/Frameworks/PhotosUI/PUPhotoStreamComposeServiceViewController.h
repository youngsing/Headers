//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Social/SLComposeServiceViewController.h>

#import <PhotosUI/PUCloudSharedCreateAlbumViewControllerDelegate-Protocol.h>
#import <PhotosUI/PUPhotoStreamCreateTitleDelegate-Protocol.h>
#import <PhotosUI/PUPhotoStreamsAlbumsTableViewControllerDelegate-Protocol.h>
#import <PhotosUI/SLSheetViewHostProtocol-Protocol.h>

@class NSArray, NSString;
@protocol PUPhotoStreamComposeServiceDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoStreamComposeServiceViewController : SLComposeServiceViewController <PUPhotoStreamsAlbumsTableViewControllerDelegate, PUPhotoStreamCreateTitleDelegate, PUCloudSharedCreateAlbumViewControllerDelegate, SLSheetViewHostProtocol>
{
    struct {
        unsigned int hasDidPost:1;
        unsigned int hasDidCancel:1;
    } _delegateFlags;
    struct NSObject *_selectedAlbum;
    NSArray *_actions;
    struct NSObject *_albumList;
    _Bool _inCreateNewAlbum;
    NSArray *_recipients;
    _Bool _shouldShowPost;
    NSString *_itemCountString;
    _Bool _hasPushedTitleController;
    _Bool _shouldAllowAlbumPicking;
    _Bool _addToExistingWorkflow;
    id <PUPhotoStreamComposeServiceDelegate> _delegate;
    CDUnknownBlockType _completion;
    NSString *_albumTitle;
}

@property(retain, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
@property(nonatomic) _Bool addToExistingWorkflow; // @synthesize addToExistingWorkflow=_addToExistingWorkflow;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool shouldAllowAlbumPicking; // @synthesize shouldAllowAlbumPicking=_shouldAllowAlbumPicking;
@property(nonatomic) __weak id <PUPhotoStreamComposeServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_pushTitleController;
- (void)userDidCancelWithoutAnimation;
- (void)shouldShowNetworkActivityIndicator:(id)arg1;
- (void)sheetDidSendWithSucess:(id)arg1 error:(id)arg2;
- (void)sheetFailedWithError:(id)arg1;
- (void)userDidPost;
- (void)userDidCancel;
- (void)albumStreamingCreateViewController:(id)arg1 didSucceed:(_Bool)arg2;
- (void)titleController:(id)arg1 didSetTitle:(id)arg2;
- (void)titleControllerDidCancel:(id)arg1;
- (void)controllerWillCreateNewAlbum:(id)arg1;
- (void)controller:(id)arg1 didSelectAlbum:(struct NSObject *)arg2;
- (id)albumListAction;
- (void)failWithError:(id)arg1;
- (void)cancel;
- (void)send;
- (id)serviceIconImage;
- (id)title;
- (id)sheetActions;
- (void)setAssetsToShare:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
