//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface NSTypeSelectPanel : NSPanel
{
    NSTextField *_currentSeachTextField;
}

- (void)setCurrentSearchScreenRect:(struct CGRect)arg1;
@property(copy) NSString *currentSearch; // @dynamic currentSearch;
- (void)_ensureCurrentSearchTextField;
- (void)dealloc;
- (id)init;

@end

