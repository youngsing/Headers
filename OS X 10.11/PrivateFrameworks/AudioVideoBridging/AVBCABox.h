//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AudioVideoBridging/AVBCAObject.h>

@class NSArray, NSString;

@interface AVBCABox : AVBCAObject
{
}

@property(readonly, nonatomic, getter=isNameSettable) BOOL nameSettable; // @dynamic nameSettable;
@property(readonly, nonatomic, getter=isIdentifySettable) BOOL identifySettable; // @dynamic identifySettable;
@property(readonly, nonatomic, getter=isAcquireSettable) BOOL acquireSettable; // @dynamic acquireSettable;
@property(readonly, copy, nonatomic) NSArray *deviceObjectIDs; // @dynamic deviceObjectIDs;
@property(nonatomic) BOOL identify; // @dynamic identify;
@property(readonly, nonatomic) int acquisitionFailure; // @dynamic acquisitionFailure;
@property(nonatomic, getter=isAcquired) BOOL acquired; // @dynamic acquired;
@property(readonly, nonatomic) BOOL isProtected;
@property(readonly, nonatomic) BOOL hasMIDI; // @dynamic hasMIDI;
@property(readonly, nonatomic) BOOL hasVideo; // @dynamic hasVideo;
@property(readonly, nonatomic) BOOL hasAudio; // @dynamic hasAudio;
@property(readonly, nonatomic) unsigned int transportType; // @dynamic transportType;
@property(readonly, copy, nonatomic) NSString *modelUID; // @dynamic modelUID;
@property(readonly, copy, nonatomic) NSString *boxUID; // @dynamic boxUID;
@property(readonly, copy, nonatomic) NSString *firmwareVersion;
@property(readonly, copy, nonatomic) NSString *serialNumber;
@property(readonly, copy, nonatomic) NSString *modelName; // @dynamic modelName;
@property(readonly, copy, nonatomic) NSString *manufacturer; // @dynamic manufacturer;
@property(copy, nonatomic) NSString *name; // @dynamic name;

@end

