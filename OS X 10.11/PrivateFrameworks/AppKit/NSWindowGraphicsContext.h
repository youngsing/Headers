//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSCGSContext.h>

@interface NSWindowGraphicsContext : NSCGSContext
{
    unsigned int _cgsWindowID;
}

- (BOOL)isDrawingToScreen;
- (unsigned int)windowID;
- (id)attributes;
- (id)initWithWindow:(id)arg1;
- (id)_initWithWindowNumber:(long long)arg1;
- (id)_initWithWindowNumber:(long long)arg1 useCoreAnimation:(BOOL)arg2;

@end

