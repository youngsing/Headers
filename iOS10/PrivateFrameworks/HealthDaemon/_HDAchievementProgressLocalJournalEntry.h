//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDJournalEntry.h>

@class HDCodableCategoryDomainDictionary;

@interface _HDAchievementProgressLocalJournalEntry : HDJournalEntry
{
    HDCodableCategoryDomainDictionary *_dictionary;
    long long _category;
    long long _provenance;
}

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 category:(long long)arg2 provenance:(long long)arg3;

@end

