//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SystemMigration/SMDBEntry.h>

@class ODRecord;

@interface SMODDBEntry : SMDBEntry
{
    ODRecord *_backingODRecord;
}

@property(retain) ODRecord *backingODRecord; // @synthesize backingODRecord=_backingODRecord;
- (void).cxx_destruct;
- (BOOL)_createDictionaryFromRecord:(id)arg1;
- (id)name;
- (id)initWithDictionary:(id)arg1 andName:(id)arg2;
- (id)initWithEntry:(id)arg1;
- (id)initWithODRecord:(id)arg1;

@end

