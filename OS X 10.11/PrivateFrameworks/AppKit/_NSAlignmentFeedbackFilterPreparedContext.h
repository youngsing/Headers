//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSAlignmentFeedbackToken-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSAlignmentFeedbackFilterPreparedContext : NSObject <NSAlignmentFeedbackToken>
{
    double _timestamp;
    struct {
        unsigned int hasX:1;
        unsigned int hasY:1;
        unsigned int hasSignificantXAlignment:1;
        unsigned int hasSignificantYAlignment:1;
        unsigned int padding:28;
    } _flags;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

