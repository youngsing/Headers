//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVPlaybackProgress : NSObject
{
    NSString *_firstTitle;
    NSString *_currentTitle;
    NSString *_lastTitle;
    double _progress;
}

@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSString *lastTitle; // @synthesize lastTitle=_lastTitle;
@property(copy, nonatomic) NSString *currentTitle; // @synthesize currentTitle=_currentTitle;
@property(copy, nonatomic) NSString *firstTitle; // @synthesize firstTitle=_firstTitle;
- (void).cxx_destruct;
- (id)init;

@end
