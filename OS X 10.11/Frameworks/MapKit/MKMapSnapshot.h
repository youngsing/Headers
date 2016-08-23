//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, VKMapSnapshot;

@interface MKMapSnapshot : NSObject
{
    VKMapSnapshot *_snapshot;
    NSImage *_image;
}

@property(readonly, nonatomic) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (BOOL)_hasNoDataPlaceholders;
- (struct CLLocationCoordinate2D)_coordinateForPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointForCoordinate:(struct CLLocationCoordinate2D)arg1;
- (id)_initWithLoDPISnapshot:(id)arg1 hiDPISnapshot:(id)arg2;
- (id)snapshotWithAnnotationView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)snapshotWithAnnotationView:(id)arg1 atCoordinate:(struct CLLocationCoordinate2D)arg2;

@end

