//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenSharing/SSInputEvent.h>

@interface SSMouseEvent : SSInputEvent
{
    struct SSPoint mCoordinates;
    void *mReservedForInstanceVariablesMouse;
}

+ (id)mouseEventWithCoordinates:(struct SSPoint)arg1;
@property(readonly) struct SSPoint coordinates; // @synthesize coordinates=mCoordinates;
- (id)initWithCoordinates:(struct SSPoint)arg1;

@end

