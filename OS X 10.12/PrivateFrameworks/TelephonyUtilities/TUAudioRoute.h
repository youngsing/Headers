//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, TUAudioRoutePreferredRouteOptions;

@interface TUAudioRoute : NSObject
{
    TUAudioRoutePreferredRouteOptions *_preferredRouteOptions;
    NSDictionary *_route;
}

@property(retain, nonatomic) NSDictionary *route; // @synthesize route=_route;
@property(retain, nonatomic) TUAudioRoutePreferredRouteOptions *preferredRouteOptions; // @synthesize preferredRouteOptions=_preferredRouteOptions;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *identifiersOfOtherConnectedDevices;
- (void)_updatePreferredRouteOptions;
- (BOOL)_routeNameEqualTo:(id)arg1;
@property(readonly, nonatomic, getter=isPreferred) BOOL preferred;
@property(readonly, nonatomic) long long bluetoothEndpointType;
@property(readonly, nonatomic, getter=isWirelessHeadset) BOOL wirelessHeadset;
@property(readonly, nonatomic, getter=isBluetooth) BOOL bluetooth;
@property(readonly, nonatomic, getter=isCarAudio) BOOL carAudio;
@property(readonly, nonatomic, getter=isAirTunes) BOOL airTunes;
@property(readonly, nonatomic, getter=isSpeaker) BOOL speaker;
@property(readonly, nonatomic, getter=isReceiver) BOOL receiver;
@property(readonly, nonatomic, getter=isCurrentlyPicked) BOOL currentlyPicked;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end

