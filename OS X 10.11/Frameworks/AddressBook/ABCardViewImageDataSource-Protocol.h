//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class ABCardViewImage, CNFuture, NSArray, NSDictionary, NSString;

@protocol ABCardViewImageDataSource <NSObject>
- (NSString *)accountTypeForImageIdentifier:(NSString *)arg1;
- (NSDictionary *)linkedLocalPhotoFuturesByIdentifier;
- (NSString *)identifierOfPersonPreferredForPhoto;
- (void)setPersonWithIdentifierPreferredForPhoto:(NSString *)arg1;
- (void)setImage:(ABCardViewImage *)arg1;
- (CNFuture *)remotePhotoFuture;
- (CNFuture *)localThumbnailPhotoFuture;
- (CNFuture *)localLargePhotoFuture;
- (NSString *)alternateImagePath;
- (void)setAlternateImagePath:(NSString *)arg1;
- (NSArray *)alternateImageIDs;
- (void)setAlternateImageIDs:(NSArray *)arg1;
@end

