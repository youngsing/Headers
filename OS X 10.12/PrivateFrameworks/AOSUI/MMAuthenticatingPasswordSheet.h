//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSImage, NSString, NSURL, NSWindow;

@interface MMAuthenticatingPasswordSheet : NSObject
{
    NSString *_accountID;
    NSString *_password;
    NSString *_rawPassword;
    NSString *_title;
    NSString *_message;
    NSString *_defaultButtonString;
    NSString *_cancelButtonString;
    NSString *_alternateButtonString;
    NSDictionary *_authenticationResults;
    NSWindow *_parentWindow;
    NSURL *_iForgotURL;
    NSError *_authenticationError;
    NSImage *_displayImage;
    BOOL _shouldPromptForPasswordOnly;
    BOOL _isEphemeral;
    CDUnknownBlockType _helpHandler;
}

+ (id)standardiForgotURL;
@property(copy) NSURL *iForgotURL; // @synthesize iForgotURL=_iForgotURL;
@property BOOL shouldPromptForPasswordOnly; // @synthesize shouldPromptForPasswordOnly=_shouldPromptForPasswordOnly;
@property BOOL isEphemeral; // @synthesize isEphemeral=_isEphemeral;
@property(copy) NSImage *displayImage; // @synthesize displayImage=_displayImage;
@property(retain) NSError *authenticationError; // @synthesize authenticationError=_authenticationError;
@property(copy) CDUnknownBlockType helpHandler; // @synthesize helpHandler=_helpHandler;
@property NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(copy) NSDictionary *authenticationResults; // @synthesize authenticationResults=_authenticationResults;
@property(copy) NSString *message; // @synthesize message=_message;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSString *rawPassword; // @synthesize rawPassword=_rawPassword;
@property(copy) NSString *password; // @synthesize password=_password;
@property(copy) NSString *accountID; // @synthesize accountID=_accountID;
- (void)helpButtonPressed:(id)arg1;
- (void)iForgotButtonPressed:(id)arg1;
- (void)showAuthPasswordSheetUsingWindow:(id)arg1 shouldNest:(BOOL)arg2 helpHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)showAuthPasswordSheetUsingWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showAuthPasswordSheetUsingWindow:(id)arg1;
- (void)dealloc;
- (id)initWithAccountID:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButtonTitle:(id)arg4 cancelButtonTitle:(id)arg5 alternateButtonTitle:(id)arg6 icon:(id)arg7 iconLabel:(id)arg8;

@end

