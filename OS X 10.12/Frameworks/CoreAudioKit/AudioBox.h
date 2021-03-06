//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AudioBox : NSObject
{
    NSString *name;
    NSString *manufacturer;
    NSString *model;
    NSString *uid;
    unsigned int transportType;
    BOOL nameSettable;
    BOOL hasAudio;
    BOOL hasVideo;
    BOOL hasMIDI;
    BOOL isProtected;
    BOOL acquired;
    BOOL nowAcquiring;
    unsigned int acquireError;
    BOOL canIdentify;
    BOOL capabilitiesRetrieved;
    BOOL hasCleanedUp;
    NSString *serialNumber;
    NSString *firmwareVersion;
    struct CAHALAudioObject *audioObject;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)localizedNameForTransportType:(unsigned int)arg1;
+ (id)nameForTransportType:(unsigned int)arg1;
@property(readonly) unsigned int acquireError; // @synthesize acquireError;
@property(readonly) BOOL nowAcquiring; // @synthesize nowAcquiring;
@property(readonly) unsigned int transportType; // @synthesize transportType;
- (id)description;
- (void)simulateIdentify;
- (int)audioBoxPropertyChanged:(unsigned int)arg1 property:(unsigned int)arg2;
@property BOOL identify; // @dynamic identify;
- (BOOL)canIdentify;
@property(readonly, retain) NSString *firmwareVersion; // @dynamic firmwareVersion;
@property(readonly, retain) NSString *serialNumber; // @dynamic serialNumber;
@property(getter=isAcquired) BOOL acquired; // @dynamic acquired;
- (BOOL)canAcquire;
@property(readonly) BOOL isProtected; // @dynamic isProtected;
@property(readonly, getter=isMIDI) BOOL hasMIDI; // @dynamic hasMIDI;
@property(readonly, getter=isVideo) BOOL hasVideo; // @dynamic hasVideo;
@property(readonly, getter=isAudio) BOOL hasAudio; // @dynamic hasAudio;
- (void)retrieveCapabilities;
@property(readonly, retain) NSString *transportName; // @dynamic transportName;
@property(readonly, retain) NSString *uid; // @dynamic uid;
@property(readonly) NSString *model; // @dynamic model;
@property(readonly) NSString *manufacturer; // @dynamic manufacturer;
@property(readonly, getter=isNameSettable) BOOL nameSettable; // @dynamic nameSettable;
@property(retain) NSString *name; // @dynamic name;
@property(readonly) unsigned int objectID; // @dynamic objectID;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)cleanup;
- (id)initWithObjectID:(unsigned int)arg1;

@end

