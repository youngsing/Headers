//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData;

@interface IDSSocketPairEncryptedMessage : IDSSocketPairMessage
{
    NSData *_data;
}

- (id)_nonHeaderData;
@property(readonly, retain, nonatomic) NSData *data;
- (unsigned char)command;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;

@end
