//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Catalyst/CATTaskRequest.h>

@class NSArray;

@interface DMFFetchDevicePropertiesRequest : CATTaskRequest
{
    NSArray *_propertyKeys;
}

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
@property(retain) NSArray *propertyKeys; // @synthesize propertyKeys=_propertyKeys;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
