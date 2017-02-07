//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol ABFaceTimeService <NSObject>
- (void)getSupplementalDialTelephonyCallString:(void (^)(NSString *))arg1;
- (void)makeFaceTimeCallWithEndpoint:(NSString *)arg1 isAudio:(BOOL)arg2;
- (void)makeFaceTimeCallWithContactIdentifier:(NSString *)arg1 isAudio:(BOOL)arg2;
- (void)updateTelephonyAvailability;
- (void)startiMessageAvailabilityCheckForEndpoint:(NSString *)arg1;
- (void)startFaceTimeAvailabilityCheckForContactIdentifier:(NSString *)arg1 endpoints:(NSArray *)arg2;
@end
