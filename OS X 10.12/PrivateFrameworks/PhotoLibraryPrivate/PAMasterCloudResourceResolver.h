//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryPrivate/PACloudResourceResolver.h>

@class NSDictionary;

@interface PAMasterCloudResourceResolver : PACloudResourceResolver
{
    BOOL _shouldWaitForMissingResources;
    NSDictionary *_cloudResourcesByIdentifier;
}

- (void).cxx_destruct;
- (BOOL)shouldWaitForMissingResources;
- (void)enumerateCloudResourcesForVersion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)prepareForVersions:(id)arg1;

@end
