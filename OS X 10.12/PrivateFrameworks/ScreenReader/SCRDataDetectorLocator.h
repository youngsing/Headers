//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCRUIElement;

__attribute__((visibility("hidden")))
@interface SCRDataDetectorLocator : NSObject
{
    SCRUIElement *__uiElement;
}

@property(readonly, retain, nonatomic) SCRUIElement *_uiElement; // @synthesize _uiElement=__uiElement;
- (id)_dataDetectorItemOutputWithType:(id)arg1;
- (id)_dataDetectorTypeAtPoint:(struct CGPoint)arg1;
- (BOOL)openDataDetectorMenuAtPoint:(struct CGPoint)arg1;
- (id)outputForDataDetectorItemsAtPoint:(struct CGPoint)arg1;
- (BOOL)dataDetectorExistsAtPoint:(struct CGPoint)arg1;
- (void)dealloc;
- (id)initWithUIElement:(id)arg1;

@end

