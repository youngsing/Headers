//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <SafariServices/SFSafariExtensionVendorProtocol-Protocol.h>

@class NSString, SFSafariExtensionViewController;

__attribute__((visibility("hidden")))
@interface SFSafariExtensionContext : NSExtensionContext <SFSafariExtensionVendorProtocol>
{
}

+ (BOOL)_isPrincipalObjectValid;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property(readonly, nonatomic) SFSafariExtensionViewController *extensionViewController;
- (void)popoverDidCloseInWindow:(id)arg1;
- (void)popoverWillShowInWindow:(id)arg1;
- (void)contextMenuItemSelectedWithCommand:(id)arg1 inPage:(id)arg2 userInfo:(id)arg3;
- (void)validateToolbarItemInWindow:(id)arg1 validationHandler:(CDUnknownBlockType)arg2;
- (void)toolbarItemClickedInWindow:(id)arg1;
- (void)messageReceivedWithName:(id)arg1 fromPage:(id)arg2 userInfo:(id)arg3;
- (void)_completeRequestAfterDelay;
- (void)_completeRequest;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (id)_derivedExtensionAuxiliaryHostProtocol;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
