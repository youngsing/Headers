//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProKit/NSProWindowAnimation.h>

__attribute__((visibility("hidden")))
@interface NSProWindowZoomAnimation : NSProWindowAnimation
{
    struct CGRect _frame;
    struct {
        unsigned int _direction:1;
        unsigned int _unused:31;
    } _flags;
}

@property struct CGRect frame; // @synthesize frame=_frame;
- (void)setCurrentProgress:(float)arg1;
@property long long direction;
- (id)initWithWindow:(id)arg1 direction:(long long)arg2 frame:(struct CGRect)arg3;

@end

