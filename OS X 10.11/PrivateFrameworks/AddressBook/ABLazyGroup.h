//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAddressBook, NSString;

__attribute__((visibility("hidden")))
@interface ABLazyGroup : NSObject
{
    ABAddressBook *_addressBook;
    NSString *_groupUid;
}

- (id)uniqueId;
- (id)group;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1 groupUid:(id)arg2;
- (id)initWithAddressBook:(id)arg1 group:(id)arg2;

@end

