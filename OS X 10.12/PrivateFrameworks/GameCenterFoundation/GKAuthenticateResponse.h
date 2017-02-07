//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerCredential, NSURL;

@interface GKAuthenticateResponse : GKInternalRepresentation
{
    BOOL _loginDisabled;
    BOOL _passwordChangeRequired;
    BOOL _shouldShowLinkAccountsUI;
    GKPlayerCredential *_credential;
    NSURL *_passwordChangeURL;
}

+ (id)secureCodedPropertyKeys;
@property(nonatomic) BOOL shouldShowLinkAccountsUI; // @synthesize shouldShowLinkAccountsUI=_shouldShowLinkAccountsUI;
@property(retain, nonatomic) NSURL *passwordChangeURL; // @synthesize passwordChangeURL=_passwordChangeURL;
@property(nonatomic) BOOL passwordChangeRequired; // @synthesize passwordChangeRequired=_passwordChangeRequired;
@property(nonatomic) BOOL loginDisabled; // @synthesize loginDisabled=_loginDisabled;
@property(retain, nonatomic) GKPlayerCredential *credential; // @synthesize credential=_credential;
- (void)dealloc;

@end
