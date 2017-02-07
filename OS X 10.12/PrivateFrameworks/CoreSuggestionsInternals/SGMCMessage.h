//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, NSString, SGMCMessageHeaders;

@interface SGMCMessage : NSObject
{
    id _mcMessage;
    SGMCMessageHeaders *_headers;
    NSString *_subject;
    NSArray *_to;
    NSDate *_dateSent;
    NSString *_sender;
    NSData *_headerData;
}

+ (void)_loadMailCoreFramework;
+ (id)messageWithRFC822Data:(id)arg1;
@property(readonly) NSData *headerData; // @synthesize headerData=_headerData;
@property(readonly) NSString *sender; // @synthesize sender=_sender;
@property(readonly) NSDate *dateSent; // @synthesize dateSent=_dateSent;
@property(readonly) NSArray *to; // @synthesize to=_to;
@property(readonly) NSString *subject; // @synthesize subject=_subject;
@property(readonly) SGMCMessageHeaders *headers; // @synthesize headers=_headers;
- (void).cxx_destruct;
- (id)bestAlternativePart;
- (void)messageBodyIfAvailable;
- (id)_initWithData:(id)arg1;

@end
