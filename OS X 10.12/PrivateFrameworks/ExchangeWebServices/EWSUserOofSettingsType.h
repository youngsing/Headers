//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class EWSDuration, EWSReplyBodyType, NSString;

@interface EWSUserOofSettingsType : NSObject <XSDefinitionProvider>
{
    long long _OofState;
    long long _ExternalAudience;
    EWSDuration *_Duration;
    EWSReplyBodyType *_InternalReply;
    EWSReplyBodyType *_ExternalReply;
}

+ (id)definition;
@property(retain, nonatomic) EWSReplyBodyType *ExternalReply; // @synthesize ExternalReply=_ExternalReply;
@property(retain, nonatomic) EWSReplyBodyType *InternalReply; // @synthesize InternalReply=_InternalReply;
@property(retain, nonatomic) EWSDuration *Duration; // @synthesize Duration=_Duration;
@property(nonatomic) long long ExternalAudience; // @synthesize ExternalAudience=_ExternalAudience;
@property(nonatomic) long long OofState; // @synthesize OofState=_OofState;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

