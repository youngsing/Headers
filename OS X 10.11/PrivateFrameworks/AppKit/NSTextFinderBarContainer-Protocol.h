//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>

@class NSView;

@protocol NSTextFinderBarContainer <NSObject>
@property(getter=isFindBarVisible) BOOL findBarVisible;
@property(retain) NSView *findBarView;
- (void)findBarViewDidChangeHeight;

@optional
- (NSView *)contentView;
@end
