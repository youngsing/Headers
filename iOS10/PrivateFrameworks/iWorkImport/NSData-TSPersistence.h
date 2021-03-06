//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

#import <iWorkImport/TSPSplitableData-Protocol.h>

@interface NSData (TSPersistence) <TSPSplitableData>
+ (id)tsp_dataFromDispatchData:(id)arg1;
+ (id)tsp_dataWithContentsOfURL:(id)arg1 decryptionKey:(id)arg2;
- (void)tsp_splitDataWithMaxSize:(unsigned long long)arg1 subdataHandlerBlock:(CDUnknownBlockType)arg2;
- (id)tsp_dispatchDataWithApplier:(CDUnknownBlockType)arg1;
- (id)tsp_dispatchData;
- (_Bool)tsp_writeToURL:(id)arg1 encryptionKey:(id)arg2;
@end

