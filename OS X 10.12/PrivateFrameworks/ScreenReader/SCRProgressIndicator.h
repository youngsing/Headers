//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenReader/SCRElement.h>

__attribute__((visibility("hidden")))
@interface SCRProgressIndicator : SCRElement
{
    double _lastValueChangedTime;
}

- (BOOL)_isBusyIndicator;
- (id)typeDescription;
- (id)statusDescriptionWithOptionsMask:(int)arg1;
- (id)maxValue;
- (id)minValue;
- (double)_percentValue;
- (void)echoValueChangeToRequest:(id)arg1;
- (BOOL)canHandleValueChange;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;

@end

