//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

#import <UIKit/LSOpenResourceOperationDelegate-Protocol.h>

@class LSApplicationProxy, LSDocumentProxy, NSString;

__attribute__((visibility("hidden")))
@interface _UIOpenInAppActivity : UIActivity <LSOpenResourceOperationDelegate>
{
    _Bool _sourceIsManaged;
    _Bool _actionIsImport;
    LSApplicationProxy *_applicationProxy;
    LSDocumentProxy *_documentProxy;
}

+ (long long)activityCategory;
+ (id)activitiesForFileURL:(id)arg1 sourceIsManaged:(_Bool)arg2;
+ (id)openInActivitiesForItems:(id)arg1 sourceIsManaged:(_Bool)arg2;
+ (void)enumerateAvailableApplicationsInPreferredOrderForOpeningDocument:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool actionIsImport; // @synthesize actionIsImport=_actionIsImport;
@property(nonatomic) _Bool sourceIsManaged; // @synthesize sourceIsManaged=_sourceIsManaged;
@property(retain, nonatomic) LSDocumentProxy *documentProxy; // @synthesize documentProxy=_documentProxy;
@property(retain, nonatomic) LSApplicationProxy *applicationProxy; // @synthesize applicationProxy=_applicationProxy;
- (void).cxx_destruct;
- (void)_performOpenWithUserInfo:(id)arg1;
- (void)performActivity;
- (id)activityTitle;
- (id)activityType;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_firstMatchingDocumentProxyForActivityItems:(id)arg1;
- (id)_activitySettingsImage;
- (id)_activityImage;
- (id)_nonImportActivityTitle;
- (id)initWithApplicationProxy:(id)arg1 documentProxy:(id)arg2 sourceIsManaged:(_Bool)arg3 actionIsImport:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
