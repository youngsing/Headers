//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarAgentLink/CalStoreRemoteManagedNode.h>

@class NSArray;

@interface CalStoreRemoteManagedGroup : CalStoreRemoteManagedNode
{
}

+ (BOOL)supportsSecureCoding;
- (id)saveWithError:(id *)arg1;
- (BOOL)removeWithError:(id *)arg1;
- (long long)compare:(id)arg1;
@property(readonly, nonatomic) NSArray *calendars;

@end

