//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PFDispatchQueue;

@interface LiSearchKitIndex : NSObject
{
    unsigned long long _updateCount;
    PFDispatchQueue *_serialQueue;
    long long _matchType;
    NSString *_baseTableName;
    NSString *_propertyName;
    struct __SKIndex *_searchKitIndex;
    NSString *_path;
}

+ (id)indexPathForTableName:(id)arg1 propertyName:(id)arg2 databasePath:(id)arg3;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) struct __SKIndex *searchKitIndex; // @synthesize searchKitIndex=_searchKitIndex;
@property(retain, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
@property(retain, nonatomic) NSString *baseTableName; // @synthesize baseTableName=_baseTableName;
@property(nonatomic) long long matchType; // @synthesize matchType=_matchType;
- (void).cxx_destruct;
- (id)tokensFromSearchString:(id)arg1 ignoreSubTokens:(BOOL)arg2;
- (id)tokensNoSerialFromSearchString:(id)arg1 ignoreSubTokens:(BOOL)arg2;
- (void)search:(id)arg1 forProperties:(id)arg2 andThen:(CDUnknownBlockType)arg3;
- (void)search:(id)arg1 propertyFilter:(id)arg2 limit:(long long)arg3 excludingModelIds:(id)arg4 andThen:(CDUnknownBlockType)arg5;
- (void)removeTextForModelId:(unsigned long long)arg1 propertyName:(id)arg2;
- (void)updateText:(id)arg1 forModelId:(unsigned long long)arg2 propertyName:(id)arg3;
- (void)dumpIndexFromDocument:(void *)arg1 toFd:(int)arg2;
- (void)autoflush;
- (void)flushIndex;
- (void *)newDocumentForModelId:(unsigned long long)arg1 property:(id)arg2;
- (void)close;
- (BOOL)createInMemory;
- (id)createOrOpenForDatabasePath:(id)arg1 created:(char *)arg2;
- (id)inferSearchKitErrorFromPath:(id)arg1;
- (id)initWithTable:(id)arg1 matchType:(long long)arg2 propertyName:(id)arg3;

@end

