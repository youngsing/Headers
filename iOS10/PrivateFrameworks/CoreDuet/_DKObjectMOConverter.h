//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _DKObjectMOConverter : NSObject
{
    _Bool _readMetadata;
    _Bool _deduplicateValues;
}

@property _Bool deduplicateValues; // @synthesize deduplicateValues=_deduplicateValues;
@property _Bool readMetadata; // @synthesize readMetadata=_readMetadata;
- (id)dataIntervalsFromManagedObjects:(id)arg1;
- (id)insertObject:(id)arg1 inManagedObjectContext:(id)arg2;
- (_Bool)copyObject:(id)arg1 intoManagedObject:(id)arg2;
- (id)objectsFromManagedObjects:(id)arg1;
- (id)init;

@end
