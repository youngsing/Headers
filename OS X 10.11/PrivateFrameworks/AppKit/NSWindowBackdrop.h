//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSWindowBackdrop : NSObject
{
    struct CGSWindowBackdrop *_backdrop;
    long long _windowNumber;
    struct CGRect _rect;
    unsigned long long _level;
    NSString *_materialTypeName;
    NSString *_vibrancyEffectName;
    BOOL _active;
    float _saturation;
}

@property float saturation; // @synthesize saturation=_saturation;
@property(readonly) NSString *vibrancyEffectName; // @synthesize vibrancyEffectName=_vibrancyEffectName;
@property BOOL active; // @synthesize active=_active;
@property(readonly, copy) NSString *materialTypeName; // @synthesize materialTypeName=_materialTypeName;
- (void)invalidate;
@property(readonly) unsigned long long level;
@property(readonly) struct CGRect rect;
@property(readonly) long long windowNumber;
- (id)description;
- (id)initWithWindowNumber:(long long)arg1 rect:(struct CGRect)arg2 level:(unsigned long long)arg3 materialTypeName:(id)arg4 vibrancyEffectName:(id)arg5 active:(BOOL)arg6;
- (void)finalize;
- (void)dealloc;

@end

