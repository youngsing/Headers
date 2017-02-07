//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSNumber, NSString, NSURL, SKPaymentTransaction;

@interface SKDownload : NSObject
{
    id _internal;
}

+ (void)deleteContentForProductID:(id)arg1;
+ (id)contentURLForProductID:(id)arg1;
+ (id)_contentURLForProductID:(id)arg1 isShared:(char *)arg2;
+ (id)downloadWithID:(id)arg1 productID:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) SKPaymentTransaction *transaction;
- (void)setContentURL:(id)arg1;
- (void)setError:(id)arg1;
@property(readonly, nonatomic) double timeRemaining;
@property(readonly, copy, nonatomic) NSError *error;
- (void)setContentVersion:(id)arg1;
@property(readonly, copy, nonatomic) NSString *contentVersion;
- (void)setContentLength:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *contentLength;
- (void)setTimeRemaining:(double)arg1;
- (void)setProgress:(float)arg1;
@property(readonly, nonatomic) float progress;
- (id)assetID;
@property(readonly, nonatomic) NSURL *contentURL;
- (void)setState:(long long)arg1;
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) NSString *contentIdentifier;
- (id)initWithID:(id)arg1 productID:(id)arg2;
- (id)init;

@end
