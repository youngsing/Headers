//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol FCNonDestructivePrivateDataActionProvider;

@interface FCNonDestructivePrivateDataMigrationHandler : NSObject
{
    _Bool _privateDataSyncingEnabled;
    id <FCNonDestructivePrivateDataActionProvider> _privateDataActionProvider;
    NSArray *_privateZoneControllers;
}

@property(nonatomic, getter=isPrivateDataSyncingEnabled) _Bool privateDataSyncingEnabled; // @synthesize privateDataSyncingEnabled=_privateDataSyncingEnabled;
@property(copy, nonatomic) NSArray *privateZoneControllers; // @synthesize privateZoneControllers=_privateZoneControllers;
@property(retain, nonatomic) id <FCNonDestructivePrivateDataActionProvider> privateDataActionProvider; // @synthesize privateDataActionProvider=_privateDataActionProvider;
- (void).cxx_destruct;
- (void)handleMigration;
- (id)initWithPrivateDataActionProvider:(id)arg1 privateZoneControllers:(id)arg2 privateDataSyncingEnabled:(_Bool)arg3;
- (id)init;

@end

