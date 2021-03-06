//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <ContactsUI/CNAvatarViewDelegate-Protocol.h>
#import <ContactsUI/QLPreviewControllerDataSource-Protocol.h>
#import <ContactsUI/QLPreviewControllerDelegate-Protocol.h>
#import <ContactsUI/UIImagePickerControllerDelegate-Protocol.h>
#import <ContactsUI/UINavigationControllerDelegate-Protocol.h>

@class CNAvatarView, CNMutableContact, CNUIPRLikenessLookup, NSArray, NSString, PRLikeness, UIButton, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol CNContactPhotoViewDelegate, CNPresenterDelegate;

__attribute__((visibility("hidden")))
@interface CNContactPhotoView : UIControl <UINavigationControllerDelegate, UIImagePickerControllerDelegate, QLPreviewControllerDelegate, QLPreviewControllerDataSource, CNAvatarViewDelegate>
{
    _Bool _editing;
    _Bool _modified;
    _Bool _isAnimatingBounce;
    NSArray *_contacts;
    CNAvatarView *_avatarView;
    id <CNPresenterDelegate> _delegate;
    id <CNContactPhotoViewDelegate> _photoViewDelegate;
    CNMutableContact *_pendingEditContact;
    PRLikeness *_originalLikeness;
    PRLikeness *_currentLikeness;
    CNUIPRLikenessLookup *_likenessResolver;
    UIButton *_addPhotoButton;
    UIButton *_editPhotoButton;
    UIImageView *_attributionImageView;
    NSArray *_variableConstraints;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

+ (id)supportedPasteboardTypes;
+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) NSArray *variableConstraints; // @synthesize variableConstraints=_variableConstraints;
@property(nonatomic) _Bool isAnimatingBounce; // @synthesize isAnimatingBounce=_isAnimatingBounce;
@property(retain, nonatomic) UIImageView *attributionImageView; // @synthesize attributionImageView=_attributionImageView;
@property(retain, nonatomic) UIButton *editPhotoButton; // @synthesize editPhotoButton=_editPhotoButton;
@property(retain, nonatomic) UIButton *addPhotoButton; // @synthesize addPhotoButton=_addPhotoButton;
@property(retain, nonatomic) CNUIPRLikenessLookup *likenessResolver; // @synthesize likenessResolver=_likenessResolver;
@property(retain, nonatomic) PRLikeness *currentLikeness; // @synthesize currentLikeness=_currentLikeness;
@property(retain, nonatomic) PRLikeness *originalLikeness; // @synthesize originalLikeness=_originalLikeness;
@property(retain, nonatomic) CNMutableContact *pendingEditContact; // @synthesize pendingEditContact=_pendingEditContact;
@property(nonatomic) __weak id <CNContactPhotoViewDelegate> photoViewDelegate; // @synthesize photoViewDelegate=_photoViewDelegate;
@property(nonatomic) __weak id <CNPresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) _Bool modified; // @synthesize modified=_modified;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (void).cxx_destruct;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (void)previewControllerDidDismiss:(id)arg1;
- (struct CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id *)arg3;
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (void)avatarView:(id)arg1 willShowActions:(id)arg2;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)_bounceSmallPhoto;
- (void)_presentFullScreenPhoto:(id)arg1;
- (void)_zoomContactPhoto;
- (id)previewPath;
- (id)_createImagePickerForEditingImageData:(id)arg1 withCropRect:(struct CGRect)arg2;
- (id)_createImagePicker;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)_presentPhotoEditingSheet;
- (_Bool)_isUsingCuratedPhoto;
- (id)_localizedStringForProfileAction:(id)arg1 type:(unsigned long long)arg2;
- (void)updateAttributionBadge;
- (void)updatePhoto;
@property(nonatomic) _Bool prohibitsPersonaFetch;
- (void)resetPhoto;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)menuWillHide:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)longPressGesture:(id)arg1;
- (void)avatarTapped:(id)arg1;
- (void)disablePhotoTapGesture;
- (void)setHighlightedFrame:(_Bool)arg1;
- (_Bool)hasPhoto;
- (void)saveEdits;
- (id)currentImageDataAndCropRect:(struct CGRect *)arg1;
- (id)currentImageData;
- (void)updateConstraints;
- (void)updateFontSizes;
@property(readonly, nonatomic) CNMutableContact *mutableContact;
- (id)contact;
- (_Bool)isMeContact;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 monogrammerStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

