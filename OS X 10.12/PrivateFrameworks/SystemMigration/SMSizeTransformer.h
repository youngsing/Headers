//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@class SMSizeFormatter;

@interface SMSizeTransformer : NSValueTransformer
{
    SMSizeFormatter *sizeFormatter;
    unsigned long long textAlignment;
}

+ (Class)transformedValueClass;
@property unsigned long long textAlignment; // @synthesize textAlignment;
@property(retain) SMSizeFormatter *sizeFormatter; // @synthesize sizeFormatter;
- (void).cxx_destruct;
- (id)transformedValue:(id)arg1;
- (id)initWithPrefixStringID:(long long)arg1;
- (id)initWithPrefixStringID:(long long)arg1 localeIdentifier:(id)arg2;

@end
