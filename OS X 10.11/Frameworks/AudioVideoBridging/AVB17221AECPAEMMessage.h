//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AECPMessage.h>

@class NSData;

@interface AVB17221AECPAEMMessage : AVB17221AECPMessage
{
    unsigned short rawCommandType;
    NSData *commandSpecificData;
}

+ (id)responseMessage;
+ (id)commandMessage;
+ (id)keyPathsForValuesAffectingControllerRequest;
+ (id)keyPathsForValuesAffectingUnsolicited;
+ (id)keyPathsForValuesAffectingCommandType;
@property unsigned short rawCommandType; // @synthesize rawCommandType;
@property(copy) NSData *commandSpecificData; // @synthesize commandSpecificData;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(getter=isControllerRequest) BOOL controllerRequest; // @dynamic controllerRequest;
@property(getter=isUnsolicited) BOOL unsolicited; // @dynamic unsolicited;
@property unsigned short commandType; // @dynamic commandType;

@end
