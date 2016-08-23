//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsFoundation/CNFuture.h>

@class ABAddressBook, ABPerson;

__attribute__((visibility("hidden")))
@interface ABCNPhotoFuture : CNFuture
{
    ABAddressBook *_addressBook;
    ABPerson *_person;
    long long _tag;
}

- (void)didCancel;
- (id)photoForImageData:(id)arg1;
- (void)start;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1 person:(id)arg2;

@end

