//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSView;

@interface OSADictionaryHistoryItem : NSObject
{
    NSArray *_selectedObjects;
    NSView *_selectedView;
    NSString *_selectedPath;
}

- (void)setSelectedPath:(id)arg1;
- (id)selectedPath;
- (void)setSelectedView:(id)arg1;
- (id)selectedView;
- (void)setSelectedObjects:(id)arg1;
- (id)selectedObjects;
- (void)dealloc;
- (id)initWithSelectedObjects:(id)arg1 inView:(id)arg2;

@end

