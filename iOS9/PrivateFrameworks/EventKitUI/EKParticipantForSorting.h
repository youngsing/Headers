//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EKParticipant, NSString;

@interface EKParticipantForSorting : NSObject
{
    EKParticipant *_participant;
    _Bool _isEmail;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_cachedDisplayName;
}

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)lastName;
- (id)firstName;
- (id)displayName;
- (_Bool)isEmail;
- (id)participant;
- (id)description;
- (id)initWithEKParticipant:(id)arg1;

@end

