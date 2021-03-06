//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailService/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSString;

@interface MSEmailModel : NSObject <NSSecureCoding>
{
    NSArray *_toRecipients;
    NSArray *_ccRecipients;
    NSArray *_bccRecipients;
    NSString *_fromAddress;
    NSArray *_replyToAddresses;
    NSArray *_references;
    NSString *_subject;
    NSDate *_dateSent;
    NSArray *_htmlStringsAndAttachments;
    NSString *_snippet;
    NSString *_messageID;
    NSString *_inReplyTo;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *inReplyTo; // @synthesize inReplyTo=_inReplyTo;
@property(copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
@property(copy, nonatomic) NSString *snippet; // @synthesize snippet=_snippet;
@property(copy, nonatomic) NSArray *htmlStringsAndAttachments; // @synthesize htmlStringsAndAttachments=_htmlStringsAndAttachments;
@property(copy, nonatomic) NSDate *dateSent; // @synthesize dateSent=_dateSent;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) NSArray *references; // @synthesize references=_references;
@property(copy, nonatomic) NSArray *replyToAddresses; // @synthesize replyToAddresses=_replyToAddresses;
@property(copy, nonatomic) NSString *fromAddress; // @synthesize fromAddress=_fromAddress;
@property(copy, nonatomic) NSArray *bccRecipients; // @synthesize bccRecipients=_bccRecipients;
@property(copy, nonatomic) NSArray *ccRecipients; // @synthesize ccRecipients=_ccRecipients;
@property(copy, nonatomic) NSArray *toRecipients; // @synthesize toRecipients=_toRecipients;
- (void).cxx_destruct;
- (id)_htmlForAttributedString:(id)arg1;
- (void)_addReplyAllRecipientsToMessage:(id)arg1 fromAddressList:(id)arg2;
- (void)generateRequestedMessageWithString:(id)arg1 messageType:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateForwardedMessageWithString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)generateReplyMessageWithString:(id)arg1 replyAll:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) BOOL senderIsVIP;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;

@end

