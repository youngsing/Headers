//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class AVScrubberValueTransformer;

@protocol AVScrubberValueTransformerDelegate <NSObject>

@optional
- (double)scrubberValueTransformer:(AVScrubberValueTransformer *)arg1 reverseTransformedTimeInterval:(double)arg2;
- (double)scrubberValueTransformer:(AVScrubberValueTransformer *)arg1 transformedTimeInterval:(double)arg2;
- (BOOL)scrubberValueTransformerRequiresTransformation:(AVScrubberValueTransformer *)arg1;
@end

