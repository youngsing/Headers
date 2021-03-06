//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INMoveFileIntent-Protocol.h>

@class NSArray, NSSet, NSString;

@interface INMoveFileIntent : INIntent <INMoveFileIntent>
{
}

- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1;
- (id)_dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (void)setProperties:(id)arg1;
@property(readonly, copy) NSArray *properties;
- (void)setDestinationName:(id)arg1;
@property(readonly, copy) NSString *destinationName;
- (void)setDestinationType:(id)arg1;
@property(readonly, copy) NSString *destinationType;
- (void)setSourceName:(id)arg1;
@property(readonly, copy) NSString *sourceName;
- (void)setSourceType:(id)arg1;
@property(readonly, copy) NSString *sourceType;
- (void)setEntityNames:(id)arg1;
@property(readonly, copy) NSArray *entityNames;
- (void)setEntityTypeSet:(id)arg1;
@property(readonly, copy) NSSet *entityTypeSet;
- (id)initWithEntityTypeSet:(id)arg1 entityNames:(id)arg2 sourceType:(id)arg3 sourceName:(id)arg4 destinationType:(id)arg5 destinationName:(id)arg6 properties:(id)arg7;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

