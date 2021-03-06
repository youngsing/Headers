//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDirectoryEnumerator, NSMutableDictionary, NSURL, SMSystem_Daemon;
@protocol SMPathEnumerationProtocol;

@interface SMPathsUserHomeScanner : NSObject
{
    unsigned long long sizeOfMiscUserHomeContents;
    _Bool _shallowScanOnly;
    NSArray *_updateClients;
    NSURL *_path;
    SMSystem_Daemon *_system;
    NSMutableDictionary *_topLevelPathToSizeMap;
    NSMutableDictionary *_preflightPathToSizeMap;
}

@property(retain) NSMutableDictionary *preflightPathToSizeMap; // @synthesize preflightPathToSizeMap=_preflightPathToSizeMap;
@property(retain) NSMutableDictionary *topLevelPathToSizeMap; // @synthesize topLevelPathToSizeMap=_topLevelPathToSizeMap;
@property __weak SMSystem_Daemon *system; // @synthesize system=_system;
@property(retain) NSURL *path; // @synthesize path=_path;
@property __weak NSArray *updateClients; // @synthesize updateClients=_updateClients;
@property _Bool shallowScanOnly; // @synthesize shallowScanOnly=_shallowScanOnly;
- (void).cxx_destruct;
- (void)processUserHome;
- (unsigned long long)sizeOfDirectory:(id)arg1;
@property(readonly) NSDirectoryEnumerator<SMPathEnumerationProtocol> *allFilesEnumerator;
@property(readonly) NSArray *allTopLevelContents;
- (id)initWithRelativeHomePath:(id)arg1 onSystem:(id)arg2;

@end

