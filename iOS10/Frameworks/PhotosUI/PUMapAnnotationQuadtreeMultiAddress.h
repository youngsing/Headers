//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUMapAnnotationQuadtreeAddress.h>

@class NSArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface PUMapAnnotationQuadtreeMultiAddress : PUMapAnnotationQuadtreeAddress
{
    NSMutableSet *_alternativeAddresses;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *alternativeAddresses;
- (void)addAlternativeAddress:(id)arg1;
- (id)initWithQuadtreeAddress:(id)arg1;

@end
