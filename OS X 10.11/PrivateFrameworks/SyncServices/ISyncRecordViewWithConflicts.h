//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SyncServices/ISyncConcreteRecordView.h>

@class NSString;

@interface ISyncRecordViewWithConflicts : ISyncConcreteRecordView
{
    NSString *_clientId;
}

- (id)actualRecordsWithIdentifiers:(id)arg1;
- (id)recordGraphNodesWithIdentifiers:(id)arg1;
- (id)recordByApplyingConflictValuesToRecord:(id)arg1 withRecordId:(id)arg2;
- (void)dealloc;
- (id)initWithRecordStore:(id)arg1 entityNames:(id)arg2 clientIdentifier:(id)arg3;

@end
