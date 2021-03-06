//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/IKAppNavigationController-Protocol.h>

@class NSArray, NSMutableArray, NSString, SKUIClientContext, UINavigationController;
@protocol SKUINavigationDocumentDelegate;

@interface SKUINavigationDocumentController : NSObject <IKAppNavigationController>
{
    NSMutableArray *_pendingNavigationStackEnsureConsistencyRequests;
    NSMutableArray *_stackItems;
    UINavigationController *_navigationController;
    SKUIClientContext *_clientContext;
    id <SKUINavigationDocumentDelegate> _delegate;
    UINavigationController *_overrideNavigationController;
    UINavigationController *_moreNavigationController;
}

@property(retain, nonatomic) UINavigationController *moreNavigationController; // @synthesize moreNavigationController=_moreNavigationController;
@property(retain, nonatomic) UINavigationController *overrideNavigationController; // @synthesize overrideNavigationController=_overrideNavigationController;
@property(nonatomic) __weak id <SKUINavigationDocumentDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(readonly, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, copy, nonatomic) NSArray *documentStackItems; // @synthesize documentStackItems=_stackItems;
- (void).cxx_destruct;
- (void)_unloadAllStackItems;
- (void)_scheduleFlushingPendingNavigationStackEnsureConsistencyRequestsWithTransitionCoordinator:(id)arg1;
- (void)_handleStackDidChange;
- (void)_ensureStackConsistencyForNavigationControllerOperation:(long long)arg1 operationDidComplete:(_Bool)arg2;
- (void)_applyDocumentReplacementForOldStackItem:(id)arg1 atOldIndex:(long long)arg2 withStackItem:(id)arg3;
- (id)_activeNavigationController;
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
- (void)removeDocument:(id)arg1;
- (void)pushDocument:(id)arg1 options:(id)arg2;
- (void)popToDocument:(id)arg1;
- (void)popToRootDocument;
- (void)popDocument;
- (void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3;
- (id)documents;
- (void)clear;
- (void)setStackItems:(id)arg1 animated:(_Bool)arg2;
- (void)popAllDocuments;
- (void)ensureStackConsistencyForNavigationControllerOperation:(long long)arg1 operationDidComplete:(_Bool)arg2;
- (id)initWithNavigationController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

