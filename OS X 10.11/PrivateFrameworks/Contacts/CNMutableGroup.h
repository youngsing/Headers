//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNGroup.h>

@class NSString;

@interface CNMutableGroup : CNGroup
{
}

- (id)freezeWithSelfAsSnapshot;
- (id)freeze;
@property(copy, nonatomic) CNGroup *snapshot; // @dynamic snapshot;
@property(copy) NSString *name; // @dynamic name;
@property(copy) NSString *identifier; // @dynamic identifier;
- (id)copy;

@end

