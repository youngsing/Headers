//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSString;

@interface IDSSocketPairServiceMapMessage : IDSSocketPairMessage
{
    unsigned char _reason;
    unsigned short _mappedStreamID;
    NSString *_serviceName;
}

@property(readonly, retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(readonly, nonatomic) unsigned short mappedStreamID; // @synthesize mappedStreamID=_mappedStreamID;
@property(readonly, nonatomic) unsigned char reason; // @synthesize reason=_reason;
- (id)_nonHeaderData;
- (unsigned char)command;
- (void)dealloc;
- (id)initWithReason:(unsigned char)arg1 mappedStreamID:(unsigned short)arg2 serviceName:(id)arg3;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;

@end

