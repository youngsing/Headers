//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IKAppContext, JSManagedValue;

@interface MusicJSManagedObject : NSObject
{
    IKAppContext *_appContext;
    JSManagedValue *_managedValue;
    id _object;
    id _owner;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id owner;
@property(readonly, nonatomic) id object;
@property(readonly, nonatomic) __weak IKAppContext *appContext;
- (void)dealloc;
- (id)initWithObject:(id)arg1 owner:(id)arg2 appContext:(id)arg3;
- (id)init;

@end
