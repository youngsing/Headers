//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSScrubberItemView, NSScrubberLayoutAttributes;

__attribute__((visibility("hidden")))
@interface NSScrubberChangeTransition : NSObject
{
    NSScrubberItemView *_view;
    NSScrubberLayoutAttributes *_fromAttr;
    NSScrubberLayoutAttributes *_toAttr;
}

@property(retain) NSScrubberItemView *view; // @synthesize view=_view;
@property(retain) NSScrubberLayoutAttributes *toAttr; // @synthesize toAttr=_toAttr;
@property(retain) NSScrubberLayoutAttributes *fromAttr; // @synthesize fromAttr=_fromAttr;
- (void)dealloc;
- (id)initWithView:(id)arg1;

@end

