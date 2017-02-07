//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenReaderCore/SCRCGestureFinger.h>

__attribute__((visibility("hidden")))
@interface SCRCGestureStylus : SCRCGestureFinger
{
    double _altitude;
    double _azimuth;
}

- (double)azimuth;
- (double)altitude;
- (unsigned long long)type;
- (double)pressure;
- (id)initWithIdentifier:(unsigned long long)arg1 location:(struct CGPoint)arg2 pressure:(double)arg3 altitude:(double)arg4 azimuth:(double)arg5;

@end
