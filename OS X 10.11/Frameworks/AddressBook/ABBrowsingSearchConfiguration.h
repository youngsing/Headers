//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBook/ABPersonSearchConfiguration.h>

@class ABAddressBook;
@protocol ABPersonListHeadlining;

@interface ABBrowsingSearchConfiguration : ABPersonSearchConfiguration
{
    ABAddressBook *_addressBook;
    id <ABPersonListHeadlining> _headliner;
}

@property(retain) id <ABPersonListHeadlining> headliner; // @synthesize headliner=_headliner;
@property(retain) ABAddressBook *addressBook; // @synthesize addressBook=_addressBook;
- (void)incrementSearchCount;
- (void)searchForString:(id)arg1;
- (void)configurePersonList:(id)arg1 forBrowsingAccount:(id)arg2 group:(id)arg3;
- (BOOL)shouldUnifyPeople;
- (void)configureForBrowsingAccount:(id)arg1 group:(id)arg2;
- (void)dealloc;
- (id)initWithController:(id)arg1;

@end
