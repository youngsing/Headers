//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSIDQueryController;

@interface CNUIIDSIDQueryControllerWrapper : NSObject
{
    IDSIDQueryController *_controller;
}

+ (id)defaultInstance;
@property(readonly, nonatomic) IDSIDQueryController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (_Bool)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)initWithController:(id)arg1;

@end

