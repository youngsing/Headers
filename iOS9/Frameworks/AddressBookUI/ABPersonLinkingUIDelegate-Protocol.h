//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class ABPeoplePickerNavigationController, ABPersonViewController, ABUIPerson, NSString;

@protocol ABPersonLinkingUIDelegate
- (ABPeoplePickerNavigationController *)newPeoplePickerForLinking;
- (ABPersonViewController *)newPersonViewControllerForLinkedCardAtRow:(long long)arg1;
- (_Bool)shouldAllowLinkingPersonWithRecordID:(int)arg1;
- (_Bool)shouldAllowLinkingAnotherContact;
- (long long)numberOfLinkedCardRows;
- (NSString *)sourceNameForCardAtRow:(long long)arg1;
- (NSString *)personNameForCardAtRow:(long long)arg1;
- (_Bool)canUnlinkCardAtRow:(long long)arg1;
- (_Bool)manuallyUnlinkCardAtRow:(long long)arg1;
- (_Bool)manuallyLinkPerson:(ABUIPerson *)arg1;
@end

