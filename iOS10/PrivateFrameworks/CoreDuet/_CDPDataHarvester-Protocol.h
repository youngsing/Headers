//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDuet/NSObject-Protocol.h>

@protocol _CDPDataHarvester <NSObject>
- (void)loadWithLimit:(unsigned long long)arg1 dataPointReader:(void (^)(id <_CDPDataPoint>))arg2 completion:(void (^)(void))arg3;
@end
