//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSSecureCoding-Protocol.h>

@class NTKPhotoAnalysis;

@interface NTKPhotoAnalysisCacheEntry : NSObject <NSSecureCoding>
{
    NTKPhotoAnalysis *_analysis;
    int _sequenceNumber;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) NTKPhotoAnalysis *analysis; // @synthesize analysis=_analysis;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

