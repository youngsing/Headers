//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DFramebuffer : NSObject
{
    struct FramebufferAttributes mFramebufferAttributes;
}

+ (id)framebufferWithFramebufferAttributes:(const struct FramebufferAttributes *)arg1;
- (id).cxx_construct;
- (const struct FramebufferAttributes *)framebufferAttributes;
- (id)initWithFramebufferAttributes:(const struct FramebufferAttributes *)arg1;

@end
