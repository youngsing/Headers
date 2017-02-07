//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSViewController.h>

#import <VideoSubscriberAccount/VSDeveloperIdentityProviderViewControllerDelegate-Protocol.h>
#import <VideoSubscriberAccount/VSIdentityProviderPickerViewControllerDelegate-Protocol.h>

@class NSOperationQueue, NSString;
@protocol VSIdentityProviderPickerViewController;

@interface VSDeveloperSettingsViewController_iOS : PSViewController <VSIdentityProviderPickerViewControllerDelegate, VSDeveloperIdentityProviderViewControllerDelegate>
{
    NSOperationQueue *_privateQueue;
    id <VSIdentityProviderPickerViewController> _pickerViewController;
}

@property(retain, nonatomic) id <VSIdentityProviderPickerViewController> pickerViewController; // @synthesize pickerViewController=_pickerViewController;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)identityProviderPickerViewControllerDidPickAdditionalIdentityProviders:(id)arg1;
- (void)identityProviderPickerViewController:(id)arg1 didPickIdentityProvider:(id)arg2;
- (void)developerIdentityProviderViewControllerDidDelete:(id)arg1;
- (void)developerIdentityProviderViewControllerDidFinish:(id)arg1;
- (void)developerIdentityProviderViewControllerDidCancel:(id)arg1;
- (void)_deselectSelectedProvider;
- (void)_updateChildViewController:(id)arg1;
- (void)_presentError:(id)arg1;
- (void)_setupAppropriateChildViewController;
- (void)_fetchDeveloperProvidersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_showDetailsForIdentityProvider:(id)arg1;
- (void)_enqueueChange:(long long)arg1 withIdentityProvider:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
