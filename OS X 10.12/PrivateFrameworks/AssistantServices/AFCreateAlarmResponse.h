//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/AFSiriResponse.h>

@class NSString;

@interface AFCreateAlarmResponse : AFSiriResponse
{
    NSString *_alarmIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *alarmIdentifier; // @synthesize alarmIdentifier=_alarmIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
