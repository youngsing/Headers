//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABCNContactStore;

@interface ABCNContactPhotoStore : NSObject
{
    ABCNContactStore *_contactStore;
}

+ (id)remotePhotoStoreWithContactStore:(id)arg1;
+ (id)uncroppedPhotoStoreWithContactStore:(id)arg1;
+ (id)thumbnailPhotoStoreWithContactStore:(id)arg1;
- (id)imagePathForPerson:(id)arg1;
- (id)imageLoadRequestWithPerson:(id)arg1 meIdentifier:(id)arg2;
- (id)chainedPhotoFutureWithPeople:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)photoFutureWithPerson:(id)arg1 meIdentifier:(id)arg2 alternateImageIdentifiers:(id)arg3 alternateImagePath:(id)arg4;
- (id)taskForImageLoadRequest:(id)arg1;
- (id)photoFutureWithPerson:(id)arg1 meIdentifier:(id)arg2;
- (id)photoFutureWithPeople:(id)arg1 alternateImageIdentifiers:(id)arg2 alternateImagePath:(id)arg3;
- (id)photoFutureWithPeople:(id)arg1;
- (id)photoForPeople:(id)arg1;
- (void)dealloc;
- (id)initWithContactStore:(id)arg1;

@end

