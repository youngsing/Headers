//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SyncServices/ISyncRecordReference.h>

@class NSDictionary, NSString;

@interface ISyncConcreteRecordReference : ISyncRecordReference
{
    NSString *_globalRecordIdentifier;
    int _entityNumber;
    NSDictionary *_attributes;
}

- (id)recordIdentifierUsingSnapshot:(id)arg1 isModified:(char *)arg2;
- (id)_changedAttributesFromTruthRecord:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setGlobalRecordIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithGlobalRecordIdentifier:(id)arg1 record:(id)arg2 entityName:(id)arg3;
- (id)initWithGlobalRecordIdentifier:(id)arg1 entityName:(id)arg2 attributes:(id)arg3;

@end
