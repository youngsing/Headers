//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBook/ABCommand.h>

@class ABSearchElement, ABSmartGroup, NSString;

__attribute__((visibility("hidden")))
@interface ABEditSmartGroupCommand : ABCommand
{
    ABSmartGroup *_group;
    ABSearchElement *_element;
    NSString *_name;
    BOOL _hilights;
}

- (BOOL)doIt;
- (void)redoIt;
- (void)undoIt;
- (void)_swap;
- (void)finalize;
- (void)dealloc;
- (id)initWithSmartGroup:(id)arg1 name:(id)arg2 searchElement:(id)arg3 hilights:(BOOL)arg4 addressBook:(id)arg5;

@end

