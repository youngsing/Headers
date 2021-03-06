//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GameCenterPrivateUI/NSCopying-Protocol.h>

@class NSMutableDictionary, NSString;

@interface GKGridLayoutMetrics : NSObject <NSCopying>
{
    NSMutableDictionary *_keyToMetrics;
    NSMutableDictionary *_locationToKeyList;
    NSString *_layoutKey;
}

+ (id)metrics;
@property(retain, nonatomic) NSString *layoutKey; // @synthesize layoutKey=_layoutKey;
@property(retain, nonatomic) NSMutableDictionary *locationToKeyList; // @synthesize locationToKeyList=_locationToKeyList;
@property(retain, nonatomic) NSMutableDictionary *keyToMetrics; // @synthesize keyToMetrics=_keyToMetrics;
- (void)configureCollectionView:(id)arg1;
- (void)removeSupplementaryMetricsForKey:(id)arg1;
- (void)replaceSupplementaryMetrics:(id)arg1 forKey:(id)arg2;
- (id)supplementaryMetricsForKey:(id)arg1;
- (void)mergeSupplementaryMetricsFromEnclosingMetrics:(id)arg1 atLocation:(unsigned long long)arg2 globalRange:(struct _NSRange)arg3;
- (void)addSupplementaryMetrics:(id)arg1 forKey:(id)arg2 atLocation:(unsigned long long)arg3;
- (void)insertSupplementaryMetrics:(id)arg1 forKey:(id)arg2 atLocation:(unsigned long long)arg3;
- (id)listForLocation:(unsigned long long)arg1;
- (id)keyListForLocation:(unsigned long long)arg1;
- (void)enumerateSupplementaryMetricsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSupplementaryLocations:(CDUnknownBlockType)arg1;
- (id)_gkDescription;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)description;
- (id)localDescription;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)prepareLayout:(id)arg1 startingAtSection:(long long)arg2;

@end

