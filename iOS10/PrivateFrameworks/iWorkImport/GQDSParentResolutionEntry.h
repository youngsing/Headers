//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GQDSStyle;

__attribute__((visibility("hidden")))
@interface GQDSParentResolutionEntry : NSObject
{
    char *mParentIdentifier;
    GQDSStyle *mStyle;
}

- (const char *)parentIdentifier;
- (id)style;
- (void)dealloc;
- (id)initWithStyle:(id)arg1 parentIdentifier:(const char *)arg2;

@end

