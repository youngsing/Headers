//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray;

@interface _MKStackView : NSView
{
    NSArray *_stackConstraints;
    NSArray *_stackedSubviews;
}

@property(copy, nonatomic) NSArray *stackedSubviews; // @synthesize stackedSubviews=_stackedSubviews;
- (void).cxx_destruct;
- (void)updateConstraints;
- (BOOL)isFlipped;

@end

