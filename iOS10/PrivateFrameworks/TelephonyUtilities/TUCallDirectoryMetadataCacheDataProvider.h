//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyUtilities/TUMetadataCacheDataProvider.h>

@class CXCallDirectoryManager;

@interface TUCallDirectoryMetadataCacheDataProvider : TUMetadataCacheDataProvider
{
    CXCallDirectoryManager *_callDirectoryManager;
}

@property(retain, nonatomic) CXCallDirectoryManager *callDirectoryManager; // @synthesize callDirectoryManager=_callDirectoryManager;
- (void).cxx_destruct;
- (void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2;
- (id)init;

@end
