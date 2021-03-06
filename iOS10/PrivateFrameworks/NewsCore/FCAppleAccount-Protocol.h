//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class NSString;

@protocol FCAppleAccount <NSObject>
@property(readonly, nonatomic) NSString *endpointConnectionClientID;
@property(readonly, nonatomic, getter=iCloudAccountChanged) _Bool iCloudAccountChanged;
@property(readonly, nonatomic, getter=isUserSignedInToiCloud) _Bool userSignedInToiCloud;
@property(readonly, nonatomic, getter=isPrivateDataSyncingEnabled) _Bool privateDataSyncingEnabled;
@property(readonly, nonatomic) NSString *supportedContentStoreFrontID;
@property(readonly, nonatomic) _Bool isContentStoreFrontSupported;
@property(readonly, nonatomic) NSString *contentStoreFrontID;
@property(readonly, nonatomic) NSString *userStoreFrontID;
@property(readonly, nonatomic) NSString *DSID;
- (NSString *)currentStoreFrontID;
- (void)loadStoreFrontIfNeededWithCompletion:(void (^)(void))arg1;
- (NSString *)iTunesAccountName;
- (_Bool)isUserSignedIntoiTunes;
@end

