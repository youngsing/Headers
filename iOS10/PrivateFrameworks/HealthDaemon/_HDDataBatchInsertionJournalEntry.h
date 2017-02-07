//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDJournalEntry.h>

@class HDCodableObjectCollection, HDDataOriginProvenance;

@interface _HDDataBatchInsertionJournalEntry : HDJournalEntry
{
    HDCodableObjectCollection *_collection;
    HDDataOriginProvenance *_provenance;
}

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
@property(readonly, nonatomic) HDDataOriginProvenance *provenance; // @synthesize provenance=_provenance;
@property(readonly, nonatomic) HDCodableObjectCollection *collection; // @synthesize collection=_collection;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithCodableObjectCollection:(id)arg1 provenance:(id)arg2;

@end
