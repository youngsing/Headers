//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InputMethodKit/NSSecureCoding-Protocol.h>

@class IMKTextReplacementEntryTransactionContext;

@interface IMKTextReplacementEntryTransaction : NSObject <NSSecureCoding>
{
    IMKTextReplacementEntryTransactionContext *_context;
}

+ (id)entryToUpdate:(id)arg1 withEntryToSet:(id)arg2;
+ (id)entryToInsert:(id)arg1;
+ (id)entryToDelete:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(retain) IMKTextReplacementEntryTransactionContext *context; // @synthesize context=_context;
- (id)succeedEntry;
- (id)existingEntry;
@property(readonly) long long transactionType;
- (void)dealloc;
- (id)initWithExistingEntry:(id)arg1 succeedEntry:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

