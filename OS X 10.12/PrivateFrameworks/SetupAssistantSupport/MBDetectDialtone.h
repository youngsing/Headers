//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface MBDetectDialtone : NSObject
{
    NSDictionary *_defaultModem;
    NSMutableDictionary *_cclsForPorts;
}

+ (int)detectDialtoneOnPort:(id)arg1;
+ (id)getDefaultCCL:(char *)arg1 forPort:(id)arg2;
+ (id)getDefaultCCL:(char *)arg1;
+ (id)getDefaultPortInfo;
+ (void)startDialtoneDetection;
+ (id)defaultDetector;
- (id)getDefaultCCL:(char *)arg1 forPort:(id)arg2;
- (id)getDefaultPortInfo;
- (void)setDefaultPortInfo:(id)arg1;
- (id)getDefaultCCLForPort:(id)arg1;
- (void)detectDialtone;
- (void)startDialtoneDetection;
- (id)init;

@end

