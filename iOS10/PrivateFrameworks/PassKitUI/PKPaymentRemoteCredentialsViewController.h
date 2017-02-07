//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupTableViewController.h>

#import <PassKitUI/PKPaymentSetupViewControllerCanHideSetupLaterButton-Protocol.h>

@class NSArray, NSString, PKPaymentProvisioningController, PKPaymentSetupCardDetailsFooterView, PKPaymentSetupProduct, PKTableHeaderView;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentRemoteCredentialsViewController : PKPaymentSetupTableViewController <PKPaymentSetupViewControllerCanHideSetupLaterButton>
{
    PKPaymentProvisioningController *_provisioningController;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
    NSArray *_remoteCredentials;
    PKTableHeaderView *_tableHeader;
    PKPaymentSetupCardDetailsFooterView *_tableFooter;
    _Bool _allowsManualEntry;
    _Bool _hideSetupLaterButton;
    PKPaymentSetupProduct *_product;
}

@property(nonatomic) _Bool hideSetupLaterButton; // @synthesize hideSetupLaterButton=_hideSetupLaterButton;
@property(retain, nonatomic) PKPaymentSetupProduct *product; // @synthesize product=_product;
- (void).cxx_destruct;
- (void)_presentViewController:(id)arg1;
- (void)_presentCardDetailsControllerForCredential:(id)arg1;
- (void)_presentManualAddController;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)_deviceSpecificLocalizedStringKeyForKey:(id)arg1;
- (void)viewDidLoad;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 delegate:(id)arg3 remoteCredentials:(id)arg4 allowsManualEntry:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
