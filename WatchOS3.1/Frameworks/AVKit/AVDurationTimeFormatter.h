//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSDateComponentsFormatter;

__attribute__((visibility("hidden")))
@interface AVDurationTimeFormatter : NSFormatter
{
    NSDateComponentsFormatter *_longerFormatter;
    NSDateComponentsFormatter *_shorterFormatter;
}

@property(readonly) NSDateComponentsFormatter *shorterFormatter; // @synthesize shorterFormatter=_shorterFormatter;
@property(readonly) NSDateComponentsFormatter *longerFormatter; // @synthesize longerFormatter=_longerFormatter;
- (void).cxx_destruct;
- (id)stringForTimeInterval:(double)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)init;

@end
