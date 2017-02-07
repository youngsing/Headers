//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUDisplayLocationProvider-Protocol.h>

@protocol UICoordinateSpace;

__attribute__((visibility("hidden")))
@interface PUDisplayLocationProvider : NSObject <PUDisplayLocationProvider>
{
    id <UICoordinateSpace> __coordinateSpace;
    struct CGPoint __point;
}

@property(readonly, nonatomic) id <UICoordinateSpace> _coordinateSpace; // @synthesize _coordinateSpace=__coordinateSpace;
@property(readonly, nonatomic) struct CGPoint _point; // @synthesize _point=__point;
- (void).cxx_destruct;
- (struct CGPoint)locationInView:(id)arg1;
- (id)initWithPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (id)init;

@end
