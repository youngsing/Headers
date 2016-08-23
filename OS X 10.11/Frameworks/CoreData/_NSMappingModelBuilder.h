//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSEntityMapping, NSError, NSManagedObjectModel;

__attribute__((visibility("hidden")))
@interface _NSMappingModelBuilder : NSObject
{
    NSManagedObjectModel *_sourceModel;
    NSManagedObjectModel *_destinationModel;
    NSEntityMapping *_currentEntityMapping;
    NSError *_error;
}

+ (void)setMigrationDebugLevel:(int)arg1;
+ (int)migrationDebugLevel;
- (id)newInferredPropertyMappingWithSourceRelationship:(id)arg1 destinationRelationship:(id)arg2;
- (id)newInferredPropertyMappingWithSourceAttribute:(id)arg1 destinationAttribute:(id)arg2;
- (BOOL)_canTransformSourceAttributeType:(unsigned long long)arg1 toDestinationAttributeType:(unsigned long long)arg2;
- (id)newEntityMappingWithSource:(id)arg1 destination:(id)arg2;
- (BOOL)inferPropertyMappingsForEntityMapping:(id)arg1;
- (id)newInferredMappingModel:(id *)arg1;
- (void)_resetCaches;
- (void)dealloc;
- (id)initWithSourceModel:(id)arg1 destinationModel:(id)arg2;

@end

