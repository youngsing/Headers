//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsServer/UNSNotificationRecordUpdate.h>

@class UNSNotificationRecord;

@interface UNSNotificationRecordReplaceUpdate : UNSNotificationRecordUpdate
{
    UNSNotificationRecord *_replacedNotificationRecord;
}

+ (id)updateWithNotificationRecord:(id)arg1 replacedNotificationRecord:(id)arg2;
@property(readonly, nonatomic) UNSNotificationRecord *replacedNotificationRecord; // @synthesize replacedNotificationRecord=_replacedNotificationRecord;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_initWithNotificationRecord:(id)arg1 replacedNotificationRecord:(id)arg2;

@end
