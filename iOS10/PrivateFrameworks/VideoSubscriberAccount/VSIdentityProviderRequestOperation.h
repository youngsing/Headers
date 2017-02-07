//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSFailable, VSIdentityProvider, VSIdentityProviderController, VSIdentityProviderRequest;
@protocol VSIdentityProviderControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderRequestOperation : VSAsyncOperation
{
    VSIdentityProvider *_identityProvider;
    VSIdentityProviderRequest *_request;
    id <VSIdentityProviderControllerDelegate> _controllerDelegate;
    VSFailable *_result;
    VSIdentityProviderController *_controller;
}

@property(retain, nonatomic) VSIdentityProviderController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) VSFailable *result; // @synthesize result=_result;
@property(nonatomic) __weak id <VSIdentityProviderControllerDelegate> controllerDelegate; // @synthesize controllerDelegate=_controllerDelegate;
@property(readonly, copy, nonatomic) VSIdentityProviderRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) VSIdentityProvider *identityProvider; // @synthesize identityProvider=_identityProvider;
- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)init;
- (id)initWithIdentityProvider:(id)arg1 request:(id)arg2;

@end
