//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessagesKit/NSObject-Protocol.h>
#import <MessagesKit/SOAReceiverProtocol-Protocol.h>

@class NSArray, NSString;

@protocol SOAMessageReceiverProtocol <NSObject, SOAReceiverProtocol>
- (void)sendMessageText:(NSString *)arg1 toRecipients:(NSArray *)arg2 onService:(NSString *)arg3;
- (void)sendMessageText:(NSString *)arg1 toRecipients:(NSArray *)arg2 onService:(NSString *)arg3 withCompletionBlock:(void (^)(BOOL))arg4;
@end

