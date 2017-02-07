//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FinderKit/FI_TLayer.h>

__attribute__((visibility("hidden")))
@interface FI_TInlineProgressBarLayer : FI_TLayer
{
    double _percentComplete;
    unsigned int _state;
    int _flatProgressVariant;
    _Bool _selected;
    long long _userInterfaceLayoutDirection;
}

+ (BOOL)needsDisplayForKey:(id)arg1;
@property long long userInterfaceLayoutDirection; // @synthesize userInterfaceLayoutDirection=_userInterfaceLayoutDirection;
@property _Bool selected; // @synthesize selected=_selected;
@property int flatProgressVariant; // @synthesize flatProgressVariant=_flatProgressVariant;
@property unsigned int state; // @synthesize state=_state;
@property double percentComplete; // @synthesize percentComplete=_percentComplete;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setPercentCompleteAnimated:(double)arg1;
- (id)initWithLayer:(id)arg1;
- (id)initVariant:(int)arg1;

@end
