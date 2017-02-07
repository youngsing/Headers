//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchRemote/TRTransferBrowserDelegate-Protocol.h>

@class NSString, TRDeviceSetupPeripheral, TRTransferBrowser;
@protocol TRDeviceSetupBrowserDelegate;

@interface TRDeviceSetupBrowser : NSObject <TRTransferBrowserDelegate>
{
    id <TRDeviceSetupBrowserDelegate> _delegate;
    TRTransferBrowser *_transferBrowser;
    TRDeviceSetupPeripheral *_peripheral;
}

@property(retain, nonatomic) TRDeviceSetupPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property(retain, nonatomic) TRTransferBrowser *transferBrowser; // @synthesize transferBrowser=_transferBrowser;
@property(nonatomic) __weak id <TRDeviceSetupBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stop;
- (void)defer;
@property(readonly, nonatomic) long long state;
- (void)start;
- (void)browserDidDisconnect:(id)arg1;
- (void)browser:(id)arg1 didReceiveData:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)browser:(id)arg1 didStartTransferWithSendDataHandler:(CDUnknownBlockType)arg2;
- (void)browserDidChangeState:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
