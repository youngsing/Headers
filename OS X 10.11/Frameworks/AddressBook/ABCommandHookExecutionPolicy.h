//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBook/ABCommandExecutionPolicy.h>

@protocol ABCommand;

__attribute__((visibility("hidden")))
@interface ABCommandHookExecutionPolicy : ABCommandExecutionPolicy
{
    id <ABCommand> _command;
}

- (void)runWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithCommand:(id)arg1;

@end

