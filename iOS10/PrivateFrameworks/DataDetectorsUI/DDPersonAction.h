//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataDetectorsUI/DDPreviewAction.h>

#import <DataDetectorsUI/CNAvatarCardControllerDelegate-Protocol.h>

@class CNAvatarCardController, CNContact, CNContactStore, NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface DDPersonAction : DDPreviewAction <CNAvatarCardControllerDelegate>
{
    CNContact *_contact;
    CNContactStore *_store;
    CNAvatarCardController *_avatar;
    UIViewController *_presentingViewController;
}

+ (_Bool)handlesUrl:(id)arg1 result:(struct __DDResult *)arg2;
@property __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain) CNAvatarCardController *avatar; // @synthesize avatar=_avatar;
@property(retain) CNContactStore *store; // @synthesize store=_store;
@property(retain) CNContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (id)presentingViewControllerForAvatarCardController:(id)arg1;
- (id)createViewController;
- (_Bool)requiresEmbeddingNavigationController;
- (id)initWithURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;
- (id)mainValueFromURLString:(id)arg1 schemes:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

