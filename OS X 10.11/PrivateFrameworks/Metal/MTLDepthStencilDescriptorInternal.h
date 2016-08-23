//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/MTLDepthStencilDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLDepthStencilDescriptorInternal : MTLDepthStencilDescriptor
{
    struct MTLDepthStencilDescriptorPrivate _private;
}

- (void)setLabel:(id)arg1;
- (id)label;
- (void)setBackFaceStencil:(id)arg1;
- (id)backFaceStencil;
- (void)setFrontFaceStencil:(id)arg1;
- (id)frontFaceStencil;
- (void)setDepthWriteEnabled:(BOOL)arg1;
- (BOOL)isDepthWriteEnabled;
- (void)setDepthCompareFunction:(unsigned long long)arg1;
- (unsigned long long)depthCompareFunction;
- (id)description;
@property(readonly) const struct MTLDepthStencilDescriptorPrivate *depthStencilPrivate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)init;

@end

