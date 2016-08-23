//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSMenuItem.h>

@interface _NSNavNodeMenuItem : NSMenuItem
{
    BOOL _representedObjectIsObservedNode;
}

- (void)dealloc;
- (void)setRepresentedObject:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingNode;
- (void)startObservingNode;
- (void)_setIconRef:(struct OpaqueIconRef *)arg1;
- (id)initWithTitle:(id)arg1 action:(SEL)arg2 keyEquivalent:(id)arg3 representedNavNode:(id)arg4;

@end

