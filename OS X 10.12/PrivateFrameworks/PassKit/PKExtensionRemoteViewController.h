//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ViewBridge/NSRemoteViewController.h>

#import <PassKit/PKPaymentAuthorizationExtensionViewHostProtocol-Protocol.h>

@class NSString;
@protocol PKExtensionRemoteViewControllerDelegate;

@interface PKExtensionRemoteViewController : NSRemoteViewController <PKPaymentAuthorizationExtensionViewHostProtocol>
{
    id <PKExtensionRemoteViewControllerDelegate> _delegate;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@property(nonatomic) id <PKExtensionRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
