//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSAppleEventDescriptor.h>

@interface NSAppleEventDescriptor (AppleScriptObjC)
+ (id)descriptorWithInt64:(long long)arg1;
+ (id)descriptorWithFloat:(float)arg1;
- (id)descriptorForKeyname:(id)arg1;
- (id)container;
- (id)keyData;
- (unsigned int)keyForm;
- (unsigned int)desiredClass;
- (unsigned long long)unsignedIntegerValue;
- (long long)integerValue;
- (unsigned long long)uint64Value;
- (long long)int64Value;
- (unsigned int)uint32Value;
- (float)floatValue;
@end
