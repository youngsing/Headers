//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/_SFQuickLookDocumentViewDelegate-Protocol.h>

@class NSArray, NSString, UIDocumentInteractionController, UIView, _SFQuickLookDocument, _SFQuickLookDocumentView;

@interface _SFQuickLookDocumentController : NSObject <_SFQuickLookDocumentViewDelegate>
{
    NSArray *_buttonActions;
    UIDocumentInteractionController *_documentInteractionController;
    _SFQuickLookDocumentView *_documentView;
    _SFQuickLookDocument *_quickLookDocument;
}

@property(readonly, nonatomic) UIView *documentView; // @synthesize documentView=_documentView;
- (void).cxx_destruct;
- (void)quickLookDocumentView:(id)arg1 didSelectActionAtIndex:(long long)arg2;
- (id)_actionTitleForType:(long long)arg1 withActionCount:(unsigned long long)arg2;
- (id)_supportedApplications;
- (void)_updateActionButtons;
- (void)presentDocumentInteractionControllerFromRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)updateWithQuickLookDocument:(id)arg1;
- (void)updateTopContentInset:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

