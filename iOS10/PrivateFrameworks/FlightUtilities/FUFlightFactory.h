//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FlightUtilities/FUFlightFactoryInternalProtocol-Protocol.h>

@class NSString;

@interface FUFlightFactory : NSObject <FUFlightFactoryInternalProtocol>
{
}

+ (void)loadFlightsWithNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)loadFlightWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)loadFlightDataWithFlightNumber:(long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (Class)flightFactoryClassWithProvider:(id)arg1;
- (id)parseFlightData:(id)arg1 withError:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

