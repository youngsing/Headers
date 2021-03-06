//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailboxPrediction/MPAccount-Protocol.h>
#import <MailboxPrediction/NSSecureCoding-Protocol.h>

@class NSString;

@interface MPAccount : NSObject <MPAccount, NSSecureCoding>
{
    NSString *_persistentID;
}

+ (_Bool)supportsSecureCoding;
+ (id)accountWithPersistentID:(id)arg1;
@property(retain, nonatomic) NSString *persistentID; // @synthesize persistentID=_persistentID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

