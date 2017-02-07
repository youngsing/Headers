//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _DPPrivacyBudgetProperties, _DPPrivacyBudgetRecord;

@interface _DPPrivacyBudget : NSObject
{
    NSString *_name;
    _DPPrivacyBudgetProperties *_budgetProperties;
    _DPPrivacyBudgetRecord *_budgetRecord;
}

+ (BOOL)createDatabaseRecordIfMissingIn:(id)arg1 key:(id)arg2 balance:(long long)arg3;
+ (id)fetchBudgetRecordFrom:(id)arg1 key:(id)arg2;
+ (void)createBudgetRecordsIn:(id)arg1;
+ (void)updateAllBudgetsIn:(id)arg1;
+ (long long)balanceForBudgetWithName:(id)arg1;
+ (BOOL)credit:(unsigned long long)arg1 budgetWithName:(id)arg2;
+ (BOOL)debit:(unsigned long long)arg1 budgetWithName:(id)arg2;
+ (id)budgetWithName:(id)arg1;
+ (void)initialize;
@property(retain) _DPPrivacyBudgetRecord *budgetRecord; // @synthesize budgetRecord=_budgetRecord;
@property(readonly, nonatomic) _DPPrivacyBudgetProperties *budgetProperties; // @synthesize budgetProperties=_budgetProperties;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)initializeBudgetRecordFrom:(id)arg1;
- (id)description;
- (id)initWithName:(id)arg1 budgetProperties:(id)arg2;
- (id)init;

@end
