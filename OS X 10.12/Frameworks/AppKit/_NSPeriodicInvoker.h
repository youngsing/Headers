//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _NSPeriodicInvoker : NSObject
{
    BOOL _cancelled;
    char *_enabled;
    CDUnknownBlockType _delay;
    CDUnknownBlockType _work;
    CDUnknownBlockType _helper;
}

- (void)dealloc;
- (void)cancel;
- (void)setWorkBlock:(CDUnknownBlockType)arg1;
- (void)setDelayFunction:(CDUnknownBlockType)arg1;

@end

