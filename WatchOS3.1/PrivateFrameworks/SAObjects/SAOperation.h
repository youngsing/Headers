//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSDictionary, NSString;

@interface SAOperation : AceObject <SAAceSerializable>
{
}

+ (id)operationWithDictionary:(id)arg1 context:(id)arg2;
+ (id)operation;
@property(copy, nonatomic) NSString *operationId;
@property(copy, nonatomic) NSString *domainId;
@property(copy, nonatomic) NSDictionary *constraints;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
