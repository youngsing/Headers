//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVContentPartnerKitUI/NSObject-Protocol.h>

@class NSData, NSDate, NSError, TVSSecureKeyLoader, TVSSecureKeyRequest;

@protocol TVSSecureKeyLoaderDelegate <NSObject>
- (void)secureKeyLoader:(TVSSecureKeyLoader *)arg1 didFailWithError:(NSError *)arg2 forRequest:(TVSSecureKeyRequest *)arg3;
- (void)secureKeyLoader:(TVSSecureKeyLoader *)arg1 didLoadKeyResponseData:(NSData *)arg2 renewalDate:(NSDate *)arg3 forRequest:(TVSSecureKeyRequest *)arg4;
- (void)secureKeyLoader:(TVSSecureKeyLoader *)arg1 didLoadContentIdentifierData:(NSData *)arg2 forRequest:(TVSSecureKeyRequest *)arg3;
- (void)secureKeyLoader:(TVSSecureKeyLoader *)arg1 didLoadCertificateData:(NSData *)arg2 forRequest:(TVSSecureKeyRequest *)arg3;
@end

