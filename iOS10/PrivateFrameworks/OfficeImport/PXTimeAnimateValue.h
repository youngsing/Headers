//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PXTimeAnimateValue : NSObject
{
    id mVariant;
    _Bool mHasPercentTime;
    double mPercentTime;
    NSString *mFormula;
}

- (void)setFormula:(id)arg1;
- (id)formula;
- (void)setPercentTime:(double)arg1;
- (double)percentTime;
- (_Bool)hasPercentTime;
- (void)setVariant:(id)arg1;
- (id)variant;
- (void)dealloc;
- (id)init;

@end
