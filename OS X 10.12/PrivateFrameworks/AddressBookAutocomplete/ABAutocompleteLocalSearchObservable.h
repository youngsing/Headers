//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

#import <AddressBookAutocomplete/ABAutocompleteSearchObservable-Protocol.h>

@class ABAddressBook, ABCNContactStore, CNAutocompleteFetchRequest, CNAutocompleteResultTracing, CNCancelationToken, NSString;
@protocol CNScheduler;

@interface ABAutocompleteLocalSearchObservable : CNObservable <ABAutocompleteSearchObservable>
{
    CNAutocompleteFetchRequest *_fetchRequest;
    id <CNScheduler> _scheduler;
    ABCNContactStore *_contactStore;
    ABAddressBook *_addressBook;
    CNAutocompleteResultTracing *_tracer;
    CNCancelationToken *_cancelationToken;
}

+ (id)observableWithFetchRequest:(id)arg1 scheduler:(id)arg2 contactStore:(id)arg3 addressBook:(id)arg4;
+ (id)observableWithFetchRequest:(id)arg1 scheduler:(id)arg2;
@property(readonly, nonatomic) CNCancelationToken *cancelationToken; // @synthesize cancelationToken=_cancelationToken;
@property(retain) CNAutocompleteResultTracing *tracer; // @synthesize tracer=_tracer;
- (void).cxx_destruct;
- (id)smartgroupsForRequest:(id)arg1 addressBook:(id)arg2;
- (id)groupsForRequest:(id)arg1 contactStore:(id)arg2;
- (id)peopleForRequest:(id)arg1 contactStore:(id)arg2;
- (id)executeRequest:(id)arg1 error:(id *)arg2;
- (id)subscribe:(id)arg1;
- (id)initWithFetchRequest:(id)arg1 scheduler:(id)arg2 contactStore:(id)arg3 addressBook:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
