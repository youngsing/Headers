//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (TVServices)
- (id)tvs_SHA256Digest;
- (id)tvs_SHA1Digest;
- (id)tvs_MD5Digest;
- (id)tvs_dataByDeflatingWithGzip;
- (id)tvs_dataByInflatingWithGZip;
- (id)tvs_AES256DecryptWithKey:(id)arg1;
- (id)tvs_AES256EncryptWithKey:(id)arg1;
- (id)tvs_uppercaseHexString;
- (id)tvs_lowercaseHexString;
@end
