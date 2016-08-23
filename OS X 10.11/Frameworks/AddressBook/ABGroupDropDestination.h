//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAccount, ABAddressBook, ABGroup, ABRecordContext;

@interface ABGroupDropDestination : NSObject
{
    ABAddressBook *_addressBook;
    ABAccount *_account;
    ABRecordContext *_recordContext;
    ABGroup *_group;
    BOOL _acceptsOnlySearchResults;
}

@property(readonly) ABRecordContext *recordContext; // @synthesize recordContext=_recordContext;
@property(readonly) ABGroup *group; // @synthesize group=_group;
@property(readonly) ABAccount *account; // @synthesize account=_account;
@property(readonly) ABAddressBook *addressBook; // @synthesize addressBook=_addressBook;
- (id)description;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1 account:(id)arg2 group:(id)arg3;

@end
