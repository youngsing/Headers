//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRGetVoiceInputDevicesResponseMessage : MRProtocolMessage
{
}

@property(readonly, nonatomic) unsigned int errorCode;
@property(readonly, nonatomic) NSArray *deviceIDs;
- (unsigned long long)type;
- (id)initWithDeviceIDs:(id)arg1 errorCode:(unsigned int)arg2;

@end

