//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCFetchOperation.h>

@class NSArray;

@interface FCAssetsFetchOperation : FCFetchOperation
{
    NSArray *_assetHandles;
}

@property(copy, nonatomic) NSArray *assetHandles; // @synthesize assetHandles=_assetHandles;
- (void).cxx_destruct;
- (void)performOperation;
- (id)initWithAssetHandle:(id)arg1;
- (id)initWithAssetHandles:(id)arg1;

@end
