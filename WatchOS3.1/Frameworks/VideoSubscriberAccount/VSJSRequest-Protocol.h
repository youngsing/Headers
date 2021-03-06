//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/JSExport-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol VSJSRequest <JSExport>
@property(readonly, copy, nonatomic) NSDictionary *requestorInfo;
@property(readonly, copy, nonatomic) NSArray *attributeNames;
@property(readonly, copy, nonatomic) NSString *requestorVerificationToken;
@property(readonly, copy, nonatomic) NSString *appleVerificationToken;
@property(readonly, copy, nonatomic) NSString *currentAuthentication;
@property(readonly, copy, nonatomic) NSString *requestBody;
@property(readonly, copy, nonatomic) NSString *requestType;
@end

