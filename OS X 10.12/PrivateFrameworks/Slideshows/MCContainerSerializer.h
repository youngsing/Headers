//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Slideshows/MCContainer.h>

@class NSArray, NSDictionary, NSMutableSet, NSSet, NSString;

@interface MCContainerSerializer : MCContainer
{
    NSMutableSet *mPlugs;
    NSArray *mCachedOrderedPlugs;
    double mCachedDuration;
    NSString *_initialTransitionID;
    double _initialTransitionDuration;
    NSDictionary *_initialTransitionAttributes;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(copy) NSDictionary *initialTransitionAttributes; // @synthesize initialTransitionAttributes=_initialTransitionAttributes;
@property(nonatomic) double initialTransitionDuration; // @synthesize initialTransitionDuration=_initialTransitionDuration;
@property(copy) NSString *initialTransitionID; // @synthesize initialTransitionID=_initialTransitionID;
- (double)timeInForPlug:(id)arg1;
@property(readonly) NSArray *orderedPlugs;
- (void)removeAllPlugs;
- (void)movePlugsAtIndices:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)removePlugsAtIndices:(id)arg1;
- (id)insertPlugsForContainers:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)insertPlugForContainer:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)addPlugsForContainers:(id)arg1;
- (id)addPlugForContainer:(id)arg1;
- (id)plugAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long countOfPlugs;
@property(readonly) NSSet *plugs;
@property(readonly) double duration;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)xmlElement;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1 andMontage:(id)arg2;
- (id)init;

@end
