//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSData, NSError, NSNumber, PKPaymentHeroImageController;

@protocol PKPaymentHeroImageControllerDelegate <NSObject>
- (void)heroImageController:(PKPaymentHeroImageController *)arg1 didFinishDownloadingImageData:(NSData *)arg2 forNetwork:(NSNumber *)arg3 error:(NSError *)arg4;
@end

