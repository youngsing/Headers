//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABMonogrammer, NSArray;

@interface HUContactManager : NSObject
{
    NSArray *_allPeople;
    ABMonogrammer *_monogrammer;
    double _monogramDiameter;
}

+ (id)sharedManager;
@property(nonatomic) double monogramDiameter; // @synthesize monogramDiameter=_monogramDiameter;
@property(retain, nonatomic) ABMonogrammer *monogrammer; // @synthesize monogrammer=_monogrammer;
@property(retain, nonatomic) NSArray *allPeople; // @synthesize allPeople=_allPeople;
- (void).cxx_destruct;
- (id)userDataFromEmail:(id)arg1 monogramDiameter:(double)arg2;

@end

