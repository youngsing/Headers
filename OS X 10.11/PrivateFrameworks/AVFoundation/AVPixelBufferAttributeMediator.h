//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AVPixelBufferAttributeMediator : NSObject
{
    struct OpaqueVTPixelBufferAttributesMediator *_mediator;
}

- (id)mediatedPixelBufferAttributes;
- (void)setLayersAreSuppressed:(BOOL)arg1;
- (void)removeRequestedPixelBufferAttributesAttributesForKey:(id)arg1;
- (void)setRequestedPixelBufferAttributes:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (void)finalize;
- (id)init;

@end

