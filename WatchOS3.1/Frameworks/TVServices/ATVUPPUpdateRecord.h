//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TVSBookmarkKey, TVSUniversalPlaybackPositionRecord;

__attribute__((visibility("hidden")))
@interface ATVUPPUpdateRecord : NSObject
{
    TVSBookmarkKey *_bookmarkKey;
    TVSUniversalPlaybackPositionRecord *_uppRecord;
}

@property(retain, nonatomic) TVSUniversalPlaybackPositionRecord *uppRecord; // @synthesize uppRecord=_uppRecord;
@property(retain, nonatomic) TVSBookmarkKey *bookmarkKey; // @synthesize bookmarkKey=_bookmarkKey;
- (void).cxx_destruct;

@end

