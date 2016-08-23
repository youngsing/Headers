//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSPersistentStoreAsynchronousResult.h>

@class NSArray, NSAsynchronousFetchRequest;

@interface NSAsynchronousFetchResult : NSPersistentStoreAsynchronousResult
{
    NSAsynchronousFetchRequest *_fetchRequest;
    NSArray *_finalResult;
    id _intermediateResultCallback;
}

@property(copy) CDUnknownBlockType intermediateResultCallback; // @synthesize intermediateResultCallback=_intermediateResultCallback;
@property(retain) NSArray *finalResult; // @synthesize finalResult=_finalResult;
@property(readonly) NSAsynchronousFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
- (void)dealloc;
- (id)initForFetchRequest:(id)arg1 withContext:(id)arg2 andProgress:(id)arg3 completetionBlock:(CDUnknownBlockType)arg4;

@end

