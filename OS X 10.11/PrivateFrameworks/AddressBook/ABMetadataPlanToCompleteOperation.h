//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBook/ABMetadataOperation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface ABMetadataPlanToCompleteOperation : ABMetadataOperation
{
    NSArray *_uniqueIds;
    int _jobType;
}

- (void)main;
- (void)dealloc;
- (int)metadataJobType;
- (id)initWithMetadataManager:(id)arg1 recordUniqueIds:(id)arg2 jobType:(int)arg3;

@end
