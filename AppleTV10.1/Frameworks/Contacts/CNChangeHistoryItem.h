//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Contacts/NSSecureCoding-Protocol.h>

@class NSString;

@interface CNChangeHistoryItem : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    long long _changeType;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

