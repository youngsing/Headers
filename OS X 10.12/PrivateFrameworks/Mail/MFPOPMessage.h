//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MailCore/MCMessage.h>

@class MFMailbox, MFPOPAccount, NSData, NSString;

@interface MFPOPMessage : MCMessage
{
    unsigned long long _messageNumber;
    NSString *_messageID;
    NSData *_messageData;
}

@property(copy, nonatomic) NSData *messageData; // @synthesize messageData=_messageData;
@property(copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
@property(nonatomic) unsigned long long messageNumber; // @synthesize messageNumber=_messageNumber;
- (void).cxx_destruct;
- (id)remoteMailboxURLString;
- (id)messageDataIncludingFromSpace:(BOOL)arg1 newDocumentID:(id)arg2 fetchIfNotAvailable:(BOOL)arg3;
- (unsigned long long)messageSize;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
@property(readonly, nonatomic) MFMailbox *mailbox;
@property(readonly, nonatomic) MFPOPAccount *account;
- (id)initWithPOP3FetchStore:(id)arg1;

@end
