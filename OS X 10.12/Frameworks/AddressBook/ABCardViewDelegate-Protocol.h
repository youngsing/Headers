//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class ABCardView;
@protocol CNUIUserActionListDataSource;

@protocol ABCardViewDelegate <NSObject>

@optional
@property(readonly) BOOL shouldShowLinkedContacts;
- (id <CNUIUserActionListDataSource>)userActionListDataSource;
- (void)cardViewPhotoDidChange:(ABCardView *)arg1;
- (void)cardViewNoteDidChange:(ABCardView *)arg1;
- (void)cardViewDidEndEditing:(ABCardView *)arg1;
- (void)cardViewWillEndEditing:(ABCardView *)arg1;
- (void)cardViewDidBeginEditing:(ABCardView *)arg1;
@end

