//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/MTLStencilDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLStencilDescriptorInternal : MTLStencilDescriptor
{
    struct MTLStencilDescriptorPrivate _private;
}

- (void)setWriteMask:(unsigned int)arg1;
- (unsigned int)writeMask;
- (void)setReadMask:(unsigned int)arg1;
- (unsigned int)readMask;
- (void)setDepthStencilPassOperation:(unsigned long long)arg1;
- (unsigned long long)depthStencilPassOperation;
- (void)setDepthFailureOperation:(unsigned long long)arg1;
- (unsigned long long)depthFailureOperation;
- (void)setStencilFailureOperation:(unsigned long long)arg1;
- (unsigned long long)stencilFailureOperation;
- (void)setStencilCompareFunction:(unsigned long long)arg1;
- (unsigned long long)stencilCompareFunction;
- (id)description;
@property(readonly) const struct MTLStencilDescriptorPrivate *stencilPrivate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;

@end

