//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarAgentLink/ABRemoteGroup.h>

@class NSData;

@interface ABRemoteSmartGroup : ABRemoteGroup
{
    NSData *_searchElement;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSData *searchElement; // @synthesize searchElement=_searchElement;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

