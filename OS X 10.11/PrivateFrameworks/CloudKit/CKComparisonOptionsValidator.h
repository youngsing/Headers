//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKPredicateValidatorInstance.h>

__attribute__((visibility("hidden")))
@interface CKComparisonOptionsValidator : CKPredicateValidatorInstance
{
    unsigned long long _options;
}

@property(nonatomic) unsigned long long options; // @synthesize options=_options;
- (id)CKPropertiesDescription;
- (BOOL)validate:(id)arg1 error:(id *)arg2;
- (id)initWithOptions:(unsigned long long)arg1;

@end

