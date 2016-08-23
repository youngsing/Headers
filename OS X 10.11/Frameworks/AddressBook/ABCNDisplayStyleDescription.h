//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBook/ABCNPropertyDescription.h>

#import <AddressBook/ABCNAbstractPropertyDescription-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ABCNDisplayStyleDescription : ABCNPropertyDescription <ABCNAbstractPropertyDescription>
{
}

- (id)flagsWithFlags:(id)arg1 displayStyle:(id)arg2;
- (id)displayStyleFromFlags:(id)arg1;
- (void)setValue:(id)arg1 onCoreDataContact:(id)arg2;
- (id)valueFromCoreDataContact:(id)arg1;
- (void)setValue:(id)arg1 onAddressBookPerson:(id)arg2;
- (id)valueFromAddressBookPerson:(id)arg1;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)copyFromContact:(id)arg1 to:(id)arg2;
- (BOOL)isEqualForContact:(id)arg1 other:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

