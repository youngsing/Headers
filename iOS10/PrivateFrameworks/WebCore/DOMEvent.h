//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebCore/DOMObject.h>

@class NSString;
@protocol DOMEventTarget;

@interface DOMEvent : DOMObject
{
}

- (void)stopImmediatePropagation;
- (void)initEvent:(id)arg1:(_Bool)arg2:(_Bool)arg3;
- (void)initEvent:(id)arg1 canBubbleArg:(_Bool)arg2 cancelableArg:(_Bool)arg3;
- (void)preventDefault;
- (void)stopPropagation;
@property _Bool cancelBubble;
@property _Bool returnValue;
@property(readonly) id <DOMEventTarget> srcElement;
- (_Bool)isTrusted;
- (_Bool)defaultPrevented;
@property(readonly) unsigned long long timeStamp;
- (_Bool)composed;
@property(readonly) _Bool cancelable;
@property(readonly) _Bool bubbles;
@property(readonly) unsigned short eventPhase;
@property(readonly) id <DOMEventTarget> currentTarget;
@property(readonly) id <DOMEventTarget> target;
@property(readonly, copy) NSString *type;
- (void)dealloc;

@end

