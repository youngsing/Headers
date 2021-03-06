//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSExtension, NSString, UIImage, UIViewController;

@interface UIActivity : NSObject
{
    long long _defaultPriority;
    CDUnknownBlockType _activityCompletionWithItemsHandler;
}

+ (long long)activityCategory;
+ (id)_activityFunctionImage:(id)arg1;
+ (id)_activitySettingsImageForApplication:(id)arg1;
+ (id)_activityImageForApplication:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType activityCompletionWithItemsHandler; // @synthesize activityCompletionWithItemsHandler=_activityCompletionWithItemsHandler;
- (void).cxx_destruct;
- (void)activityDidFinish:(_Bool)arg1;
- (void)performActivity;
@property(readonly, nonatomic) UIViewController *activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
@property(readonly, nonatomic) UIImage *activityImage;
@property(readonly, nonatomic) NSString *activityTitle;
@property(readonly, nonatomic) NSString *activityType;
- (void)_injectedJavaScriptResult:(id)arg1;
@property(readonly, nonatomic) NSExtension *applicationExtension;
- (_Bool)_activitySupportsPromiseURLs;
- (_Bool)_canBeExcludedByActivityViewController:(id)arg1;
- (void)activityDidFinish:(_Bool)arg1 items:(id)arg2 error:(id)arg3;
- (id)_attachmentNameForActivityItem:(id)arg1;
- (id)_thumbnailImageForActivityItem:(id)arg1;
- (id)_dataTypeIdentifierForActivityItem:(id)arg1;
- (id)_subjectForActivityItem:(id)arg1;
- (struct CGSize)_thumbnailSize;
- (void)_setSubject:(id)arg1;
- (_Bool)_dismissActivityFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_cleanup;
- (void)_willPresentAsFormSheet;
- (id)_embeddedActivityViewController;
- (void)_setActivityCompletionWithItemsHandler:(CDUnknownBlockType)arg1;
- (id)_beforeActivity;
- (id)_activitySettingsImage;
- (id)activitySettingsImage;
- (id)_activityImage;
- (_Bool)_canPerformWithSuppliedActivityItems:(id)arg1;

@end

