//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol TSDHint;

__attribute__((visibility("hidden")))
@interface TNHintCacheEntry : NSObject
{
    id <TSDHint> mHint;
    _Bool mIsValid;
    struct CGPoint mOrigin;
}

@property struct CGPoint origin; // @synthesize origin=mOrigin;
@property(getter=isValid) _Bool valid; // @synthesize valid=mIsValid;
@property(retain) id <TSDHint> hint; // @synthesize hint=mHint;
- (void)dealloc;
- (id)initWithHint:(id)arg1 origin:(struct CGPoint)arg2;

@end

