//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <CallKit/CXCallDirectoryProviderHostProtocol-Protocol.h>

@class NSString;
@protocol CXCallDirectoryProviderHostProtocol;

__attribute__((visibility("hidden")))
@interface CXCallDirectoryExtensionHostContext : NSExtensionContext <CXCallDirectoryProviderHostProtocol>
{
    id <CXCallDirectoryProviderHostProtocol> _delegate;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property(nonatomic) __weak id <CXCallDirectoryProviderHostProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (oneway void)completeRequestWithReply:(CDUnknownBlockType)arg1;
- (oneway void)addIdentificationEntriesWithData:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)addBlockingEntriesWithData:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestFailedWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
