//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICScannerFunctionalUnit, NSArray;

@interface ICScannerFeatureTemplateProps : NSObject
{
    int _numberOfTargets;
    NSArray *_targets;
    ICScannerFunctionalUnit *_fu;
}

@property ICScannerFunctionalUnit *fu; // @synthesize fu=_fu;
@property(retain) NSArray *targets; // @synthesize targets=_targets;
@property int numberOfTargets; // @synthesize numberOfTargets=_numberOfTargets;
- (void)finalize;
- (void)dealloc;

@end

