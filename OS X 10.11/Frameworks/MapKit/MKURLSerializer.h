//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MKURLSerializer : NSObject
{
}

+ (id)stringForDirectionsType:(unsigned long long)arg1;
+ (id)stringForMapType:(unsigned long long)arg1;
- (id)mapItemsFromUrl:(id)arg1 options:(id *)arg2;
- (id)urlForDirectionsFromMapItem:(id)arg1 toMapItem:(id)arg2 transportType:(unsigned long long)arg3 options:(id)arg4;
- (id)urlForOpeningMapItems:(id)arg1 options:(id)arg2;

@end

