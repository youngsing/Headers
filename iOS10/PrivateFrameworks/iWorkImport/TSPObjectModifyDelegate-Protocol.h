//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class TSPObject;

@protocol TSPObjectModifyDelegate <NSObject>
- (void)willModifyObject:(TSPObject *)arg1 duringReadOperation:(_Bool)arg2 shouldCaptureSnapshot:(_Bool)arg3;
- (unsigned long long)objectTargetType;
@end

