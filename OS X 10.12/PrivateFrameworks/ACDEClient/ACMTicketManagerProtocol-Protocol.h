//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ACDEClient/ACCTicketManagerProtocol-Protocol.h>

@class ACMAuthContext, NSData, NSString;

@protocol ACMTicketManagerProtocol <ACCTicketManagerProtocol>

@optional
- (ACMAuthContext *)initialTokenNotTiedToSessionWithRealm:(NSString *)arg1;
- (NSData *)sciFiSignatureForToken:(ACMAuthContext *)arg1;
@end

