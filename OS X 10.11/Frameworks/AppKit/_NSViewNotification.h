//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSNotification.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSViewNotification : NSNotification
{
    id _object;
    NSString *_name;
}

- (void)dealloc;
- (id)userInfo;
@property(retain) id object; // @dynamic object;
- (id)initWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (id)name;
- (void)setName:(id)arg1;

@end

