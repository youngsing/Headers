//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OADGraphicProperties.h>

@class OADImageFill;

__attribute__((visibility("hidden")))
@interface OADImageProperties : OADGraphicProperties
{
    OADImageFill *mImageFill;
}

+ (id)defaultProperties;
- (id)description;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)hasImageFill;
- (void)setImageFill:(id)arg1;
- (id)imageFill;
- (void)dealloc;

@end
