//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSSecureCoding-Protocol.h>

@class UIImage;

@interface NTKComplicationNoContentImages : NSObject <NSSecureCoding>
{
    UIImage *_modularSmallImage;
    UIImage *_utilitarianSmallImage;
    UIImage *_circularSmallImage;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) UIImage *circularSmallImage; // @synthesize circularSmallImage=_circularSmallImage;
@property(retain, nonatomic) UIImage *utilitarianSmallImage; // @synthesize utilitarianSmallImage=_utilitarianSmallImage;
@property(retain, nonatomic) UIImage *modularSmallImage; // @synthesize modularSmallImage=_modularSmallImage;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

