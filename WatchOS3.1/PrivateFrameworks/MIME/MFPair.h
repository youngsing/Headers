//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MFPair : NSObject
{
    id _first;
    id _second;
}

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;
@property(readonly, nonatomic) id second; // @synthesize second=_second;
@property(readonly, nonatomic) id first; // @synthesize first=_first;
- (id)description;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (void)dealloc;

@end

