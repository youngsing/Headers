//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SMPathGroups : NSObject
{
}

+ (void)updatePreliminaryGroupSizeDelegates:(id)arg1 fromPather:(id)arg2;
+ (id)applicationGroupBundlesToLocalizeFromPather:(id)arg1;
+ (unsigned long long)preliminaryCountForGrouping:(unsigned long long)arg1 fromPather:(id)arg2;
+ (unsigned long long)preliminarySizeOfGrouping:(unsigned long long)arg1 fromPather:(id)arg2;
+ (void)sizeOfGrouping:(unsigned long long)arg1 fromPather:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
+ (unsigned long long)sizeOfGrouping:(unsigned long long)arg1 fromPather:(id)arg2;
+ (id)coalescedPathsForGrouping:(unsigned long long)arg1 fromPather:(id)arg2;
+ (id)preflightActionsForGrouping:(unsigned long long)arg1 fromPather:(id)arg2 excludePaths:(id)arg3;
+ (id)preflightActionsForGrouping:(unsigned long long)arg1 fromPather:(id)arg2;
+ (id)copiersForGrouping:(unsigned long long)arg1 fromPather:(id)arg2;

@end
