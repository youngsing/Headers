//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSInputFeedbackPerformer-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSTrackpadFeedbackPerformer : NSObject <NSInputFeedbackPerformer>
{
}

- (void)_performFeedbackPattern:(long long)arg1;
- (void)performFeedbackPattern:(long long)arg1 forTimestamp:(double)arg2;
- (void)_performFeedbackPattern:(long long)arg1 when:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
