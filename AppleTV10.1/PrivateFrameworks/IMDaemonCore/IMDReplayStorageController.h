//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IDSKVStore, NSString;

@interface IMDReplayStorageController : NSObject
{
    NSString *_filePath;
    IDSKVStore *_store;
}

@property(retain, nonatomic) IDSKVStore *store; // @synthesize store=_store;
@property(readonly, retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void)dealloc;
- (void)deleteReplayDB;
- (id)copyNextBatchWithSize:(unsigned long long)arg1 iterationContext:(id *)arg2;
- (_Bool)storeDictionary:(id)arg1 error:(id *)arg2;
- (id)initWithFilePath:(id)arg1;

@end

