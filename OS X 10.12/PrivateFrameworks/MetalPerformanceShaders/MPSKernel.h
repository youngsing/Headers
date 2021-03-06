//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetalPerformanceShaders/NSCopying-Protocol.h>

@class NSString;
@protocol MTLDevice;

@interface MPSKernel : NSObject <NSCopying>
{
    unsigned long long _options;
    struct MPSDevice *_device;
    struct MPSLibrary *_library;
    NSString *_label;
    unsigned long long _allowedOptions;
    unsigned int _tuningParams;
    unsigned int _maxTuningParams;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(readonly, nonatomic) unsigned int maxKernelTuningParams; // @synthesize maxKernelTuningParams=_maxTuningParams;
@property(nonatomic) unsigned int kernelTuningParams; // @synthesize kernelTuningParams=_tuningParams;
@property(copy) NSString *label; // @synthesize label=_label;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDevice:(id)arg1;
@property(readonly, retain, nonatomic) id <MTLDevice> device;
- (void)dealloc;
- (id)init;

@end

